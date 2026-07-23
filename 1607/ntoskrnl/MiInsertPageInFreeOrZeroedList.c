/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x140066D40
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x1400218E0 (MiDeleteClusterSection.c)
 *     MiReleaseFreshPageLocked @ 0x140021D24 (MiReleaseFreshPageLocked.c)
 *     MiFreeSmallPageFromMdl @ 0x140022670 (MiFreeSmallPageFromMdl.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140064A70 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiZeroSinglePage @ 0x140066710 (MiZeroSinglePage.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 *     MiReturnPhysicalPoolPages @ 0x140097B80 (MiReturnPhysicalPoolPages.c)
 *     MiDrainZeroLookasides @ 0x1400A71B4 (MiDrainZeroLookasides.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiRelinkStandbyPage @ 0x1400BC3A4 (MiRelinkStandbyPage.c)
 *     MiFreePageFileHashPfns @ 0x1400BC788 (MiFreePageFileHashPfns.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MiPurgeZeroList @ 0x140120B70 (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140120EAC (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiReturnPfnList @ 0x14013F0CC (MiReturnPfnList.c)
 *     MiLockAndInsertPageInFreeList @ 0x140145314 (MiLockAndInsertPageInFreeList.c)
 *     MiPurgeSubsection @ 0x1401DEEA0 (MiPurgeSubsection.c)
 *     MiMoveEccPagesToFreeList @ 0x1401E1E5C (MiMoveEccPagesToFreeList.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiDeleteEnclavePage @ 0x1401F0108 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1401F0518 (MiReturnEnclavePage.c)
 *     MiTransferPartitionPageRun @ 0x1401F1E84 (MiTransferPartitionPageRun.c)
 *     MiPruneStandbyPages @ 0x1401F35CC (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1401F4728 (MiDeleteDirectMapFixupPfn.c)
 *     MiScrubNode @ 0x1401FE48C (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MiComputeOptimalZeroPath @ 0x1407A6288 (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x1407A682C (MiCreateEnclaveRegions.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     KeSetPagePrivilege @ 0x140147314 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeCheckForZeroPage @ 0x140162310 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x1401ED230 (MiClearFileOnlyPfn.c)
 *     MiPageNotZero @ 0x1401F2AB8 (MiPageNotZero.c)
 *     MiSetPfnSlist @ 0x1401F2E24 (MiSetPfnSlist.c)
 */

PSLIST_ENTRY __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  unsigned __int8 *v2; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  int *v8; // rsi
  int v9; // r10d
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r15
  char v17; // al
  PSLIST_ENTRY result; // rax
  __int64 v19; // rax
  unsigned __int16 *v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r15
  __int64 v23; // r15
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  volatile signed __int64 *v29; // rbx
  unsigned __int64 v30; // r13
  _QWORD *v31; // rdx
  unsigned __int16 *v32; // rax
  unsigned int v33; // r13d
  unsigned __int64 v34; // r8
  __int64 i; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  __int64 *v38; // r9
  __int64 v39; // r11
  __int64 v40; // rdi
  __int64 *v41; // r10
  __int64 v42; // rax
  unsigned int v43; // r10d
  char v44; // r8
  char v45; // al
  unsigned int v46; // ebx
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  __int64 v50; // r8
  __int64 *v51; // rdx
  __int64 v52; // r9
  __int64 *v53; // rdi
  _QWORD *v54; // r11
  __int64 v55; // r10
  __int64 v56; // rax
  _QWORD *v57; // r8
  int v58; // eax
  __int64 v59; // rdi
  __int64 v60; // r15
  char v61; // al
  signed __int32 v62[8]; // [rsp+0h] [rbp-50h] BYREF
  _BYTE v63[4]; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int8 *)((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL);
  v5 = 48 * BugCheckParameter2 - 0x58000000000LL;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v5;
  v6 = *(_QWORD *)(v5 + 40);
  if ( (*(_QWORD *)(v5 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (v6 & 0x10000000000000LL) == 0 )
      goto LABEL_3;
LABEL_77:
    MiClearPfnImageVerified(v5, 0xCu);
    return (PSLIST_ENTRY)MiClearFileOnlyPfn(v5);
  }
  if ( (v6 & 0x10000000000000LL) != 0 )
    goto LABEL_77;
LABEL_3:
  v7 = (HIDWORD(v6) >> 8) & 0x3FF;
  if ( v7 == 1023 )
    v8 = MiSystemPartition;
  else
    v8 = *(int **)(qword_140327038 + 8LL * v7);
  if ( (a2 & 1) != 0 )
  {
    v45 = MiFlags;
    *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v8 + 448;
    if ( v45 < 0
      && BugCheckParameter2 < 0x200000
      && (*(_BYTE *)(48 * BugCheckParameter2 - 0x57FFFFFFFDDLL) & 0x40) == 0
      && (++dword_140327160 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v60 = MiMapPageInHyperSpaceWorker(
                BugCheckParameter2,
                (unsigned __int8 *)((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL),
                0x80000000);
        if ( KeCheckForZeroPage(v60) )
          MiPageNotZero(v60, BugCheckParameter2);
        MiUnmapPageInHyperSpaceWorker(v60, *v2);
      }
    }
    v9 = 0;
    *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      v61 = *(_BYTE *)(v5 + 34);
      *(_QWORD *)(v5 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v5 + 34) = v61 & 0xF8 | 5;
      *(_BYTE *)(v5 + 35) |= 0x10u;
      return (PSLIST_ENTRY)MiInsertPageInList(v5, 256LL);
    }
    *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 1;
    *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v8 + 464;
    v9 = 1;
  }
  if ( ((*(_QWORD *)(v5 + 40) >> 54) & 7) == 3 )
  {
    if ( (unsigned int)MiGetPagePrivilege(v5, 1LL, v2 + 96)
      && (int)KeSetPagePrivilege((v5 + 0x58000000000LL) / 48, v2 + 96, 16LL) < 0 )
    {
      KeBugCheckEx(0x1Au, 0x5150BuLL, (v5 + 0x58000000000LL) / 48, 0LL, 0LL);
    }
    *(_QWORD *)(v5 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v9 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
  }
  *(_QWORD *)(v5 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v62, 0);
  v10 = (unsigned int)KiTbFlushTimeStamp;
  *(_QWORD *)(v5 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(v5 + 35) &= 0xF8u;
  v11 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 24) ^= (*(_QWORD *)(v5 + 24) ^ (v10 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v5 + 8) |= 0x8000000000000000uLL;
  if ( (*(_BYTE *)(v5 + 35) & 0x40) != 0 )
    return (PSLIST_ENTRY)MiInsertPageInList(v5, 32LL);
  v12 = dword_140326A38 & (unsigned int)BugCheckParameter2 | (((v11 >> 36) & 3) << byte_140326A18) | ((unsigned __int8)((v11 >> 58) & 0x3F) << byte_140326A09);
  v13 = v12;
  v14 = *((_QWORD *)v8 + 6) + 2184 * (v12 >> byte_140326A09);
  v15 = *((_QWORD *)v8 + 219);
  v16 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v12 >> byte_140326A18));
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v12;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v12;
  v17 = (*(_BYTE *)(v5 + 34) ^ v9) & 7;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v15;
  *(_BYTE *)(v5 + 34) ^= v17;
  if ( (a2 & 0x40) == 0 )
  {
    if ( v9 == 1 )
    {
      *(_QWORD *)(v5 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(v5 + 34) &= 0xC7u;
      *(_BYTE *)(v5 + 35) &= ~0x20u;
    }
    if ( (a2 & 0x200) == 0 )
    {
      result = (PSLIST_ENTRY)MiCoalesceFreePages(BugCheckParameter2);
      if ( (_DWORD)result == 1 )
        return result;
      v9 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      v15 = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      v13 = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
    }
    v19 = 16 * v13;
    if ( v9 == 1 )
    {
      v20 = (unsigned __int16 *)(v15 + v19);
      *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v20;
      if ( *v20 >= v8[1447] )
        goto LABEL_18;
      v46 = MmNumberOfChannels;
      v47 = 0LL;
      v48 = 0LL;
      *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
      do
      {
        if ( v46 > 1 )
        {
          v49 = *(_QWORD *)(v14 + 8 * (v48 + 2 * v16) + 2072) + v47;
          v48 = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        }
        else
        {
          v49 = *(_QWORD *)(v14 + 8 * v48 + 2008) + v47;
        }
        *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v49;
        v50 = 4 * v48;
        v51 = MiLargePageSizes;
        *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 3LL;
        v52 = 0LL;
        v53 = (__int64 *)(v14 + 8 * v48);
        v54 = (_QWORD *)v14;
        do
        {
          v55 = *v51;
          if ( (_DWORD)v16 == 4 )
          {
            if ( v48 == 2 )
              v56 = *v54 + v54[1];
            else
              v56 = *v53;
          }
          else
          {
            v56 = *(_QWORD *)(v14 + 8 * (v50 + (unsigned int)v16) + 816)
                + *(_QWORD *)(v14 + 8 * (v50 + (unsigned int)v16) + 880);
            v48 = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          }
          ++v51;
          v54 += 2;
          v52 += v55 * v56;
          v53 += 2;
          v50 += 16LL;
          v24 = (*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 8))-- == 1LL;
        }
        while ( !v24 );
        ++v48;
        v47 = v52 + *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v48;
      }
      while ( v48 <= 1 );
      v5 = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      if ( v47 <= 0x40 )
        goto LABEL_18;
      v43 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    }
    else
    {
      v32 = (unsigned __int16 *)(*((_QWORD *)v8 + 218) + v19);
      *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v32;
      if ( *v32 >= v8[1447] )
        goto LABEL_18;
      v33 = MmNumberOfChannels;
      v34 = 0LL;
      for ( i = 0LL; i <= 0; ++i )
      {
        if ( v33 > 1 )
          v36 = *(_QWORD *)(v14 + 8 * (i + 2 * v16) + 2072) + v34;
        else
          v36 = *(_QWORD *)(v14 + 8 * i + 2008) + v34;
        v37 = v14;
        *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 3LL;
        *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v14;
        v38 = MiLargePageSizes;
        v39 = 0LL;
        v40 = 4 * i;
        v41 = (__int64 *)(v14 + 8 * i);
        do
        {
          *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *v38;
          if ( (_DWORD)v16 == 4 )
          {
            v42 = *v41;
          }
          else
          {
            v42 = *(_QWORD *)(v14 + 8 * (v40 + (unsigned int)v16) + 816)
                + *(_QWORD *)(v14 + 8 * (v40 + (unsigned int)v16) + 880);
            v37 = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          }
          v37 += 16LL;
          ++v38;
          v39 += *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) * v42;
          *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v37;
          v41 += 2;
          v40 += 16LL;
          v24 = (*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 8))-- == 1LL;
        }
        while ( !v24 );
        v34 = v39 + v36;
      }
      v43 = *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      if ( v34 <= 0x40 )
        goto LABEL_18;
    }
    if ( *((_QWORD *)v8 + 808) >= 0x420uLL )
    {
      v44 = *(_BYTE *)(v5 + 34);
      if ( (v44 & 7) != 5 )
        *(_BYTE *)(v5 + 34) = v44 & 0xF8 | 5;
      MiSetPfnSlist(v5, v43);
      return RtlpInterlockedPushEntrySList(
               *(PSLIST_HEADER *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
               (PSLIST_ENTRY)v5);
    }
  }
LABEL_18:
  v21 = _InterlockedIncrement64((volatile signed __int64 *)v8 + 808);
  if ( v21 > 0x420 )
    goto LABEL_19;
  switch ( v21 )
  {
    case 0xA0uLL:
      v58 = 1;
      break;
    case 0x420uLL:
      v58 = 2;
      break;
    case 0x22uLL:
      v58 = 0;
      break;
    default:
      goto LABEL_19;
  }
  v59 = 8LL * v58;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v8 + 544, (PKLOCK_QUEUE_HANDLE)(v2 + 112));
  KeSetEvent((PRKEVENT)&v8[v59 + 1090], 0, 0);
  ++v8[v59 + 1096];
  KxReleaseQueuedSpinLock(v2 + 112);
LABEL_19:
  v22 = v21 - 1;
  if ( v22 == *((_QWORD *)v8 + 557) || v22 == *((_QWORD *)v8 + 558) )
    MiUpdateAvailableEvents(v8);
  v23 = *(int *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
  _InterlockedIncrement64((volatile signed __int64 *)(v14 + 8 * v23 + 2008));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v14
                                                      + 8
                                                      * (v23
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) >> byte_140326A18)))
                                                      + 2072));
  v24 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
  v25 = 5LL * *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
  v26 = *(_QWORD *)&v8[2 * v23 + 432];
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  v27 = v26 + 8 * v25;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v27 + 32;
  if ( v24 )
  {
    v28 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v27 + 32), (__int64)(v2 + 48));
    if ( v28 )
      KxWaitForLockOwnerShip((__int64)(v2 + 48), v28);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v2 + 48, v27 + 32);
  }
  if ( *(_QWORD *)(v27 + 16) == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v5 + 24) |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(v27 + 16) = BugCheckParameter2;
  }
  else
  {
    v57 = (_QWORD *)(48LL * *(_QWORD *)(v27 + 24) - 0x58000000000LL);
    *(_QWORD *)(v5 + 24) ^= (*(_QWORD *)(v5 + 24) ^ (48LL * *(_QWORD *)(v27 + 24) / 48)) & 0xFFFFFFFFFLL;
    *v57 ^= (BugCheckParameter2 ^ *v57) & 0xFFFFFFFFFLL;
  }
  ++*(_QWORD *)v27;
  *(_QWORD *)(v27 + 24) = BugCheckParameter2;
  *(_QWORD *)v5 |= 0xFFFFFFFFFuLL;
  v29 = *(volatile signed __int64 **)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
  v30 = _InterlockedIncrement64(v29);
  result = (PSLIST_ENTRY)KxReleaseQueuedSpinLock(v2 + 48);
  if ( (_DWORD)v23 == 1 && !*((_BYTE *)v8 + 5784) && v30 >= 8 && *((_QWORD *)v8 + 808) >= 0xA0uLL )
  {
    v24 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v8 + 1088;
    *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
    if ( v24 )
    {
      v31 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v8 + 544, (__int64)(v2 + 48));
      if ( v31 )
        KxWaitForLockOwnerShip((__int64)(v2 + 48), v31);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v2 + 48, v8 + 1088);
    }
    if ( !*((_BYTE *)v8 + 5784) && *v29 >= 8uLL )
    {
      *((_BYTE *)v8 + 5784) = 1;
      KeSetEvent((PRKEVENT)v8 + 240, 0, 0);
    }
    return (PSLIST_ENTRY)KxReleaseQueuedSpinLock(v2 + 48);
  }
  return result;
}
