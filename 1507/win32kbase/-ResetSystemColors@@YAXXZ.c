/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C000AEBC
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 * Callees:
 *     xxxSetSysColors @ 0x1C0025244 (xxxSetSysColors.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004FFC4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004FFE0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  _BYTE v2[16]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v3[128]; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v4[32]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v3, (char *)gpsi + 3444, 0x7CuLL);
  v1 = 0LL;
  do
    v4[v1++] = v0++;
  while ( v0 < 0x1F );
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v2);
  xxxSetSysColors(0, v0, (unsigned int)v4, (unsigned int)v3, 6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v2);
}
