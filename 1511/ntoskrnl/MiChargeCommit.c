/*
 * XREFs of MiChargeCommit @ 0x140063610
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MiObtainNonPagedPoolCharges @ 0x140019B68 (MiObtainNonPagedPoolCharges.c)
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiChargeControlAreaPartition @ 0x14006DBF0 (MiChargeControlAreaPartition.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiProbeLockFrame @ 0x1400A7C30 (MiProbeLockFrame.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiChargeForLockedPage @ 0x1400AA160 (MiChargeForLockedPage.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiObtainMdlCharges @ 0x1400BD288 (MiObtainMdlCharges.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiChargeForWriteInProgressPage @ 0x1400E56EC (MiChargeForWriteInProgressPage.c)
 *     MiAcquireNonPagedResources @ 0x1400E8A40 (MiAcquireNonPagedResources.c)
 *     MmChargeResources @ 0x1400F8F18 (MmChargeResources.c)
 *     MiGetFileHashPage @ 0x140107D58 (MiGetFileHashPage.c)
 *     MiSessionInsertImage @ 0x14012599C (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x14013312C (MiStoreChargeReservedPages.c)
 *     MiInitializeCommitment @ 0x14013A1E4 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401D03B4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1401DC124 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1401E2FC8 (MiGetSubsectionCharges.c)
 *     MiMakePageBad @ 0x1401E5A10 (MiMakePageBad.c)
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MiChargeSystemImageCommitment @ 0x1403CC2F8 (MiChargeSystemImageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 *     MiMakeHyperRangeAccessible @ 0x140462F18 (MiMakeHyperRangeAccessible.c)
 *     MiChargeSegmentCommit @ 0x14049C650 (MiChargeSegmentCommit.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 *     MiAllocateDummyPage @ 0x140748580 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x1400E61CC (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x14013A478 (MiSyncCommitSignals.c)
 *     MiTrimSegmentCache @ 0x14014231C (MiTrimSegmentCache.c)
 *     MiCauseOverCommitPopup @ 0x1401DBE7C (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x1401DBF14 (MiPulseCommitSignal.c)
 *     MiIssuePageExtendRequest @ 0x1401DCCB8 (MiIssuePageExtendRequest.c)
 *     MiIssuePageExtendRequestNoWait @ 0x1401DCE50 (MiIssuePageExtendRequestNoWait.c)
 */

__int64 __fastcall MiChargeCommit(unsigned __int64 Queue_low, unsigned __int64 a2, unsigned __int64 CachedCommit)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // bp
  unsigned __int64 v6; // rsi
  signed __int32 v7; // eax
  __int64 v9; // r12
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  signed __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  bool v25; // cc
  char *v26; // rcx
  unsigned __int64 v27; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = CachedCommit;
  v6 = Queue_low;
  if ( (int *)Queue_low == &MiSystemPartition )
  {
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    CachedCommit = CurrentPrcb->CachedCommit;
    if ( a2 <= CachedCommit )
    {
      do
      {
        v7 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
               CachedCommit - a2,
               CachedCommit);
        Queue_low = v7;
        if ( v7 == CachedCommit )
          return 1LL;
        CachedCommit = v7;
      }
      while ( a2 <= v7 );
    }
  }
  if ( (v4 & 4) != 0 )
    v4 |= 2u;
  if ( (v4 & 8) != 0 )
  {
    v4 |= 2u;
    Queue_low = LODWORD(KeGetCurrentThread()[1].Queue);
    if ( (Queue_low & 2) == 0 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      v9 = 64LL;
      if ( (int *)v6 != &MiSystemPartition && *(_QWORD *)(v6 + 5712) >> 6 < 0x40uLL )
        v9 = *(_QWORD *)(v6 + 5712) >> 6;
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
    v9 = *(_QWORD *)(v6 + 5040);
  }
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 5960);
      v11 = v10 + a2;
      if ( v10 + a2 <= v10 || v11 + v9 < v11 )
      {
        if ( (v4 & 4) == 0 )
        {
          if ( (v4 & 2) == 0 )
          {
            ++*(_DWORD *)(v6 + 6164);
            if ( (v4 & 1) == 0 )
              MiCauseOverCommitPopup(v6, a2, CachedCommit);
            MiPulseCommitSignal(v6, a2, CachedCommit);
          }
          return 0LL;
        }
        if ( !v9 )
          ++dword_1402FED3C;
        goto LABEL_57;
      }
      v12 = *(_QWORD *)(v6 + 6120);
      if ( v11 + v9 <= v12 )
        goto LABEL_14;
      v22 = *(_QWORD *)(v6 + 5024);
      if ( v11 >= v22 && v10 < v22 )
        MiPulseCommitSignal(v6, a2, CachedCommit);
      if ( (v4 & 4) != 0 )
        break;
      if ( (v4 & 2) != 0 )
        return 0LL;
      if ( v12 == *(_QWORD *)(v6 + 5000) )
      {
        ++*(_DWORD *)(v6 + 6156);
        MiTrimSegmentCache(Queue_low, a2, CachedCommit);
        if ( (v4 & 1) == 0 )
          MiCauseOverCommitPopup(v6, v23, v24);
        return 0LL;
      }
      if ( (v4 & 1) != 0 )
      {
        ++*(_DWORD *)(v6 + 6160);
        MiIssuePageExtendRequestNoWait(v6, 4096LL, 0LL);
        return 0LL;
      }
      if ( !(unsigned int)MiIssuePageExtendRequest(v6, a2, 255LL, 0LL) )
      {
        ++*(_DWORD *)(v6 + 6152);
        MiCauseOverCommitPopup(v6, a2, CachedCommit);
        return 0LL;
      }
    }
    if ( !v9 )
      ++dword_1402FED38;
LABEL_57:
    if ( a2 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 5056), a2);
      return 1LL;
    }
LABEL_14:
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 5960), v11, v10);
  }
  while ( v10 != v13 );
  v14 = *(_QWORD *)(v6 + 5024);
  v15 = a2 + v13;
  if ( v15 >= v14 && v10 < v14 || (v16 = *(_QWORD *)(v6 + 5016), v15 >= v16) && v10 < v16 )
    MiSyncCommitSignals(v6, 0LL, CachedCommit);
  if ( v15 > *(_QWORD *)(v6 + 4992) )
    *(_QWORD *)(v6 + 4992) = v15;
  if ( (v4 & 2) != 0 )
    return 1LL;
  v17 = *(_QWORD *)(v6 + 6120);
  v18 = v17 / 0xA;
  if ( v15 >= 9 * (v17 / 0xA) )
  {
    v25 = v15 <= v17;
    if ( v15 < v17 )
    {
      if ( v17 - v15 >= 0x400000 )
        goto LABEL_25;
      v25 = v15 <= v17;
    }
    if ( v25 )
    {
      Queue_low = *(_QWORD *)(v6 + 5000);
      if ( v17 < Queue_low && v15 < Queue_low )
      {
        if ( v18 > 0x40000 )
          v18 = 0x40000LL;
        v26 = (char *)(Queue_low - v17);
        v27 = v17 - v15 + v18;
        if ( v27 > (unsigned __int64)v26 )
          v27 = (unsigned __int64)v26;
        MiIssuePageExtendRequestNoWait(v6, v27, 0LL);
      }
    }
  }
LABEL_25:
  if ( (int *)v6 != &MiSystemPartition )
    return 1LL;
  if ( (v4 & 1) == 0 && v15 >= *(_QWORD *)(v6 + 5024) && v17 == *(_QWORD *)(v6 + 5000) )
    MiTrimSegmentCache(Queue_low, v18, CachedCommit);
  v19 = CurrentPrcb->CachedCommit;
  if ( v19 >= 0x80 )
    return 1LL;
  v20 = v15;
  v21 = 256 - v19 + v15;
  if ( v21 <= v20 || v21 + v9 <= v20 || v21 + v9 > v17 )
    return 1LL;
  MiReplenishLocalCommit(v6, CurrentPrcb);
  return 1LL;
}
