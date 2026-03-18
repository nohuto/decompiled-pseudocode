/*
 * XREFs of MiChargeCommit @ 0x14008F4A0
 * Callers:
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MiChargeForLockedPage @ 0x14003C5B0 (MiChargeForLockedPage.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiObtainMdlCharges @ 0x140077BF0 (MiObtainMdlCharges.c)
 *     MiChargeControlAreaPartition @ 0x14008AF80 (MiChargeControlAreaPartition.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MmChargeResources @ 0x1400D95D8 (MmChargeResources.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiChargeForWriteInProgressPage @ 0x14011E720 (MiChargeForWriteInProgressPage.c)
 *     MiAcquireNonPagedResources @ 0x140123878 (MiAcquireNonPagedResources.c)
 *     MiObtainNonPagedPoolCharges @ 0x140125C58 (MiObtainNonPagedPoolCharges.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     MiInitializeCommitment @ 0x14016BB7C (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020FF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x140220E7C (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1402304A8 (MiGetSubsectionCharges.c)
 *     MiGetFileHashPage @ 0x140231DB8 (MiGetFileHashPage.c)
 *     MiMakePageBad @ 0x140232438 (MiMakePageBad.c)
 *     MiMakeHyperRangeAccessible @ 0x1404680B8 (MiMakeHyperRangeAccessible.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     MiChargeSegmentCommit @ 0x14051AD20 (MiChargeSegmentCommit.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     MiChargeSystemImageCommitment @ 0x140576D98 (MiChargeSystemImageCommitment.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 *     MiAllocateDummyPage @ 0x1407C79D0 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x1407D501C (MiInitializeGapFrames.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x14011EB30 (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x14016BDFC (MiSyncCommitSignals.c)
 *     MiTrimSegmentCache @ 0x1401701C0 (MiTrimSegmentCache.c)
 *     MiCauseOverCommitPopup @ 0x140220B2C (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x140220BC8 (MiPulseCommitSignal.c)
 *     MiIssuePageExtendRequest @ 0x140221B0C (MiIssuePageExtendRequest.c)
 *     MiIssuePageExtendRequestNoWait @ 0x140221D54 (MiIssuePageExtendRequestNoWait.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r13
  char v5; // bp
  unsigned __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  signed __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  bool v21; // cc
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 CachedCommit; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a3;
  if ( (__int16 *)a1 == MiSystemPartition
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
      v5 = a3 | 2;
    if ( (v5 & 8) != 0 )
    {
      v5 |= 2u;
      if ( ((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v9 = 64LL;
        if ( (__int16 *)a1 != MiSystemPartition && *(_QWORD *)(a1 + 5328) >> 6 < 0x40uLL )
          v9 = *(_QWORD *)(a1 + 5328) >> 6;
      }
      else
      {
        v5 |= 4u;
        v9 = 0LL;
      }
    }
    else if ( (v5 & 7) != 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 4784);
    }
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 5576);
      v12 = v11 + a2;
      if ( v11 + a2 > v11 )
      {
        while ( v12 + v9 >= v12 )
        {
          v13 = *(_QWORD *)(a1 + 5736);
          if ( v12 + v9 <= v13 )
            goto LABEL_33;
          v14 = *(_QWORD *)(a1 + 4768);
          if ( v12 >= v14 && v11 < v14 )
            MiPulseCommitSignal(a1);
          if ( (v5 & 4) != 0 )
          {
            if ( !v9 )
              ++dword_14034F1EC;
            goto LABEL_33;
          }
          if ( (v5 & 2) != 0 )
            return 0LL;
          if ( v13 == *(_QWORD *)(a1 + 4744) )
          {
            ++*(_DWORD *)(a1 + 5772);
            MiTrimSegmentCache();
            if ( (v5 & 1) == 0 )
              MiCauseOverCommitPopup(a1);
            return 0LL;
          }
          if ( (v5 & 1) != 0 )
          {
            ++*(_DWORD *)(a1 + 5776);
            MiIssuePageExtendRequestNoWait(a1, 4096LL, 0LL);
            return 0LL;
          }
          if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 255LL, 0LL) )
          {
            ++*(_DWORD *)(a1 + 5768);
            MiCauseOverCommitPopup(a1);
            return 0LL;
          }
          v11 = *(_QWORD *)(a1 + 5576);
          v12 = v11 + a2;
          if ( v11 + a2 <= v11 )
            break;
        }
      }
      if ( (v5 & 4) == 0 )
        break;
      if ( !v9 )
        ++dword_14034F1F0;
LABEL_33:
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5576), v12, v11);
      if ( v11 == v15 )
      {
        v16 = *(_QWORD *)(a1 + 4768);
        v17 = a2 + v15;
        if ( v17 >= v16 && v11 < v16 || (v18 = *(_QWORD *)(a1 + 4760), v11 < v18) && v17 >= v18 )
          MiSyncCommitSignals(a1, 0LL);
        if ( v17 > *(_QWORD *)(a1 + 4736) )
          *(_QWORD *)(a1 + 4736) = v17;
        if ( (v5 & 2) == 0 )
        {
          v19 = *(_QWORD *)(a1 + 5736);
          v20 = v19 / 0xA;
          if ( v17 >= 9 * (v19 / 0xA) )
          {
            v21 = v17 <= v19;
            if ( v17 >= v19 )
              goto LABEL_46;
            if ( v19 - v17 < 0x400000 )
            {
              v21 = v17 <= v19;
LABEL_46:
              if ( v21 )
              {
                v22 = *(_QWORD *)(a1 + 4744);
                if ( v19 < v22 && v17 < v22 )
                {
                  if ( v20 > 0x40000 )
                    v20 = 0x40000LL;
                  v23 = v22 - v19;
                  v24 = v19 - v17 + v20;
                  if ( v24 > v23 )
                    v24 = v23;
                  MiIssuePageExtendRequestNoWait(a1, v24, 0LL);
                }
              }
            }
          }
          if ( (__int16 *)a1 == MiSystemPartition )
          {
            if ( (v5 & 1) == 0 && v17 >= *(_QWORD *)(a1 + 4768) && v19 == *(_QWORD *)(a1 + 4744) )
              MiTrimSegmentCache();
            CachedCommit = CurrentPrcb->CachedCommit;
            if ( CachedCommit < 0x80 )
            {
              v26 = v17;
              v27 = 256 - CachedCommit + v17;
              if ( v27 > v26 && v27 + v9 > v26 && v27 + v9 <= v19 )
                MiReplenishLocalCommit(a1, CurrentPrcb);
            }
          }
        }
        return 1LL;
      }
    }
    if ( (v5 & 2) == 0 )
    {
      ++*(_DWORD *)(a1 + 5780);
      if ( (v5 & 1) == 0 )
        MiCauseOverCommitPopup(a1);
      MiPulseCommitSignal(a1);
    }
    return 0LL;
  }
}
