/*
 * XREFs of MiLogNonPagedPoolReleaseEvent @ 0x140220498
 * Callers:
 *     MiClearNonPagedPtes @ 0x140065600 (MiClearNonPagedPtes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall MiLogNonPagedPoolReleaseEvent(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  void *result; // rax
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
    v6 = (__int64)((v2 << 25) + 0x10000000) >> 16;
    v5 = 5LL;
    v8 = &v5;
    v9 = 24;
    result = EtwTraceKernelEvent((int)&v8, 1, 0x20000001u, 0x279u, 289413890);
  }
  while ( a1 );
  return result;
}
