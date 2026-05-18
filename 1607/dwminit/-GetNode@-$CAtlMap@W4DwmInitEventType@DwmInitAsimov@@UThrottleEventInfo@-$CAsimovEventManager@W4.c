/*
 * XREFs of ?GetNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEBAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@AEAI1AEAPEAV312@@Z @ 0x180006B84
 * Callers:
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@IIIII@Z @ 0x1800065A8 (-ProcessEvent@-$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimo_ea_1800065A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::GetNode(
        __int64 *a1,
        unsigned int *a2,
        _DWORD *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax

  v5 = *a2;
  *a4 = *a2;
  v6 = v5 % *((_DWORD *)a1 + 4);
  *a3 = v6;
  v7 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    result = *(_QWORD *)(v7 + 8 * v6);
    *a5 = 0LL;
    while ( result )
    {
      if ( *(_DWORD *)(result + 40) == v5 && *(_DWORD *)result == v5 )
      {
        *a5 = v8;
        return result;
      }
      v8 = result;
      result = *(_QWORD *)(result + 32);
    }
  }
  return 0LL;
}
