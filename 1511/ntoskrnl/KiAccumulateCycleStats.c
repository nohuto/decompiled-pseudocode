/*
 * XREFs of KiAccumulateCycleStats @ 0x14014290C
 * Callers:
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140141F40 (PpmPerfGetCurrentFrequency.c)
 */

void __fastcall KiAccumulateCycleStats(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentFrequency; // eax
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r8

  if ( *(_QWORD *)(a2 + 1952) )
  {
    CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
    v7 = 3LL;
    if ( CurrentFrequency / 0x19 < 3 )
      v7 = CurrentFrequency / 0x19;
    *(_QWORD *)(v5 + 8 * (*(unsigned __int8 *)(v6 + 23858) + 2 * v7)) += a3;
  }
}
