/*
 * XREFs of MiChargeCommit @ 0x14002B1D0
 * Callers:
 *     MiInitializeCommitment @ 0x1400019CC (MiInitializeCommitment.c)
 *     MmChargeResources @ 0x140003E88 (MmChargeResources.c)
 *     MiChargeControlAreaPartition @ 0x140027760 (MiChargeControlAreaPartition.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x14002B0B0 (MiObtainFaultCharges.c)
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400FFE04 (MiObtainNonPagedPoolCharges.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     MiChargeForWriteInProgressPage @ 0x140100B1C (MiChargeForWriteInProgressPage.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiChargeForLockedPage @ 0x140101100 (MiChargeForLockedPage.c)
 *     MiObtainMdlCharges @ 0x140101B28 (MiObtainMdlCharges.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiGetFileHashPage @ 0x14011525C (MiGetFileHashPage.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x14013CD1C (MiStoreChargeReservedPages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E045C (MiReAcquireOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResources @ 0x1401E1950 (MiAcquireNonPagedResources.c)
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDD3C (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1401F4F24 (MiGetSubsectionCharges.c)
 *     MiMakePageBad @ 0x1401FDFCC (MiMakePageBad.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiMakeHyperRangeAccessible @ 0x14046C9F0 (MiMakeHyperRangeAccessible.c)
 *     MiChargeSystemImageCommitment @ 0x140483538 (MiChargeSystemImageCommitment.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1404A6130 (MiChargeSegmentCommit.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MiAllocateDummyPage @ 0x140798314 (MiAllocateDummyPage.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     MiReplenishLocalCommit @ 0x1400A3564 (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x14014309C (MiSyncCommitSignals.c)
 *     MiCauseOverCommitPopup @ 0x1401ECBBC (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x1401ECF04 (MiPulseCommitSignal.c)
 *     MiIssuePageExtendRequest @ 0x1401EE7B4 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r13
  char v4; // bp
  unsigned __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  signed __int64 v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  bool v23; // cc
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 CachedCommit; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a3;
  if ( (int *)a1 == MiSystemPartition
    && (_m_prefetchw((const void *)&CurrentPrcb->CachedCommit), v7 = CurrentPrcb->CachedCommit, a2 <= v7) )
  {
    while ( 1 )
    {
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, v7 - a2, v7);
      if ( v8 == v7 )
        return 1LL;
      v7 = v8;
      if ( a2 > v8 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( (a3 & 4) != 0 )
      v4 = a3 | 2;
    if ( (v4 & 8) != 0 )
    {
      v4 |= 2u;
      if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v9 = 64LL;
        if ( (int *)a1 != MiSystemPartition && *(_QWORD *)(a1 + 6288) >> 6 < 0x40uLL )
          v9 = *(_QWORD *)(a1 + 6288) >> 6;
      }
      else
      {
        v4 |= 4u;
        v9 = 0LL;
      }
    }
    else if ( (v4 & 7) != 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 5680);
    }
LABEL_18:
    v11 = 10LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 7208);
      v13 = v12 + a2;
      if ( v12 + a2 > v12 )
      {
        while ( v13 + v9 >= v13 )
        {
          v14 = *(_QWORD *)(a1 + 7336);
          if ( v13 + v9 <= v14 )
            goto LABEL_37;
          v15 = *(_QWORD *)(a1 + 5664);
          if ( v13 >= v15 && v12 < v15 )
          {
            MiPulseCommitSignal(a1);
            v11 = 10LL;
          }
          if ( (v4 & 4) != 0 )
          {
            if ( !v9 )
              ++dword_140327148;
            goto LABEL_36;
          }
          if ( (v4 & 2) != 0 )
            return 0LL;
          if ( v14 != *(_QWORD *)(a1 + 5640) )
          {
            if ( (v4 & 1) != 0 )
            {
              ++*(_DWORD *)(a1 + 7376);
              MiIssuePageExtendRequest(a1, 4096LL, 2LL);
            }
            else
            {
              if ( (unsigned int)MiIssuePageExtendRequest(a1, a2, 0LL) )
                goto LABEL_18;
              ++*(_DWORD *)(a1 + 7368);
              MiCauseOverCommitPopup(a1);
            }
            return 0LL;
          }
          ++*(_DWORD *)(a1 + 7372);
          if ( (int *)a1 == MiSystemPartition )
          {
            v16 = 8LL;
            if ( (v4 & 1) != 0 )
              v16 = 10LL;
            if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, v16) )
            {
              if ( (v4 & 1) == 0 )
                MiCauseOverCommitPopup(a1);
              return 0LL;
            }
          }
          v12 = *(_QWORD *)(a1 + 7208);
          v11 = 10LL;
          v13 = v12 + a2;
          if ( v12 + a2 <= v12 )
            break;
        }
      }
      if ( (v4 & 4) == 0 )
        break;
      if ( !v9 )
        ++dword_14032714C;
LABEL_36:
      if ( a2 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5696), a2);
        return 1LL;
      }
LABEL_37:
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7208), v13, v12);
      if ( v12 == v17 )
      {
        v18 = *(_QWORD *)(a1 + 5664);
        v19 = a2 + v17;
        if ( v19 >= v18 && v12 < v18 || (v20 = *(_QWORD *)(a1 + 5656), v12 < v20) && v19 >= v20 )
          MiSyncCommitSignals(a1, 0LL);
        if ( v19 > *(_QWORD *)(a1 + 5632) )
          *(_QWORD *)(a1 + 5632) = v19;
        if ( (v4 & 2) != 0 )
          return 1LL;
        v21 = *(_QWORD *)(a1 + 7336);
        v22 = v21 / 0xA;
        if ( v19 >= 9 * (v21 / 0xA) )
        {
          v23 = v19 <= v21;
          if ( v19 >= v21 )
            goto LABEL_50;
          if ( v21 - v19 < 0x400000 )
          {
            v23 = v19 <= v21;
LABEL_50:
            if ( v23 )
            {
              v11 = *(_QWORD *)(a1 + 5640);
              if ( v21 < v11 && v19 < v11 )
              {
                if ( v22 > 0x40000 )
                  v22 = 0x40000LL;
                v24 = v11 - v21;
                v25 = v21 - v19 + v22;
                if ( v25 > v24 )
                  v25 = v24;
                MiIssuePageExtendRequest(a1, v25, 2LL);
              }
            }
          }
        }
        if ( (int *)a1 == MiSystemPartition )
        {
          if ( (v4 & 1) == 0 && v19 >= *(_QWORD *)(a1 + 5664) && v21 == *(_QWORD *)(a1 + 5640) )
            MiFreeExcessSegments(v11);
          CachedCommit = CurrentPrcb->CachedCommit;
          if ( CachedCommit < 0x80 )
          {
            v27 = v19;
            v28 = 256 - CachedCommit + v19;
            if ( v28 > v27 && v28 + v9 > v27 && v28 + v9 <= v21 )
            {
              MiReplenishLocalCommit(a1, CurrentPrcb);
              return 1LL;
            }
          }
        }
        return 1LL;
      }
    }
    if ( (v4 & 2) == 0 )
    {
      ++*(_DWORD *)(a1 + 7380);
      if ( (v4 & 1) == 0 )
        MiCauseOverCommitPopup(a1);
      MiPulseCommitSignal(a1);
    }
    return 0LL;
  }
}
