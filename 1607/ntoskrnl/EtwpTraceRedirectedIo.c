/*
 * XREFs of EtwpTraceRedirectedIo @ 0x140112424
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceRedirectedIo(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-30h]
  __int64 *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v3 = a1;
  if ( a2 )
    v4 = *(_QWORD *)(a2 + 24);
  else
    v4 = 0LL;
  v7 = 0;
  v5 = &v3;
  v6 = 16;
  return EtwTraceKernelEvent((int)&v5, 1, 0x300u, 272, 290461954);
}
