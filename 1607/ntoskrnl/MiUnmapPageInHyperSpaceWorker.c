/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14001DBA0
 * Callers:
 *     MiCopyToUserVa @ 0x140014B50 (MiCopyToUserVa.c)
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiFlushCacheForAttributeChange @ 0x14001D8F4 (MiFlushCacheForAttributeChange.c)
 *     MiConfirmPageIsZero @ 0x14001D990 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiBuildMappedCluster @ 0x14001F5C0 (MiBuildMappedCluster.c)
 *     MiMakeZeroedPageTableRange @ 0x140020CC8 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x140020FBC (MiInitializeSystemPageTable.c)
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     MiCreateSharedZeroPages @ 0x1400390B0 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MiGetFreeOrZeroPage @ 0x14003DC80 (MiGetFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x140061478 (MiSlistGetFreePage.c)
 *     MiRemoveAnyPage @ 0x140064740 (MiRemoveAnyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearContainingMapping @ 0x140075D34 (MiClearContainingMapping.c)
 *     MmOutSwapProcess @ 0x14009126C (MmOutSwapProcess.c)
 *     MmInSwapProcess @ 0x140091564 (MmInSwapProcess.c)
 *     MiFreePagesFromMdl @ 0x140099EF8 (MiFreePagesFromMdl.c)
 *     MiInitializeImageProtos @ 0x1400FD83C (MiInitializeImageProtos.c)
 *     MiInitializeImageHeaderPage @ 0x1400FDDB4 (MiInitializeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiZeroPhysicalPage @ 0x14010A488 (MiZeroPhysicalPage.c)
 *     MiFinishLastForkPageTable @ 0x14010ADFC (MiFinishLastForkPageTable.c)
 *     MiGetFileHashPage @ 0x140114CEC (MiGetFileHashPage.c)
 *     MiComputePageHash @ 0x1401151E0 (MiComputePageHash.c)
 *     MiDemoteLargePage @ 0x14013EC14 (MiDemoteLargePage.c)
 *     MiReplicatePteChange @ 0x1401482F0 (MiReplicatePteChange.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiUpdateSystemPdes @ 0x1401E0EC4 (MiUpdateSystemPdes.c)
 *     MiCopySinglePage @ 0x1401E49FC (MiCopySinglePage.c)
 *     MmReplaceImportEntry @ 0x1401E5FA8 (MmReplaceImportEntry.c)
 *     MiFlushFileOnlyMdl @ 0x1401ED6C8 (MiFlushFileOnlyMdl.c)
 *     MiSplitDirectMapPage @ 0x1401EDA58 (MiSplitDirectMapPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401EF454 (MiReadWriteAnyLevelShadowPte.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14009E1E8 (MiFlushHyperSpace.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
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
