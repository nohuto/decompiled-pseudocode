/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x1400E6520
 * Callers:
 *     MiFinishLastForkPageTable @ 0x140003EF4 (MiFinishLastForkPageTable.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiMakeZeroedPageTableRange @ 0x140069E70 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x14006A1F8 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInitializeImageHeaderPage @ 0x1400E0384 (MiInitializeImageHeaderPage.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiBuildMappedCluster @ 0x1400E4A80 (MiBuildMappedCluster.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400E5B38 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiConfirmPageIsZero @ 0x1400E6230 (MiConfirmPageIsZero.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiClearContainingMapping @ 0x1400EF404 (MiClearContainingMapping.c)
 *     MiRemoveAnyPage @ 0x140100180 (MiRemoveAnyPage.c)
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 *     MmInSwapProcess @ 0x140110ACC (MmInSwapProcess.c)
 *     MiMakeProtoTransition @ 0x140132098 (MiMakeProtoTransition.c)
 *     MiReplicatePteChange @ 0x14016D0F4 (MiReplicatePteChange.c)
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiUpdateSystemPdes @ 0x140210604 (MiUpdateSystemPdes.c)
 *     MiCopySinglePage @ 0x140215494 (MiCopySinglePage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402255D8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 *     MiComputePageHash @ 0x140231C88 (MiComputePageHash.c)
 *     MiGetFileHashPage @ 0x140231DB8 (MiGetFileHashPage.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r8
  int v4; // r10d
  unsigned __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // rcx

  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v3 |= 0x100uLL;
  v5 = v3 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  if ( !v4 )
    v5 |= 0x42uLL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
     + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
  v9 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v9 = v5;
  if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v9, v5);
  return v8;
}
