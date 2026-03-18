/*
 * XREFs of ?CreateNode@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x18006159C
 * Callers:
 *     ??A?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAAEAW4HwFlipState@DwmCoreAsimov@@_K@Z @ 0x180061604 (--A-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@W4HwFlip.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAA_NI_N@Z @ 0x18000FCF8 (-InitHashTable@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementT.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180123D34 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::CreateNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  if ( !*(_QWORD *)a1
    && !ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::InitHashTable(
          a1,
          *(_DWORD *)(a1 + 16),
          1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  return ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::NewNode(
           a1,
           a2,
           a3,
           a4);
}
