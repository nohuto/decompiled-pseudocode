/*
 * XREFs of ?Lookup@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEBA_N_KAEAUUsageEventData@DwmCoreAsimov@@@Z @ 0x180069D2C
 * Callers:
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800697A0 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180073480 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180139318 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x180069CA0 (-GetNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 */

char __fastcall ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::Lookup(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 Node; // rax
  int v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::GetNode(
           a1,
           a2,
           &v6,
           &v8,
           &v7);
  if ( Node )
  {
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(Node + 16);
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(Node + 24);
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(Node + 32);
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(Node + 40);
    LOBYTE(Node) = 1;
  }
  return Node;
}
