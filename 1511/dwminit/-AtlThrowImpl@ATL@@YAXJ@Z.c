/*
 * XREFs of ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180006770
 * Callers:
 *     ?Rehash@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXI@Z @ 0x180006298 (-Rehash@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 *     ?FreeNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180006420 (-FreeNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W.c)
 *     ?CreateNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@II@Z @ 0x180006594 (-CreateNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager.c)
 *     ?NewNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@II@Z @ 0x180006600 (-NewNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180006758 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

void __fastcall __noreturn ATL::AtlThrowImpl(int a1)
{
  DWORD v1; // eax

  v1 = -1073741801;
  if ( a1 != -2147024882 )
    v1 = -1073741795;
  ATL::_AtlRaiseException(v1);
  JUMPOUT(0x18000678ELL);
}
