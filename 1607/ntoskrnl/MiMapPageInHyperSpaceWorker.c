/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140034510
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
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v4; // esi
  __int64 v5; // rdx
  int v6; // eax
  __int64 ValidKernelPte; // rax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9

  v4 = a3 & 0x20000000;
  v5 = 4LL;
  if ( (a3 & 0x20000000) != 0 )
    v5 = 1LL;
  if ( (a3 & 0x40000000) != 0 )
    v6 = a3 & 3;
  else
    v6 = *(unsigned __int8 *)(48 * a1 - 0x58000000000LL + 34) >> 6;
  if ( !v6 || v6 == 3 )
  {
    v5 = (unsigned int)v5 | 8;
  }
  else if ( v6 == 2 )
  {
    v5 = (unsigned int)v5 | 0x18;
  }
  ValidKernelPte = MiMakeValidKernelPte(a1, v5, 0LL);
  v8 = ValidKernelPte;
  if ( !v4 )
    v8 = ValidKernelPte | 0x42;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = (__int64 *)((((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                  - 0x98000000000LL);
  *v11 = v8;
  if ( (unsigned int)MiPteInShadowRange(v11, v8) )
    MiWritePteShadow(v13, v12);
  return v14;
}
