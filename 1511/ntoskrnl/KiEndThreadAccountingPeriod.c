/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x14007BD20
 * Callers:
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KiChooseTargetProcessor @ 0x140088720 (KiChooseTargetProcessor.c)
 *     KiScanInterruptObjectList @ 0x140154E30 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140155000 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140155130 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140155260 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x140155C90 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140156720 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 *     KiIpiInterruptSubDispatch @ 0x14015A800 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x14015AA10 (KxDispatchInterrupt.c)
 *     KiSwInterrupt @ 0x14015D640 (KiSwInterrupt.c)
 * Callees:
 *     KiAccumulateCycleStats @ 0x14014290C (KiAccumulateCycleStats.c)
 *     KiEndCounterAccumulation @ 0x1401C7FE4 (KiEndCounterAccumulation.c)
 */

__int64 __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v6; // rbx
  __int64 v8; // rcx
  _QWORD *i; // rcx
  __int64 result; // rax

  v4 = *(_BYTE *)(a2 + 2);
  v6 = a2;
  if ( (v4 & 0x10) != 0 )
  {
    result = *(unsigned __int8 *)(a2 + 124);
    a4 = *(_QWORD *)(a1 + 23352) - *(_QWORD *)(a1 + 23360);
    *(_QWORD *)(a1 + 8 * result + 23368) += a4;
    v4 &= ~0x10u;
    *(_QWORD *)(a1 + 23360) = 0LL;
  }
  if ( (v4 & 0x3E) != 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      result = KiAccumulateCycleStats(a1, a2, a3, a4);
      v4 &= ~0x20u;
    }
    if ( (v4 & 0x3E) != 0 )
    {
      v8 = *(_QWORD *)(v6 + 104);
      if ( v8 )
      {
        result = *(unsigned int *)(a1 + 1624);
        for ( i = (_QWORD *)(result + v8); i; i = (_QWORD *)i[49] )
          *i += a3;
      }
      if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
      {
        a2 = *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL);
        result = *(_QWORD *)(v6 + 576) & a2;
        if ( result != a2 )
          *(_QWORD *)(a1 + 23392) += a3;
      }
      if ( *(_QWORD *)(v6 + 360) )
        return KiEndCounterAccumulation(v6, a2, a3, a4);
    }
  }
  return result;
}
