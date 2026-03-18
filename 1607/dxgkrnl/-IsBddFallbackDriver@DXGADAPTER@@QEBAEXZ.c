/*
 * XREFs of ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00B66E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_ @ 0x1C00B6E40 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C00D6190 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00D6300 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00D92C0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_0_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DA8E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     DxgkIsPrimarySource @ 0x1C00DB070 (DxgkIsPrimarySource.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0145560 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01688E0 (-DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0169F30 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0196380 (DpiEnableMsBddFallbackDriver.c)
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_1_ @ 0x1C01AC170 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_AddExternalPathsAdaptersCallback_1_.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsBddFallbackDriver(DXGADAPTER *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 75);
  return (v1 & 0x20) != 0 && (v1 & 4) != 0;
}
