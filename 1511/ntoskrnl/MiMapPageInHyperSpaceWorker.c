/*
 * XREFs of MiMapPageInHyperSpaceWorker @ 0x1400A9AE0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MiClearContainingMapping @ 0x140005854 (MiClearContainingMapping.c)
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 *     MiSlistGetFreePage @ 0x140012D54 (MiSlistGetFreePage.c)
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MiBuildMappedCluster @ 0x14002F79C (MiBuildMappedCluster.c)
 *     MmOutSwapProcess @ 0x1400328BC (MmOutSwapProcess.c)
 *     MmInSwapProcess @ 0x1400356E8 (MmInSwapProcess.c)
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400A9904 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     MiConfirmPageIsZero @ 0x1400AD8D0 (MiConfirmPageIsZero.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     MiInitializeImageHeaderPage @ 0x1400EB630 (MiInitializeImageHeaderPage.c)
 *     MiFinishLastForkPageTable @ 0x1400ECA54 (MiFinishLastForkPageTable.c)
 *     MiMakeProtoTransition @ 0x1400ED218 (MiMakeProtoTransition.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiGetFileHashPage @ 0x140107D58 (MiGetFileHashPage.c)
 *     MiComputePageHash @ 0x14010875C (MiComputePageHash.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiDemoteLargePage @ 0x140132C08 (MiDemoteLargePage.c)
 *     MiReplicatePteChange @ 0x14013F8C8 (MiReplicatePteChange.c)
 *     MmReplaceImportEntry @ 0x1401CF09C (MmReplaceImportEntry.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiUpdateSystemPdes @ 0x1401D0868 (MiUpdateSystemPdes.c)
 *     MiCopySinglePage @ 0x1401D3E08 (MiCopySinglePage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401DE980 (MiReadWriteAnyLevelShadowPte.c)
 *     MiFlushFileOnlyMdl @ 0x1401E35D4 (MiFlushFileOnlyMdl.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v3; // edi
  __int64 v4; // r9
  int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 *v12; // rdi

  v3 = a3 & 0x20000000;
  v4 = 4LL;
  if ( (a3 & 0x20000000) != 0 )
    v4 = 1LL;
  if ( (a3 & 0x40000000) != 0 )
    v6 = a3 & 3;
  else
    v6 = *(unsigned __int8 *)(48 * a1 - 0x58000000000LL + 34) >> 6;
  if ( !v6 || v6 == 3 )
  {
    v4 = (unsigned int)v4 | 8;
  }
  else if ( v6 == 2 )
  {
    v4 = (unsigned int)v4 | 0x18;
  }
  v7 = MmProtectToPteMask[v4] ^ ((a1 << 12) ^ MmProtectToPteMask[v4]) & 0xFFFFFFFFF000LL | 0x21;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v7 |= 0x100uLL;
  v8 = (((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int8)word_1402FE760 << 8)) & 0x100 ^ (unsigned __int64)v7) & 0xFFFFFFFFFFFFFF7FuLL;
  if ( !v3 )
    v8 |= 0x42uLL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *a2 = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
      + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
  v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v12 = v8;
  if ( (unsigned int)MiPteInShadowRange(v12) )
    MiWritePteShadow(v12, v8);
  return v11;
}
