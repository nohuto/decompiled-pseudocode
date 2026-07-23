/*
 * XREFs of MiUnlinkPageFromList @ 0x14003E230
 * Callers:
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiEmptyDecayClusterTimers @ 0x140014790 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyBatch @ 0x1400A9C40 (MiUnlinkStandbyBatch.c)
 *     MiDecayPfnFullyInitialized @ 0x1400B253C (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1400DFE0C (MiDeleteParentDecayNode.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiPurgeSubsection @ 0x1401D1590 (MiPurgeSubsection.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401D5008 (MmEnableModifiedWriteOfSection.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 *     MiFreeModifiedReservations @ 0x1401DCB64 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x1401E3DB0 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x1401E442C (MiReuseStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140012C74 (MiSetPfnBlink.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiDeleteParentDecayNode @ 0x1400DFE0C (MiDeleteParentDecayNode.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1401D7D4C (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x1401E0238 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v2; // rbp
  ULONG_PTR v3; // rbx
  unsigned __int16 v4; // cx
  signed __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int16 v8; // ax
  int *v9; // r15
  int *v10; // rdi
  int v11; // eax
  int v12; // r10d
  int v13; // esi
  int v14; // r12d
  char v15; // al
  unsigned int v16; // r13d
  unsigned __int64 v17; // r11
  char v18; // al
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  char v21; // al
  int v22; // eax
  char v23; // al
  int v24; // eax
  __int64 v25; // r11
  unsigned __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rax
  char v29; // al
  unsigned int v30; // edi
  unsigned __int64 v31; // r10
  unsigned __int16 v32; // ax
  int *v33; // r11
  _QWORD *v34; // r11
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdi
  volatile __int64 *v41; // rdi
  bool v42; // zf
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  signed __int64 v46; // rcx
  _QWORD *v47; // rcx
  __int64 v48; // r11
  __int64 v49; // r10
  __int64 v50; // rdx
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned __int64 v53; // rcx
  unsigned int i; // r9d
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r14
  char v57; // r11
  volatile signed __int32 *v58; // r10
  signed __int64 v59; // rcx
  signed __int64 v60; // rcx
  unsigned int v61; // eax
  ULONG_PTR v62; // rdx
  unsigned int v63; // eax
  ULONG_PTR v64; // rdx
  signed __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  int Queue; // ecx
  int v69; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = BugCheckParameter2;
  v4 = *(_WORD *)(BugCheckParameter2 + 32);
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( v4 )
  {
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 2uLL, (__int64)(v3 + 0x58000000000LL) / 48, BugCheckParameter3, v4);
    return 1LL;
  }
  v6 = *(_QWORD *)(v3 + 40);
  v7 = (unsigned __int64)&MiSystemPartition;
  v8 = (HIDWORD(v6) >> 8) & 0x3FF;
  if ( v8 == 1023 )
    v9 = &MiSystemPartition;
  else
    v9 = *(int **)(qword_1402FEC28 + 8LL * v8);
  v10 = *(int **)&v9[2 * (*(_BYTE *)(v3 + 34) & 7) + 906];
  v11 = v10[2];
  if ( (*(_BYTE *)(v3 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(v3, &MiSystemPartition);
    return 1LL;
  }
  v12 = 0;
  v13 = 0;
  v14 = 0;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 1;
  if ( v11 != 2 )
  {
    if ( v11 != 3 )
    {
      if ( (v6 & 0x200000000000000LL) != 0 )
        _InterlockedDecrement64(&qword_1402FEF40);
      else
        _InterlockedDecrement64((volatile signed __int64 *)v9 + 544);
      if ( !a2 )
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v10 + 4, (PKLOCK_QUEUE_HANDLE)(v2 + 16));
      goto LABEL_74;
    }
    _InterlockedDecrement64((volatile signed __int64 *)v10);
    if ( (*(_QWORD *)(v3 + 40) & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64(&qword_1402FEF40);
    else
      _InterlockedDecrement64((volatile signed __int64 *)v9 + 544);
    if ( (*(_DWORD *)(v3 + 16) & 0x400LL) == 0 )
    {
      if ( !a2 )
      {
        v41 = (volatile __int64 *)(v10 + 8);
        *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
        v42 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
        *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v41;
        if ( v42 )
        {
          v7 = _InterlockedExchange64(v41, v2 + 16);
          if ( v7 )
            KxWaitForLockOwnerShip(v2 + 16);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v2 + 16);
        }
      }
      --*((_QWORD *)v9 + 766);
      v43 = *(_QWORD *)(v3 + 16);
      v44 = v43 >> 12;
      v45 = (v43 >> 1) & 0xF;
      if ( (v44 & 1) != 0 || (_DWORD)v45 == v9[269] )
        v10 = &v9[10 * (unsigned int)v45 + 560];
      else
        v10 = v9 + 544;
LABEL_74:
      v19 = *(_QWORD *)v3 & 0xFFFFFFFFFLL;
      v20 = *(_QWORD *)(v3 + 24) & 0xFFFFFFFFFLL;
      goto LABEL_34;
    }
    v50 = *(_QWORD *)(v3 + 40);
    v10 = &v9[10 * (HIBYTE(v50) >> 2) + 720];
    if ( (*(_QWORD *)(v3 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v50 & 0x10000000000000LL) == 0 )
      {
LABEL_94:
        v42 = qword_1402FE6D0 == 0;
        *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = (__int64)(v3 + 0x58000000000LL) / 48;
        if ( v42 )
        {
          v51 = 0;
          *(_DWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
        }
        else
        {
          ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE3E8);
          v52 = dword_1402FE6C8;
          v53 = *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          if ( v53 < *(_QWORD *)(qword_1402FE6D0 + 16LL * (unsigned int)dword_1402FE6C8) )
          {
            do
              --v52;
            while ( v53 < *(_QWORD *)(qword_1402FE6D0 + 16LL * v52) );
          }
          else
          {
            for ( i = dword_1402FE6C8 + 1; v53 >= *(_QWORD *)(qword_1402FE6D0 + 16LL * i); ++v52 )
              ++i;
          }
          *(_DWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = *(_DWORD *)(qword_1402FE6D0
                                                                                        + 16LL * v52
                                                                                        + 8);
          dword_1402FE6C8 = v52;
          ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE3E8);
          v51 = *(_DWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        }
        goto LABEL_96;
      }
    }
    else if ( (v50 & 0x10000000000000LL) == 0 )
    {
      goto LABEL_94;
    }
    v51 = 0;
    *(_DWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
LABEL_96:
    if ( !a2 )
    {
      v42 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
      *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v10 + 8;
      *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
      if ( v42 )
      {
        if ( _InterlockedExchange64((volatile __int64 *)v10 + 4, v2 + 16) )
          KxWaitForLockOwnerShip(v2 + 16);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v2 + 16);
      }
      v51 = *(_DWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    }
    v7 = 0x3FFFFFFFFFFFFFFLL;
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v51 << 58);
    goto LABEL_74;
  }
  if ( (*(_QWORD *)(v3 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v6 & 0x10000000000000LL) == 0 )
      goto LABEL_8;
LABEL_146:
    if ( (v6 & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64(&qword_1402FEF40);
    else
      _InterlockedDecrement64((volatile signed __int64 *)v9 + 544);
    *(_QWORD *)v3 = 0LL;
    MiSetPfnBlink(v3, 0LL, 1);
    return 1LL;
  }
  if ( (v6 & 0x10000000000000LL) != 0 )
    goto LABEL_146;
LABEL_8:
  v15 = *(_BYTE *)(v3 + 35);
  if ( (v15 & 8) != 0 )
    v16 = 5;
  else
    v16 = v15 & 7;
  v17 = qword_1402FEF60;
  v7 = (__int64)(v3 + 0x58000000000LL) / 48;
  if ( v7 < qword_1402FEF60 || v7 >= qword_1402FEF60 + 2048 )
  {
    if ( (v15 & 8) != 0 )
      v12 = 1;
    *(_DWORD *)v2 = v12;
    if ( (v6 & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64(&qword_1402FEF40);
    else
      _InterlockedDecrement64((volatile signed __int64 *)v9 + 544);
    v17 = qword_1402FEF60;
  }
  else
  {
    v14 = 1;
  }
  v10 = &v9[8 * v16 + 464 + 2 * v16];
  if ( !a2 )
  {
    v18 = BYTE6(PerfGlobalGroupMask);
    *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v10 + 8;
    *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
    if ( (v18 & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v2 + 16);
    }
    else
    {
      v7 = _InterlockedExchange64((volatile __int64 *)v10 + 4, v2 + 16);
      if ( v7 )
        KxWaitForLockOwnerShip(v2 + 16);
    }
    v17 = qword_1402FEF60;
  }
  v19 = *(_QWORD *)v3 & 0xFFFFFFFFFLL;
  v20 = *(_QWORD *)(v3 + 24) & 0xFFFFFFFFFLL;
  if ( *(_DWORD *)v2 == 1 )
  {
    if ( v19 >= v17 && v20 == v19 && v19 < v17 + 2048 )
    {
      MiDeleteParentDecayNode(v3);
      v19 = 0xFFFFFFFFFLL;
      v20 = 0xFFFFFFFFFLL;
    }
    else
    {
      v47 = (_QWORD *)(48 * v20 - 0x58000000000LL);
      if ( v20 < v17 || v20 >= v17 + 2048 )
      {
        *v47 ^= (*v47 ^ v19) & 0xFFFFFFFFFLL;
      }
      else
      {
        v7 = 0xFFFFFFFFF000LL;
        v47[2] ^= (v47[2] ^ (v19 << 12)) & 0xFFFFFFFFF000LL;
      }
      v48 = 48 * v19 - 0x58000000000LL;
      if ( v19 < qword_1402FEF60 || v19 >= qword_1402FEF60 + 2048 )
      {
        v7 = *(_QWORD *)(v48 + 24);
        v49 = v20 & 0xFFFFFFFFFLL;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 24), v49 | v7 & 0xFFFFFFF000000000uLL, v7);
        if ( v7 != v6 )
        {
          do
          {
            v60 = v6;
            v6 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v48 + 24),
                   v49 | v6 & 0xFFFFFFF000000000uLL,
                   v6);
          }
          while ( v60 != v6 );
        }
        v19 = 0xFFFFFFFFFLL;
        v20 = 0xFFFFFFFFFLL;
      }
      else
      {
        v19 = 0xFFFFFFFFFLL;
        v55 = v20 ^ *(_QWORD *)(v48 + 40);
        v20 = 0xFFFFFFFFFLL;
        *(_QWORD *)(v48 + 40) ^= v55 & 0xFFFFFFFFFLL;
      }
    }
  }
  else
  {
    if ( v19 != 0xFFFFFFFFFLL && (v19 < v17 || v19 >= v17 + 2048) )
    {
      v7 = 48 * v19 - 0x58000000000LL;
      v21 = *(_BYTE *)(v7 + 35);
      v22 = (v21 & 8) != 0 ? 5 : v21 & 7;
      if ( v16 != v22 )
      {
        v61 = MI_GET_PFN_PRIORITY(48 * v19 - 0x58000000000LL);
        KeBugCheckEx(0x1Au, 0x8886uLL, v3, v62, (v16 << 8) | (unsigned __int64)v61);
      }
    }
    if ( v20 != 0xFFFFFFFFFLL && (v20 < v17 || v20 >= v17 + 2048) )
    {
      v7 = 48 * v20 - 0x58000000000LL;
      v23 = *(_BYTE *)(v7 + 35);
      v24 = (v23 & 8) != 0 ? 5 : v23 & 7;
      if ( v16 != v24 )
      {
        v63 = MI_GET_PFN_PRIORITY(48 * v20 - 0x58000000000LL);
        KeBugCheckEx(0x1Au, 0x8887uLL, v3, v64, (v16 << 8) | (unsigned __int64)v63);
      }
    }
  }
  v13 = 1;
  if ( v16 < v9[1090] )
    *(_DWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
LABEL_34:
  if ( v19 == 0xFFFFFFFFFLL )
  {
    v27 = *(_DWORD *)v2;
    if ( !*(_DWORD *)v2 )
      *((_QWORD *)v10 + 3) = v20;
    goto LABEL_38;
  }
  v25 = 48 * v19 - 0x58000000000LL;
  v7 = *(_QWORD *)(v25 + 24);
  v26 = v20 & 0xFFFFFFFFFLL | v7 & 0xFFFFFFF000000000uLL;
  if ( v13 != 1 )
  {
    *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v20;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), v26, v7);
    if ( v7 == v6 )
      goto LABEL_37;
    v7 = *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    do
    {
      v46 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), v7 | v6 & 0xFFFFFFF000000000uLL, v6);
    }
    while ( v46 != v6 );
LABEL_78:
    v3 = BugCheckParameter2;
    goto LABEL_37;
  }
  *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v20;
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), v26, v7);
  if ( v7 != v6 )
  {
    v7 = *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    do
    {
      v59 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), v7 | v6 & 0xFFFFFFF000000000uLL, v6);
    }
    while ( v59 != v6 );
    goto LABEL_78;
  }
LABEL_37:
  v27 = *(_DWORD *)v2;
LABEL_38:
  if ( v20 == 0xFFFFFFFFFLL )
  {
    if ( !v27 )
      *((_QWORD *)v10 + 2) = v19;
  }
  else
  {
    v28 = (_QWORD *)(48 * v20 - 0x58000000000LL);
    v19 = (*v28 ^ v19) & 0xFFFFFFFFFLL;
    *v28 ^= v19;
  }
  if ( !v14 )
  {
    --*(_QWORD *)v10;
    if ( v13 == 1 )
    {
      v29 = *(_BYTE *)(v3 + 35);
      if ( (v29 & 8) != 0 )
        v30 = 5;
      else
        v30 = v29 & 7;
      v6 = (unsigned __int8)HIBYTE(*(_QWORD *)(v3 + 40)) >> 2;
      v19 = *(unsigned __int8 *)(v3 + 39) | (*(_QWORD *)v3 >> 28) & 0xFFFFFFF00LL;
      v31 = (*(_QWORD *)(v3 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(v3 + 36);
      v32 = ((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF;
      if ( v32 == 1023 )
        v33 = &MiSystemPartition;
      else
        v33 = *(int **)(qword_1402FEC28 + 8LL * v32);
      v7 = 1336LL * ((unsigned __int8)HIBYTE(*(_QWORD *)(v3 + 40)) >> 2)
         + 24 * (v30 + 8 * ((*(_QWORD *)(v3 + 40) >> 36) & 3LL));
      v34 = (_QWORD *)(v7 + *((_QWORD *)v33 + 5));
      if ( v19 == 0xFFFFFFFFFLL )
      {
        v34[52] = v31;
      }
      else
      {
        v35 = 48 * v19 - 0x58000000000LL;
        v36 = ((v31 >> 16) & 0xFFFFF) << 36;
        *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v36;
        *(_WORD *)(v35 + 36) = v31;
        v7 = *(_QWORD *)(v35 + 24);
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 24), v36 | v7 & 0xFF00000FFFFFFFFFuLL, v7);
        if ( v7 != v6 )
        {
          v7 = *(_QWORD *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          do
          {
            v65 = v6;
            v6 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v35 + 24),
                   v7 | v6 & 0xFF00000FFFFFFFFFuLL,
                   v6);
          }
          while ( v65 != v6 );
          v3 = BugCheckParameter2;
        }
      }
      if ( v31 == 0xFFFFFFFFFLL )
      {
        v34[51] = v19;
      }
      else
      {
        v37 = 48 * v31 - 0x58000000000LL;
        v38 = *(_QWORD *)v37 ^ (v19 << 28);
        *(_BYTE *)(v37 + 39) = v19;
        v19 <<= 28;
        *(_QWORD *)v37 = v19 ^ v38 & 0xFFFFFFFFFLL;
      }
      --v34[50];
      if ( *(_DWORD *)v2 == 1 )
        *(_BYTE *)(v3 + 35) &= ~8u;
    }
  }
  *(_QWORD *)v3 = 0LL;
  if ( v14 )
  {
    MiSetPfnBlink(v3, 0LL, 0);
  }
  else
  {
    *(_QWORD *)(v3 + 24) &= 0xFFFFFFF000000000uLL;
    if ( dword_1402FEC90 == 1 )
    {
      v7 = (unsigned __int128)((__int64)(v3 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v6 = 1LL;
      LOBYTE(v56) = 1;
      v19 = (__int64)(v3 + 0x58000000000LL) / 48;
      v57 = v19 & 0x1F;
      v58 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v19 >> 5);
      if ( (v19 & 0x1F) + 1 > 0x20 )
      {
        if ( (v19 & 0x1F) == 0 )
          goto LABEL_168;
        v19 &= 0x1Fu;
        v7 = (unsigned int)(32 - v19);
        _InterlockedOr(v58++, ((1 << (32 - v19)) - 1) << v57);
        v56 = 1 - v7;
        if ( 1 - v7 >= 0x20 )
        {
          v66 = v56 >> 5;
          v56 += -32LL * (v56 >> 5);
          do
          {
            *v58++ = -1;
            --v66;
          }
          while ( v66 );
        }
        if ( v56 )
        {
LABEL_168:
          v6 = (unsigned int)((1 << v56) - 1);
          _InterlockedOr(v58, v6);
        }
      }
      else
      {
        v6 = (unsigned int)(1 << v57);
        _InterlockedOr(v58, v6);
      }
    }
  }
  if ( !a2 )
    KxReleaseQueuedSpinLock(v2 + 16, v7, v6, v19);
  if ( v13 != 1 || v14 )
    return *(unsigned int *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
  v39 = _InterlockedDecrement64((volatile signed __int64 *)v9 + 736);
  if ( v39 == *((_QWORD *)v9 + 541) || v39 == *((_QWORD *)v9 + 542) )
    MiUpdateAvailableEvents(v9, v7, v6);
  if ( v39 <= 0x420 )
  {
    v67 = *((_QWORD *)v9 + 702);
    if ( !v67 || !*(_BYTE *)(v67 + 52) )
      MiObtainFreePages(v9);
    if ( v39 < 0xA0 && v39 + 1 >= 0xA0 && v9[270] )
      KeSetEvent((PRKEVENT)(v9 + 232), 0, 0);
  }
  if ( v39 >= 0x9F )
    return *(unsigned int *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
  Queue = (int)KeGetCurrentThread()[1].Queue;
  if ( (Queue & 6) == 6 )
    return *(unsigned int *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
  if ( (v39 >= 0x20 || v9 != &MiSystemPartition) && ((Queue & 2) != 0 && v39 >= 0x21 || v9 != &MiSystemPartition && v39) )
    return *(unsigned int *)(((unsigned __int64)&v69 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
  else
    return 0LL;
}
