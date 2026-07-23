/*
 * XREFs of MiUnlinkPageFromList @ 0x1400655C0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiDeleteClusterSection @ 0x1400218E0 (MiDeleteClusterSection.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyBatch @ 0x140035470 (MiUnlinkStandbyBatch.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiDecayPfnFullyInitialized @ 0x140096210 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x140096330 (MiDeleteParentDecayNode.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BC1A0 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x1400BC3A4 (MiRelinkStandbyPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiPurgeSubsection @ 0x1401DEEA0 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E068C (MiReleaseCommitForResetPageCallback.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401E5A88 (MmEnableModifiedWriteOfSection.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiFreeModifiedReservations @ 0x1401EE664 (MiFreeModifiedReservations.c)
 *     MiTransferPartitionPageRun @ 0x1401F1E84 (MiTransferPartitionPageRun.c)
 *     MiNoPagesLastChance @ 0x1401F31B0 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x1401F38B0 (MiReuseStandbyPage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiDeleteParentDecayNode @ 0x140096330 (MiDeleteParentDecayNode.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1401E9934 (MiObtainFreePages.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 *     MiUnlinkPageFromBadList @ 0x1401F2E80 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int16 v4; // cx
  int v5; // r10d
  __int64 v6; // r9
  unsigned __int16 v7; // ax
  int *v8; // rsi
  int *v9; // r13
  int v10; // eax
  int v12; // r14d
  char v13; // al
  unsigned int v14; // edi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  bool v17; // zf
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  _QWORD *v21; // r11
  __int64 updated; // rax
  __int64 v23; // r11
  __int64 v24; // r11
  signed __int64 v25; // rdx
  __int64 v26; // r10
  signed __int64 v27; // r8
  signed __int64 v28; // rcx
  int v29; // ecx
  char v30; // al
  int v31; // eax
  char v32; // al
  int v33; // eax
  _QWORD *v34; // rdx
  unsigned __int16 v35; // cx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rdi
  unsigned int v41; // edi
  char v42; // r14
  unsigned int v43; // ecx
  unsigned int i; // edx
  _QWORD *v45; // rdx
  __int64 v46; // r11
  __int64 v47; // rdi
  signed __int64 v48; // rdx
  signed __int64 v49; // r8
  signed __int64 v50; // rcx
  int v51; // eax
  signed __int64 v52; // r8
  signed __int64 v53; // rcx
  int v54; // eax
  char v55; // al
  unsigned int v56; // r11d
  __int64 v57; // r9
  unsigned __int64 v58; // r12
  unsigned __int16 v59; // ax
  int *v60; // r8
  _QWORD *v61; // r11
  __int64 v62; // r10
  __int64 v63; // rdi
  signed __int64 v64; // rdx
  signed __int64 v65; // r8
  signed __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // r14d
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // r10
  char v72; // r11
  volatile signed __int32 *v73; // r8
  int v74; // r10d
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  int v78; // ecx
  unsigned int PfnPriority; // eax
  ULONG_PTR v80; // rdx
  unsigned int v81; // eax
  ULONG_PTR v82; // rdx
  int v83; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = *(_WORD *)(BugCheckParameter2 + 32);
  v5 = a2;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( v4 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 2uLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, BugCheckParameter3, v4);
    return 1LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  v7 = (HIDWORD(v6) >> 8) & 0x3FF;
  if ( v7 == 1023 )
    v8 = MiSystemPartition;
  else
    v8 = *(int **)(qword_140327038 + 8LL * v7);
  v9 = *(int **)&v8[2 * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 938];
  v10 = v9[2];
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, MiSystemPartition);
    return 1LL;
  }
  *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 1;
  v12 = 0;
  *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
  *(_DWORD *)v2 = 0;
  if ( v10 == 2 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v6 & 0x10000000000000LL) == 0 )
      {
LABEL_13:
        v13 = *(_BYTE *)(BugCheckParameter2 + 35);
        if ( (v13 & 8) != 0 )
          v14 = 5;
        else
          v14 = v13 & 7;
        v15 = qword_1403273A0;
        v16 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
        if ( v16 < qword_1403273A0 || v16 >= qword_1403273A0 + 2048 )
        {
          *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
          if ( (v13 & 8) != 0 )
            v12 = 1;
          *(_DWORD *)v2 = v12;
          if ( (v6 & 0x200000000000000LL) != 0 )
            _InterlockedDecrement64(&qword_140327380);
          else
            _InterlockedDecrement64((volatile signed __int64 *)v8 + 560);
          v15 = qword_1403273A0;
        }
        else
        {
          *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 1;
        }
        v9 = &v8[8 * v14 + 496 + 2 * v14];
        if ( !a2 )
        {
          v17 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
          *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9 + 8;
          *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
          if ( v17 )
          {
            v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v9 + 4, v2 + 16);
            if ( v18 )
              KxWaitForLockOwnerShip(v2 + 16, v18);
          }
          else
          {
            KiAcquireQueuedSpinLockInstrumented(v2 + 16, v9 + 8);
          }
          v15 = qword_1403273A0;
        }
        v19 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
        v20 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
        if ( *(_DWORD *)v2 == 1 )
        {
          if ( v19 >= v15 && v19 < v15 + 2048 && v20 == v19 )
          {
            MiDeleteParentDecayNode(BugCheckParameter2);
          }
          else
          {
            v21 = (_QWORD *)(48 * v20 - 0x58000000000LL);
            if ( v20 < v15 || v20 >= v15 + 2048 )
            {
              *v21 ^= (*v21 ^ v19) & 0xFFFFFFFFFLL;
            }
            else
            {
              updated = MiUpdateTransitionPteFrame(v21[2], *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL);
              *(_QWORD *)(v23 + 16) = updated;
            }
            v24 = 48 * v19 - 0x58000000000LL;
            if ( v19 < v15 || v19 >= v15 + 2048 )
            {
              v25 = *(_QWORD *)(v24 + 24);
              v26 = v20 & 0xFFFFFFFFFLL;
              v27 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v24 + 24),
                      v26 | v25 & 0xFFFFFFF000000000uLL,
                      v25);
              if ( v25 != v27 )
              {
                do
                {
                  v28 = v27;
                  v27 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(v24 + 24),
                          v26 | v27 & 0xFFFFFFF000000000uLL,
                          v27);
                }
                while ( v28 != v27 );
              }
            }
            else
            {
              *(_QWORD *)(v24 + 40) ^= (v20 ^ *(_QWORD *)(v24 + 40)) & 0xFFFFFFFFFLL;
            }
          }
          v19 = 0xFFFFFFFFFLL;
          v20 = 0xFFFFFFFFFLL;
        }
        else
        {
          if ( v19 != 0xFFFFFFFFFLL && (v19 < v15 || v19 >= v15 + 2048) )
          {
            v30 = *(_BYTE *)(48 * v19 - 0x58000000000LL + 35);
            v31 = (v30 & 8) != 0 ? 5 : v30 & 7;
            if ( v14 != v31 )
            {
              PfnPriority = MiGetPfnPriority(48 * v19 - 0x58000000000LL);
              KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v80, (v14 << 8) | (unsigned __int64)PfnPriority);
            }
          }
          if ( v20 != 0xFFFFFFFFFLL && (v20 < v15 || v20 >= v15 + 2048) )
          {
            v32 = *(_BYTE *)(48 * v20 - 0x58000000000LL + 35);
            v33 = (v32 & 8) != 0 ? 5 : v32 & 7;
            if ( v14 != v33 )
            {
              v81 = MiGetPfnPriority(48 * v20 - 0x58000000000LL);
              KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v82, (v14 << 8) | (unsigned __int64)v81);
            }
          }
        }
        v29 = 1;
        *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
        if ( v14 < v8[1122] )
          *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
        goto LABEL_111;
      }
    }
    else if ( (v6 & 0x10000000000000LL) == 0 )
    {
      goto LABEL_13;
    }
    if ( (v6 & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64(&qword_140327380);
    else
      _InterlockedDecrement64((volatile signed __int64 *)v8 + 560);
    *(_QWORD *)BugCheckParameter2 = 0LL;
    MiSetPfnBlink(BugCheckParameter2, 0LL, 1LL);
    return 1LL;
  }
  if ( v10 != 3 )
  {
    if ( (v6 & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64(&qword_140327380);
    else
      _InterlockedDecrement64((volatile signed __int64 *)v8 + 560);
    if ( !a2 )
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9 + 4, (PKLOCK_QUEUE_HANDLE)(v2 + 16));
    goto LABEL_110;
  }
  _InterlockedDecrement64((volatile signed __int64 *)v9);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64(&qword_140327380);
  else
    _InterlockedDecrement64((volatile signed __int64 *)v8 + 560);
  if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    v38 = *(_QWORD *)(BugCheckParameter2 + 40);
    v9 = &v8[10 * (HIBYTE(v38) >> 2) + 752];
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v38 & 0x10000000000000LL) == 0 )
        goto LABEL_84;
    }
    else if ( (v38 & 0x10000000000000LL) == 0 )
    {
LABEL_84:
      v39 = qword_140326A00;
      v40 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( qword_140326A00 )
      {
        if ( qword_140327248 )
        {
          v42 = 17;
          ExAcquireSpinLockSharedAtDpcLevel(&dword_1403266F0);
          v39 = qword_140326A00;
        }
        else
        {
          v42 = 18;
        }
        v43 = dword_1403269F8;
        if ( v40 < *(_QWORD *)(v39 + 16LL * (unsigned int)dword_1403269F8) )
        {
          do
            --v43;
          while ( v40 < *(_QWORD *)(v39 + 16LL * v43) );
        }
        else
        {
          for ( i = dword_1403269F8 + 1; v40 >= *(_QWORD *)(v39 + 16LL * i); ++v43 )
            ++i;
        }
        v41 = *(_DWORD *)(v39 + 16LL * v43 + 8);
        dword_1403269F8 = v43;
        if ( v42 != 18 )
          ExReleaseSpinLockSharedFromDpcLevel(&dword_1403266F0);
        v5 = a2;
      }
      else
      {
        v41 = 0;
      }
      goto LABEL_99;
    }
    v41 = 0;
LABEL_99:
    if ( !v5 )
    {
      v17 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
      *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9 + 8;
      *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      if ( v17 )
      {
        v45 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v9 + 4, v2 + 16);
        if ( v45 )
          KxWaitForLockOwnerShip(v2 + 16, v45);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v2 + 16, v9 + 8);
      }
    }
    *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v41 << 58);
    goto LABEL_110;
  }
  if ( !a2 )
  {
    v17 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9 + 8;
    *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    if ( v17 )
    {
      v34 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v9 + 4, v2 + 16);
      if ( v34 )
        KxWaitForLockOwnerShip(v2 + 16, v34);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v2 + 16, v9 + 8);
    }
  }
  --*((_QWORD *)v8 + 918);
  v35 = *(_QWORD *)(BugCheckParameter2 + 16);
  v36 = (unsigned __int8)v35 >> 1;
  v37 = v35 >> 12;
  if ( (v36 & 1) != 0 || (_DWORD)v37 == v8[265] )
    v9 = &v8[8 * v37 + 592 + 2 * v37];
  else
    v9 = v8 + 576;
LABEL_110:
  v19 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v29 = *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v20 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
LABEL_111:
  if ( v19 == 0xFFFFFFFFFLL )
  {
    v51 = *(_DWORD *)v2;
    if ( !*(_DWORD *)v2 )
      *((_QWORD *)v9 + 3) = v20;
  }
  else
  {
    v46 = 48 * v19 - 0x58000000000LL;
    v47 = v20 & 0xFFFFFFFFFLL;
    v48 = *(_QWORD *)(v46 + 24);
    if ( v29 == 1 )
    {
      v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 24), v47 | v48 & 0xFFFFFFF000000000uLL, v48);
      if ( v48 != v49 )
      {
        do
        {
          v50 = v49;
          v49 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v46 + 24),
                  v47 | v49 & 0xFFFFFFF000000000uLL,
                  v49);
        }
        while ( v50 != v49 );
      }
    }
    else
    {
      v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 24), v47 | v48 & 0xFFFFFFF000000000uLL, v48);
      if ( v48 != v52 )
      {
        do
        {
          v53 = v52;
          v52 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v46 + 24),
                  v47 | v52 & 0xFFFFFFF000000000uLL,
                  v52);
        }
        while ( v53 != v52 );
      }
    }
    v51 = *(_DWORD *)v2;
  }
  if ( v20 == 0xFFFFFFFFFLL )
  {
    if ( !v51 )
      *((_QWORD *)v9 + 2) = v19;
  }
  else
  {
    *(_QWORD *)(48 * v20 - 0x58000000000LL) ^= (*(_QWORD *)(48 * v20 - 0x58000000000LL) ^ v19) & 0xFFFFFFFFFLL;
  }
  v54 = *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !*(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) )
  {
    --*(_QWORD *)v9;
    if ( v54 == 1 )
    {
      v55 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v55 & 8) != 0 )
        v56 = 5;
      else
        v56 = v55 & 7;
      v57 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
      v58 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
      v59 = ((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF;
      if ( v59 == 1023 )
        v60 = MiSystemPartition;
      else
        v60 = *(int **)(qword_140327038 + 8LL * v59);
      v61 = (_QWORD *)(*((_QWORD *)v60 + 6)
                     + 24
                     * (v56
                      + 91LL * ((unsigned __int8)HIBYTE(*(_QWORD *)(BugCheckParameter2 + 40)) >> 2)
                      + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL)));
      if ( v57 == 0xFFFFFFFFFLL )
      {
        v61[157] = v58;
      }
      else
      {
        v62 = 48 * v57 - 0x58000000000LL;
        v63 = ((v58 >> 16) & 0xFFFFF) << 36;
        *(_WORD *)(v62 + 36) = *(_WORD *)(BugCheckParameter2 + 36);
        v64 = *(_QWORD *)(v62 + 24);
        v65 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v62 + 24),
                v63 | v64 & 0xFF00000FFFFFFFFFuLL,
                v64);
        if ( v64 != v65 )
        {
          do
          {
            v66 = v65;
            v65 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v62 + 24),
                    v63 | v65 & 0xFF00000FFFFFFFFFuLL,
                    v65);
          }
          while ( v66 != v65 );
        }
      }
      if ( v58 == 0xFFFFFFFFFLL )
      {
        v61[156] = v57;
      }
      else
      {
        v67 = 48 * v58 - 0x58000000000LL;
        v68 = *(_QWORD *)v67 ^ (v57 << 28);
        *(_BYTE *)(v67 + 39) = v57;
        *(_QWORD *)v67 = (v57 << 28) ^ v68 & 0xFFFFFFFFFLL;
      }
      --v61[155];
      if ( *(_DWORD *)v2 == 1 )
        *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
    }
  }
  v69 = *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  *(_QWORD *)BugCheckParameter2 = 0LL;
  if ( v69 )
  {
    MiSetPfnBlink(BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFFF000000000uLL;
    if ( dword_1403270A0 == 1 )
    {
      LOBYTE(v70) = 1;
      v71 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      v72 = v71 & 0x1F;
      v73 = (volatile signed __int32 *)stru_1403270B8.Buffer + (v71 >> 5);
      if ( (v71 & 0x1F) + 1 > 0x20 )
      {
        if ( (v71 & 0x1F) == 0 )
          goto LABEL_152;
        v74 = v71 & 0x1F;
        _InterlockedOr(v73++, ((1 << (32 - v74)) - 1) << v72);
        v70 = 1LL - (unsigned int)(32 - v74);
        if ( v70 >= 0x20 )
        {
          v75 = v70 >> 5;
          v70 += -32LL * (v70 >> 5);
          do
          {
            *v73++ = -1;
            --v75;
          }
          while ( v75 );
        }
        if ( v70 )
LABEL_152:
          _InterlockedOr(v73, (1 << v70) - 1);
      }
      else
      {
        _InterlockedOr(v73, 1 << v72);
      }
    }
  }
  if ( !a2 )
    KxReleaseQueuedSpinLock(v2 + 16);
  if ( *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8) != 1 || v69 )
    return *(unsigned int *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  v76 = _InterlockedDecrement64((volatile signed __int64 *)v8 + 808);
  if ( v76 == *((_QWORD *)v8 + 557) || v76 == *((_QWORD *)v8 + 558) )
    MiUpdateAvailableEvents(v8);
  if ( v76 <= 0x420 )
  {
    v77 = *((_QWORD *)v8 + 781);
    if ( !v77 || !*(_BYTE *)(v77 + 52) )
      MiObtainFreePages(v8);
    if ( v76 < 0xA0 && v76 + 1 >= 0xA0 && v8[266] )
      KeSetEvent((PRKEVENT)(v8 + 230), 0, 0);
  }
  if ( v76 >= 0x9F )
    return *(unsigned int *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  v78 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
  if ( (v78 & 0xC) == 8 )
    return *(unsigned int *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  if ( (v76 >= 0x20 || v8 != MiSystemPartition) && ((v78 & 2) != 0 && v76 >= 0x21 || (v8[1] & 0x10) != 0) )
    return *(unsigned int *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  else
    return 0LL;
}
