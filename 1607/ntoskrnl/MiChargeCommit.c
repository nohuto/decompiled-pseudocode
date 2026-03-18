/*
 * XREFs of MiChargeCommit @ 0x14002B650
 * Callers:
 *     MmChargeResources @ 0x140003D14 (MmChargeResources.c)
 *     MiChargeControlAreaPartition @ 0x140027BE0 (MiChargeControlAreaPartition.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x14002B530 (MiObtainFaultCharges.c)
 *     MiProbeLockFrame @ 0x14002F730 (MiProbeLockFrame.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiCheckProtoPtePageState @ 0x14004E9B0 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x14004ED80 (MiLockProtoPoolPage.c)
 *     MiInitializeCommitment @ 0x140087100 (MiInitializeCommitment.c)
 *     MiConvertToLinkedWsles @ 0x1400A1844 (MiConvertToLinkedWsles.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiDeletePageTableHierarchy @ 0x1400E4D40 (MiDeletePageTableHierarchy.c)
 *     MmCreateKernelStack @ 0x1400F17B0 (MmCreateKernelStack.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiObtainNonPagedPoolCharges @ 0x140102084 (MiObtainNonPagedPoolCharges.c)
 *     MiGetPageTablePages @ 0x140102808 (MiGetPageTablePages.c)
 *     MiChargeForWriteInProgressPage @ 0x140102D9C (MiChargeForWriteInProgressPage.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiChargeForLockedPage @ 0x140103380 (MiChargeForLockedPage.c)
 *     MiObtainMdlCharges @ 0x140103DA8 (MiObtainMdlCharges.c)
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiGetFileHashPage @ 0x140114CEC (MiGetFileHashPage.c)
 *     MiSessionInsertImage @ 0x14012FB6C (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x14013C7AC (MiStoreChargeReservedPages.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E0630 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResources @ 0x1401E1B24 (MiAcquireNonPagedResources.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDF10 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1401F50F8 (MiGetSubsectionCharges.c)
 *     MiMakePageBad @ 0x1401FE1A0 (MiMakePageBad.c)
 *     MiChargeFullProcessCommitment @ 0x140430960 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140430A30 (MiCommitPageTablesForVad.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiMakeHyperRangeAccessible @ 0x14046DB20 (MiMakeHyperRangeAccessible.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1404BA400 (MiChargeSegmentCommit.c)
 *     MiChargeSystemImageCommitment @ 0x1404EDFD0 (MiChargeSystemImageCommitment.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     MiAllocatePerSessionProtos @ 0x140661818 (MiAllocatePerSessionProtos.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MiAllocateDummyPage @ 0x140798314 (MiAllocateDummyPage.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x1400A3910 (MiFreeExcessSegments.c)
 *     MiReplenishLocalCommit @ 0x1400A4FEC (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x140142B2C (MiSyncCommitSignals.c)
 *     MiCauseOverCommitPopup @ 0x1401ECD90 (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x1401ED0D8 (MiPulseCommitSignal.c)
 *     MiIssuePageExtendRequest @ 0x1401EE988 (MiIssuePageExtendRequest.c)
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
              ++dword_140327108;
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
        ++dword_14032710C;
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
