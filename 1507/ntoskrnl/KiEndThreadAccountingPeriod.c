/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x140102C70
 * Callers:
 *     KiScanInterruptObjectList @ 0x140183B70 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140183D40 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140183E70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140183FA0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x140184F10 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 *     KiIpiInterruptSubDispatch @ 0x14018A270 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x14018A480 (KxDispatchInterrupt.c)
 *     KiSwInterrupt @ 0x14018CF90 (KiSwInterrupt.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r11
  __int64 v5; // r9
  __int64 v7; // rcx
  _QWORD *i; // rcx
  unsigned int CurrentFrequency; // eax
  __int64 v10; // r10
  __int64 v11; // rcx

  v3 = *(_BYTE *)(a2 + 2);
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
      if ( *(_QWORD *)(a2 + 1952) )
      {
        CurrentFrequency = PpmPerfGetCurrentFrequency(a1);
        v11 = 3LL;
        if ( CurrentFrequency / 0x19 < 3 )
          v11 = CurrentFrequency / 0x19;
        *(_QWORD *)(v10 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2 * v11)) += a3;
      }
      v3 &= ~0x20u;
    }
    if ( (v3 & 0x3E) != 0 )
    {
      v7 = *(_QWORD *)(v5 + 104);
      if ( v7 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 1624) + v7); i; i = (_QWORD *)i[49] )
          *i += a3;
      }
      if ( (*(_BYTE *)(v5 + 2) & 8) != 0
        && (*(_QWORD *)(v5 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 1600)
                                                                                              + 136LL) )
      {
        *(_QWORD *)(a1 + 23392) += a3;
      }
      if ( *(_QWORD *)(v5 + 360) )
        KiEndCounterAccumulation(v5);
    }
  }
}
