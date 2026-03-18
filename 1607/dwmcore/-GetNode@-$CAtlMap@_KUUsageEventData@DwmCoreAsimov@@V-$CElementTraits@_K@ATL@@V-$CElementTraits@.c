/*
 * XREFs of ?GetNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1800B5000
 * Callers:
 *     ?Lookup@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEBA_N_KAEAUUsageEventData@DwmCoreAsimov@@@Z @ 0x1800B4FC8 (-Lookup@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@U.c)
 *     ?RemoveKey@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA_N_K@Z @ 0x1800B502C (-RemoveKey@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrait.c)
 *     ??A?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAAEAUUsageEventData@DwmCoreAsimov@@_K@Z @ 0x180162B78 (--A-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@UUsage.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x18016380C (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::GetNode(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx

  *a4 = a2;
  v5 = (unsigned int)a2 % *((_DWORD *)a1 + 4);
  *a3 = v5;
  v6 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    result = *(_QWORD *)(v6 + 8 * v5);
    *a5 = 0LL;
    while ( result )
    {
      if ( *(_DWORD *)(result + 56) == (_DWORD)a2 && *(_QWORD *)result == a2 )
      {
        *a5 = v8;
        return result;
      }
      v8 = result;
      result = *(_QWORD *)(result + 48);
    }
  }
  return 0LL;
}
