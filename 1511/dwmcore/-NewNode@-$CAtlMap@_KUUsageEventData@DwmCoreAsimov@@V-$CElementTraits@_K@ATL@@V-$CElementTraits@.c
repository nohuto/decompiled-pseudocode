/*
 * XREFs of ?NewNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x180016D54
 * Callers:
 *     ?CreateNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x180016E4C (-CreateNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrai.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180069D84 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1801392E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@AEBAI_K@Z @ 0x180139418 (-PickSize@-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4Dwm.c)
 *     ?Rehash@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAXI@Z @ 0x1801397A0 (-Rehash@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@U.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::NewNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // rbp
  struct ATL::CAtlPlex *v8; // rax
  int v9; // edx
  unsigned __int64 i; // r8
  __int64 v11; // rdi
  unsigned int v13; // eax

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 56), *(unsigned int *)(a1 + 52), 0x40uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = (unsigned __int64)v8 + 64 * (unsigned __int64)(unsigned int)(v9 - 1) + 8; --v9 >= 0; i -= 64LL )
    {
      *(_QWORD *)(i + 48) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 48);
  *(_QWORD *)v11 = a2;
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 40) = 0LL;
  *(_QWORD *)(v11 + 8) = &DwmCoreAsimov::UsageEventData::`vftable';
  *(_QWORD *)(v11 + 24) = &unk_18016D648;
  *(_DWORD *)(v11 + 56) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 48) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::PickSize(a1);
    ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::Rehash(
      a1,
      v13);
  }
  return v11;
}
