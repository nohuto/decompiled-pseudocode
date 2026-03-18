/*
 * XREFs of MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0
 * Callers:
 *     MiFinishLastForkPageTable @ 0x140003EF4 (MiFinishLastForkPageTable.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
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
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiUnmapPageInHyperSpaceWorker(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned int v6; // esi
  unsigned __int64 result; // rax
  int v8; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v9; // [rsp+24h] [rbp-D4h]
  __int64 v10; // [rsp+28h] [rbp-D0h]
  __int64 v11; // [rsp+30h] [rbp-C8h]
  __int64 v12; // [rsp+38h] [rbp-C0h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (_QWORD *)((((a1 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((__int64)CurrentPrcb->HyperPte & 0xFFF) + 1;
  *v4 = 0LL;
  if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v4, 0LL);
  if ( v6 == 64 )
  {
    v10 = 20LL;
    v8 = 0;
    v9 = 1;
    v11 = 0LL;
    v12 = 0LL;
    MiInsertTbFlushEntry(&v8, v5, 64LL, 0LL);
    MiFlushTbList(&v8);
    result = (unsigned __int64)KeGetCurrentPrcb();
    *(_QWORD *)(result + 24520) = v5;
  }
  else
  {
    result = v5 | v6;
    KeGetCurrentPrcb()->HyperPte = (void *)result;
  }
  if ( a2 != 17 )
  {
    result = a2;
    __writecr8(a2);
  }
  return result;
}
