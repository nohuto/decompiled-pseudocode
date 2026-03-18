/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x140141F40
 * Callers:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     PpmCheckComputeEnergy @ 0x140076B7C (PpmCheckComputeEnergy.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KiChooseTargetProcessor @ 0x140088720 (KiChooseTargetProcessor.c)
 *     PpmPerfGetCurrentState @ 0x14009ACEC (PpmPerfGetCurrentState.c)
 *     KiAccumulateCycleStats @ 0x14014290C (KiAccumulateCycleStats.c)
 *     KiEndDebugAccumulation @ 0x1401C909C (KiEndDebugAccumulation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned int v3; // ecx
  unsigned int v5; // eax

  v1 = *(_QWORD *)(a1 + 24176);
  v2 = *(_QWORD *)(a1 + 24184);
  if ( v1 && v2 )
  {
    v5 = *(_DWORD *)(v2 + 52);
    v3 = *(_DWORD *)(v1 + 364);
    if ( v5 < v3 )
      return v5;
  }
  else
  {
    return 100;
  }
  return v3;
}
