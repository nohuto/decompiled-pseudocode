/*
 * XREFs of MiReturnCommit @ 0x1400B7E40
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiDeleteVadBitmap @ 0x1400087D0 (MiDeleteVadBitmap.c)
 *     MiUnlockCodePage @ 0x1400113B0 (MiUnlockCodePage.c)
 *     MiFreePageFileHashPfns @ 0x1400129B4 (MiFreePageFileHashPfns.c)
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiDeletePteRange @ 0x140038650 (MiDeletePteRange.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MiChargeForLockedPage @ 0x14003C5B0 (MiChargeForLockedPage.c)
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 *     MiObtainMdlCharges @ 0x140077BF0 (MiObtainMdlCharges.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4 (MiRemoveLockedPageFromWorkingSet.c)
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     MiReleaseWriteInProgressCharges @ 0x140082AE0 (MiReleaseWriteInProgressCharges.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MiChargeControlAreaPartition @ 0x14008AF80 (MiChargeControlAreaPartition.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiUnlockMdlWritePages @ 0x1400B55B0 (MiUnlockMdlWritePages.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MmReleaseResourceCharge @ 0x1400D9688 (MmReleaseResourceCharge.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiReleaseNonPagedResources @ 0x1400FC2A8 (MiReleaseNonPagedResources.c)
 *     MiRebuildLargePage @ 0x1400FFA70 (MiRebuildLargePage.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiReturnNonPagedPoolCharges @ 0x14010E528 (MiReturnNonPagedPoolCharges.c)
 *     MiFreeContiguousPages @ 0x140114BDC (MiFreeContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x140123878 (MiAcquireNonPagedResources.c)
 *     MiObtainNonPagedPoolCharges @ 0x140125C58 (MiObtainNonPagedPoolCharges.c)
 *     MiReturnFaultCharges @ 0x14013019C (MiReturnFaultCharges.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiDeleteSessionPdes @ 0x14014BED8 (MiDeleteSessionPdes.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     MiSessionUpdateImageCharges @ 0x140155F24 (MiSessionUpdateImageCharges.c)
 *     MiReturnSplitPages @ 0x14015FA8C (MiReturnSplitPages.c)
 *     MiDeleteBootRange @ 0x140162804 (MiDeleteBootRange.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MmMarkPhysicalMemoryAsGood @ 0x1402134E0 (MmMarkPhysicalMemoryAsGood.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiCleanupPageTablePages @ 0x14021EA6C (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x140220E7C (MiAttemptPageFileReductionApc.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiFreeCombineBlock @ 0x14022A730 (MiFreeCombineBlock.c)
 *     MiGetSubsectionCharges @ 0x1402304A8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     MiGetFileHashPage @ 0x140231DB8 (MiGetFileHashPage.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140453288 (MiReturnSystemImageCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 *     MiChargeSegmentCommit @ 0x14051AD20 (MiChargeSegmentCommit.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x140567DC0 (MiDeleteLeakedSessionPool.c)
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 *     MiChargeSystemImageCommitment @ 0x140576D98 (MiChargeSystemImageCommitment.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     MiDeleteSessionDriverProtos @ 0x1405833BC (MiDeleteSessionDriverProtos.c)
 *     MiMarkBootGuardPage @ 0x14059A720 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReturnCommit(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedCommit; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8

  if ( (__int16 *)a1 == MiSystemPartition
    && (CurrentPrcb = KeGetCurrentPrcb(),
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
        CachedCommit = CurrentPrcb->CachedCommit,
        (unsigned __int64)(a2 + CachedCommit) <= 0x100) )
  {
    while ( 1 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                               a2 + CachedCommit,
                               CachedCommit);
      if ( (int)result == CachedCommit )
        break;
      CachedCommit = (int)result;
      if ( (unsigned __int64)((int)result + a2) > 0x100 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5576), -a2);
    v7 = *(_QWORD *)(a1 + 4768);
    if ( v6 >= v7 && v6 - a2 < v7 )
      return MiSyncCommitSignals(a1, 0LL);
    v8 = *(_QWORD *)(a1 + 4760);
    result = v6 - a2;
    if ( v6 - a2 < v8 && v6 >= v8 )
      return MiSyncCommitSignals(a1, 0LL);
  }
  return result;
}
