/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0
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
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiUnmapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 HyperPte; // rbp
  int v4; // edi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned int v7; // edi
  unsigned __int64 result; // rax

  HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
  v4 = HyperPte & 0xFFF;
  v5 = (_QWORD *)((((a1 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v7 = v4 + 1;
  *v5 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v5) )
    MiWritePteShadow(v5, 0LL);
  if ( v7 == 64 )
  {
    MiFlushHyperSpace();
    v7 = 0;
  }
  result = v6 | v7;
  KeGetCurrentPrcb()->HyperPte = (void *)result;
  if ( a2 != 17 )
  {
    result = a2;
    __writecr8(a2);
  }
  return result;
}
