/*
 * XREFs of EtwTraceInswapProcess @ 0x14020DDE4
 * Callers:
 *     MmInSwapProcess @ 0x1400356E8 (MmInSwapProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceInswapProcess(__int64 a1)
{
  unsigned __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+38h] [rbp-30h]
  unsigned __int64 *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v3 = 0LL;
  LODWORD(v3) = *(_DWORD *)(a1 + 744);
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  v4 = &v2;
  v6 = 0;
  v5 = 12;
  return EtwTraceKernelEvent((int)&v4, 1, 0x20000800u, 0x323u, 5249282);
}
