/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C006A0AC
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0041FB4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041FD0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetSysColors @ 0x1C0049F7C (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  _BYTE v2[16]; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v3[32]; // [rsp+40h] [rbp-118h] BYREF
  char v4[128]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v3, (char *)gpsi + 3444, 0x7CuLL);
  v1 = 0LL;
  do
  {
    *(_DWORD *)&v4[v1] = v0;
    v1 += 4LL;
    ++v0;
  }
  while ( v0 < 0x1F );
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v2);
  xxxSetSysColors(0LL, v0, v4, v3, 6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v2);
}
