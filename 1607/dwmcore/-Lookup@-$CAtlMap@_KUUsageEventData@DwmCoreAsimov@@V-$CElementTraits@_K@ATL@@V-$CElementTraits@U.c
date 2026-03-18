/*
 * XREFs of ?Lookup@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEBA_N_KAEAUUsageEventData@DwmCoreAsimov@@@Z @ 0x1800B4FC8
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800B4A18 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180162C64 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1800B5000 (-GetNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 */

char __fastcall ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::Lookup(
        int a1,
        int a2,
        __int64 a3)
{
  __int64 Node; // rax
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::GetNode(
           a1,
           a2,
           (unsigned int)&v6,
           (unsigned int)&v8,
           (__int64)&v7);
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
