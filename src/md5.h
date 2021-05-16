#ifndef MD5_H
#define MD5_H

#include <stddef.h>
#include <stdint.h>

typedef unsigned char u_char;

void md5sum_hex(const char *data, size_t n, u_char result[32]);

void md5sum(const char *data, size_t n, u_char result[16]);

#endif /* MD5_h */