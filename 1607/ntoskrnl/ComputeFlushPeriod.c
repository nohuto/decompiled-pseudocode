/*
 * XREFs of ComputeFlushPeriod @ 0x140149C8C
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140149B64 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     RunningHash @ 0x140085534 (RunningHash.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeFlushPeriod(unsigned __int64 a1)
{
  __int64 v1; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-30h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 400);
  v3 = 0;
  v4 = a1 >> 4;
  v5 = *(_OWORD *)(*(_QWORD *)(v1 + 8) - 16LL);
  RunningHash(&v3, (__int64)&v5, 0x10uLL);
  RunningHash(&v3, (__int64)&v4, 8uLL);
  return 32769 * ((9 * v3) ^ ((unsigned int)(9 * v3) >> 11)) % 0x927C0 + 600000;
}
