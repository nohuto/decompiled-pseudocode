/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14001D720
 * Callers:
 *     MiCopyToUserVa @ 0x1400146D0 (MiCopyToUserVa.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiFlushCacheForAttributeChange @ 0x14001D474 (MiFlushCacheForAttributeChange.c)
 *     MiConfirmPageIsZero @ 0x14001D510 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiBuildMappedCluster @ 0x14001F140 (MiBuildMappedCluster.c)
 *     MiMakeZeroedPageTableRange @ 0x140020848 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x140060FF8 (MiSlistGetFreePage.c)
 *     MiRemoveAnyPage @ 0x1400642C0 (MiRemoveAnyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearContainingMapping @ 0x140075DB4 (MiClearContainingMapping.c)
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 *     MmInSwapProcess @ 0x140090CC4 (MmInSwapProcess.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiInitializeImageProtos @ 0x1400FB5BC (MiInitializeImageProtos.c)
 *     MiInitializeImageHeaderPage @ 0x1400FBB34 (MiInitializeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiFinishLastForkPageTable @ 0x140108B7C (MiFinishLastForkPageTable.c)
 *     MiGetFileHashPage @ 0x14011525C (MiGetFileHashPage.c)
 *     MiComputePageHash @ 0x140115750 (MiComputePageHash.c)
 *     MiDemoteLargePage @ 0x14013F184 (MiDemoteLargePage.c)
 *     MiReplicatePteChange @ 0x140148860 (MiReplicatePteChange.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiUpdateSystemPdes @ 0x1401E0CF0 (MiUpdateSystemPdes.c)
 *     MiCopySinglePage @ 0x1401E4828 (MiCopySinglePage.c)
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 *     MiFlushFileOnlyMdl @ 0x1401ED4F4 (MiFlushFileOnlyMdl.c)
 *     MiSplitDirectMapPage @ 0x1401ED884 (MiSplitDirectMapPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401EF280 (MiReadWriteAnyLevelShadowPte.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14009D9E8 (MiFlushHyperSpace.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiUnmapPageInHyperSpaceWorker(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // r9d
  unsigned __int64 result; // rax

  v2 = a2;
  v3 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v4 = (_QWORD *)((((a1 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v4 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v4, a2) )
    MiWritePteShadow(v5, 0LL);
  if ( v6 == 64 )
  {
    MiFlushHyperSpace();
    v6 = 0;
  }
  result = v3 | v6;
  KeGetCurrentPrcb()->HyperPte = (void *)result;
  if ( v2 != 17 )
  {
    result = v2;
    __writecr8(v2);
  }
  return result;
}
