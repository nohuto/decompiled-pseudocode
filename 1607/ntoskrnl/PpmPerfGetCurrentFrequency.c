/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x140149980
 * Callers:
 *     KiDirectSwitchThread @ 0x140052C70 (KiDirectSwitchThread.c)
 *     KiChooseTargetProcessor @ 0x140057550 (KiChooseTargetProcessor.c)
 *     KiRetireDpcList @ 0x140058280 (KiRetireDpcList.c)
 *     KiSwapThread @ 0x14005B200 (KiSwapThread.c)
 *     KiEndDebugAccumulation @ 0x140082A84 (KiEndDebugAccumulation.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D37A0 (KiStartThreadCycleAccumulation.c)
 *     PpmCheckComputeEnergy @ 0x1400D483C (PpmCheckComputeEnergy.c)
 *     PpmPerfGetCurrentState @ 0x1400FAEEC (PpmPerfGetCurrentState.c)
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
