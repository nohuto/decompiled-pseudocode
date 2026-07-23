/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x1400D05F0
 * Callers:
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiChooseTargetProcessor @ 0x1400570D0 (KiChooseTargetProcessor.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400CEAA0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D0900 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KiScanInterruptObjectList @ 0x14015F2D0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14015F4A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F5D0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14015F700 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401606C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401612B0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401632C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 *     KiIpiInterruptSubDispatch @ 0x1401661A0 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x1401663B0 (KxDispatchInterrupt.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     KiEndCounterAccumulation @ 0x1401D6E50 (KiEndCounterAccumulation.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r11
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v7; // rcx
  _QWORD *i; // rcx
  __int64 v9; // r10
  unsigned int CurrentFrequency; // kr00_4

  v3 = *(_BYTE *)(a2 + 2);
  v4 = a3;
  v5 = a2;
  if ( (v3 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 23368) += *(_QWORD *)(a1 + 23352) - *(_QWORD *)(a1 + 23360);
    v3 &= ~0x10u;
    *(_QWORD *)(a1 + 23360) = 0LL;
  }
  if ( (v3 & 0x3E) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      if ( *(_QWORD *)(a2 + 1960) )
      {
        CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
        a3 = 3LL;
        if ( CurrentFrequency / 0x19 < 3 )
          a3 = CurrentFrequency / 0x19;
        a2 = v9 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2 * a3);
        *(_QWORD *)a2 += v4;
      }
      v3 &= ~0x20u;
    }
    if ( (v3 & 0x3E) != 0 )
    {
      v7 = *(_QWORD *)(v5 + 104);
      if ( v7 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 1624) + v7); i; i = (_QWORD *)i[51] )
          *i += v4;
      }
      if ( (*(_BYTE *)(v5 + 2) & 8) != 0 )
      {
        a2 = *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL);
        if ( (*(_QWORD *)(v5 + 576) & a2) != a2 )
          *(_QWORD *)(a1 + 23392) += v4;
      }
      if ( *(_QWORD *)(v5 + 360) )
        KiEndCounterAccumulation(v5, a2, a3, v5);
    }
  }
}
