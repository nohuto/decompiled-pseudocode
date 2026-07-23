/*
 * XREFs of MiLogNonPagedPoolReleaseEvent @ 0x1401EC52C
 * Callers:
 *     MiClearNonPagedPtes @ 0x1400240A0 (MiClearNonPagedPtes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogNonPagedPoolReleaseEvent(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 *v8; // [rsp+48h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  do
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v2 = a1[1] | 0x8000000000000000uLL;
    v3 = v2;
    do
    {
      a1 = (_QWORD *)*a1;
      v2 -= 8LL;
    }
    while ( a1 && (a1[1] | 0x8000000000000000uLL) == v2 );
    v10 = 0;
    v7 = (__int64)(v3 - v2) >> 3;
    v9 = 24;
    v6 = (__int64)((v2 << 25) + 0x10000000) >> 16;
    v5 = 5LL;
    v8 = &v5;
    result = EtwTraceKernelEvent((int)&v8, 1, 0x20000001u, 633, 289413890);
  }
  while ( a1 );
  return result;
}
