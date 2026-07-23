/*
 * XREFs of HvlReadPerformanceStateCounters @ 0x1401BF2E8
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 */

void __fastcall HvlReadPerformanceStateCounters(ULONG a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // rsi
  struct _KPRCB *Prcb; // r8
  __int64 v8; // rdx

  v4 = a2;
  if ( a2 < 2 )
  {
    _mm_lfence();
    Prcb = (struct _KPRCB *)KeGetPrcb(a1);
    if ( KeGetCurrentPrcb() == Prcb )
      __writemsr(0x400000C1u, 0LL);
    v8 = *((unsigned int *)&xmmword_140356000 + 2 * v4 + 7);
    *a3 = Prcb->StatisticsPage[*((unsigned int *)&xmmword_140356000 + 2 * v4 + 6)];
    *a4 = Prcb->StatisticsPage[v8];
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0LL;
  }
}
