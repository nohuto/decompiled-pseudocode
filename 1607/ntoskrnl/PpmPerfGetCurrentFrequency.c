/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x140149EF0
 * Callers:
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiChooseTargetProcessor @ 0x1400570D0 (KiChooseTargetProcessor.c)
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KiEndDebugAccumulation @ 0x140083704 (KiEndDebugAccumulation.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 *     PpmCheckComputeEnergy @ 0x1400D26DC (PpmCheckComputeEnergy.c)
 *     PpmPerfGetCurrentState @ 0x1400F8C78 (PpmPerfGetCurrentState.c)
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
    v5 = *(_DWORD *)(v2 + 60);
    v3 = *(_DWORD *)(v1 + 372);
    if ( v5 < v3 )
      return v5;
  }
  else
  {
    return 100;
  }
  return v3;
}
