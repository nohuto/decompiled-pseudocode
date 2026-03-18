/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x14009E2E0
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x14001D990 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x140021D60 (MiDeleteClusterSection.c)
 *     MiInitializeTransitionPfn @ 0x140023124 (MiInitializeTransitionPfn.c)
 *     MiObtainProtoReference @ 0x140023658 (MiObtainProtoReference.c)
 *     MiLockLeafPage @ 0x14002EA50 (MiLockLeafPage.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiDeleteBatch @ 0x140064B10 (MiDeleteBatch.c)
 *     MiReplacePageTablePage @ 0x1400A55B8 (MiReplacePageTablePage.c)
 *     MiReplacePageOfProtoPool @ 0x1400A99CC (MiReplacePageOfProtoPool.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400B3968 (MiUnlockNestedProtoPoolPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C61A4 (MiWaitForCollidedFaultComplete.c)
 *     MiInitializePfn @ 0x1400E7280 (MiInitializePfn.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiTradeActivePage @ 0x14010B184 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x14010BB54 (MiSwapStackPageNoDpc.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiStackTheftFreezeProcessors @ 0x1401E65E4 (MiStackTheftFreezeProcessors.c)
 *     MiSplitDirectMapPage @ 0x1401EDA58 (MiSplitDirectMapPage.c)
 *     MiLockNestedPageAtDpc @ 0x1401F2B78 (MiLockNestedPageAtDpc.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 *     MiSwapHardFaultPage @ 0x1401FE040 (MiSwapHardFaultPage.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
