/*
 * XREFs of ?NewNode@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@AEAAPEAVCNode@12@AEBW4DwmEventType@DwmCoreAsimov@@II@Z @ 0x18006001C
 * Callers:
 *     ?CreateNode@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@AEAAPEAVCNode@12@AEBW4DwmEventType@DwmCoreAsimov@@II@Z @ 0x18006010C (-CreateNode@-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18006117C (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180123D34 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@AEBAI_K@Z @ 0x180123E64 (-PickSize@-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4Dwm.c)
 *     ?Rehash@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@QEAAXI@Z @ 0x1801240B8 (-Rehash@-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4DwmEv.c)
 */

__int64 __fastcall ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::NewNode(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // rbp
  struct ATL::CAtlPlex *v8; // r8
  int v9; // edx
  __int64 i; // rcx
  __int64 v11; // rdi
  unsigned int v13; // eax

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 56), *(unsigned int *)(a1 + 52), 0x30uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = (__int64)v8 + 48 * (unsigned int)(v9 - 1) + 8; --v9 >= 0; i -= 48LL )
    {
      *(_QWORD *)(i + 32) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 32);
  *(_DWORD *)v11 = *a2;
  *(_DWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 12) = 0;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_DWORD *)(v11 + 40) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 32) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::PickSize(a1);
    ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::Rehash(
      a1,
      v13);
  }
  return v11;
}
