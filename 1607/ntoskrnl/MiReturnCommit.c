/*
 * XREFs of MiReturnCommit @ 0x14004E080
 * Callers:
 *     MmReleaseResourceCharge @ 0x140003E4C (MmReleaseResourceCharge.c)
 *     MiChargeControlAreaPartition @ 0x140027760 (MiChargeControlAreaPartition.c)
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiRemoveLockedPageCharge @ 0x14004CD60 (MiRemoveLockedPageCharge.c)
 *     MiUnlockMdlWritePages @ 0x14004D030 (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiDeleteVadBitmap @ 0x140075150 (MiDeleteVadBitmap.c)
 *     MiReleaseWriteInProgressCharges @ 0x14008E6FC (MiReleaseWriteInProgressCharges.c)
 *     MiDeleteSegmentPages @ 0x14008F7E0 (MiDeleteSegmentPages.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiReturnNonPagedPoolCharges @ 0x140097D70 (MiReturnNonPagedPoolCharges.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiDeleteKernelStack @ 0x14009FEC0 (MiDeleteKernelStack.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MiReturnFaultCharges @ 0x1400B0E08 (MiReturnFaultCharges.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400B899C (MiRemoveLockedPageFromWorkingSet.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MiFreePageFileHashPfns @ 0x1400BC788 (MiFreePageFileHashPfns.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400FFE04 (MiObtainNonPagedPoolCharges.c)
 *     MiCleanupPageTablePages @ 0x1401004E0 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiChargeForLockedPage @ 0x140101100 (MiChargeForLockedPage.c)
 *     MiObtainMdlCharges @ 0x140101B28 (MiObtainMdlCharges.c)
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x140111E80 (MiFreeContiguousPages.c)
 *     MiGetFileHashPage @ 0x14011525C (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MiDeleteSessionPdes @ 0x140126258 (MiDeleteSessionPdes.c)
 *     MiSessionUpdateImageCharges @ 0x14012CF48 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     MiStoreChargeReservedPages @ 0x14013CD1C (MiStoreChargeReservedPages.c)
 *     MiReleaseNonPagedResources @ 0x14013F08C (MiReleaseNonPagedResources.c)
 *     MiReturnSplitPageCharges @ 0x14014BF00 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0760 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E09C4 (MiReleaseOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResources @ 0x1401E1950 (MiAcquireNonPagedResources.c)
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDD3C (MiAttemptPageFileReductionApc.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     MiGetSubsectionCharges @ 0x1401F4F24 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     MiFreeLargePages @ 0x1401F535C (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiFreeCombineBlock @ 0x1401F9A50 (MiFreeCombineBlock.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14042F060 (MiDecommitRegion.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140483538 (MiChargeSystemImageCommitment.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1404A6130 (MiChargeSegmentCommit.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1405323F8 (MiDeleteLeakedSessionPool.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     MiDeleteSessionDriverProtos @ 0x140546890 (MiDeleteSessionDriverProtos.c)
 *     MiReturnSystemImageCommitment @ 0x1405478C4 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x14054E61C (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 *     MiDeletePagingFiles @ 0x14065AFE8 (MiDeletePagingFiles.c)
 *     MiCleanPhysicalProcessPages @ 0x14065C3F0 (MiCleanPhysicalProcessPages.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140662180 (MiFreeSubsectionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x14014309C (MiSyncCommitSignals.c)
 */

unsigned __int64 __fastcall MiReturnCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedCommit; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rtt

  result = *(_QWORD *)(a1 + 5696);
  v3 = a2;
  if ( !result )
    goto LABEL_2;
  while ( 1 )
  {
    v9 = a2;
    if ( a2 > result )
      v9 = result;
    v10 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5696), result - v9, result);
    if ( v10 == result )
      break;
    if ( !result )
      goto LABEL_2;
  }
  v3 = a2 - v9;
  if ( a2 != v9 )
  {
LABEL_2:
    if ( (int *)a1 == MiSystemPartition
      && (CurrentPrcb = KeGetCurrentPrcb(),
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
          CachedCommit = CurrentPrcb->CachedCommit,
          v3 + CachedCommit <= 0x100) )
    {
      while ( 1 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                                 v3 + CachedCommit,
                                 CachedCommit);
        if ( (int)result == CachedCommit )
          break;
        CachedCommit = (int)result;
        if ( (int)result + v3 > 0x100 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7208), -(__int64)v3);
      v7 = *(_QWORD *)(a1 + 5664);
      if ( v6 >= v7 && v6 - v3 < v7 )
        return MiSyncCommitSignals(a1, 0LL);
      v8 = *(_QWORD *)(a1 + 5656);
      result = v6 - v3;
      if ( v6 >= v8 && result < v8 )
        return MiSyncCommitSignals(a1, 0LL);
    }
  }
  return result;
}
