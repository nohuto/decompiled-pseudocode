/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x140034990
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
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
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
