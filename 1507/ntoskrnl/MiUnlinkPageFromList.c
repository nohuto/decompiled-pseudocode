/*
 * XREFs of MiUnlinkPageFromList @ 0x1400C6FD0
 * Callers:
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiEmptyDecayClusterTimers @ 0x140011F70 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyBatch @ 0x140053B30 (MiUnlinkStandbyBatch.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiDecayPfnFullyInitialized @ 0x1400E10AC (MiDecayPfnFullyInitialized.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     MiDeleteParentDecayNode @ 0x140113C84 (MiDeleteParentDecayNode.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiPurgeSubsection @ 0x140211C88 (MiPurgeSubsection.c)
 *     MmEnableModifiedWriteOfSection @ 0x140216DA8 (MmEnableModifiedWriteOfSection.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 *     MiFreeModifiedReservations @ 0x1402218E8 (MiFreeModifiedReservations.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 *     MiNoPagesLastChance @ 0x14022DB04 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x14022E2A0 (MiReuseStandbyPage.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiSetPfnBlink @ 0x140100DBC (MiSetPfnBlink.c)
 *     MiDeleteParentDecayNode @ 0x140113C84 (MiDeleteParentDecayNode.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x14021AB2C (MiObtainFreePages.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 *     MiUnlinkPageFromBadList @ 0x14022649C (MiUnlinkPageFromBadList.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int16 v4; // cx
  int v5; // r8d
  __int64 v6; // r10
  unsigned __int16 v7; // ax
  __int16 *v8; // rsi
  __int16 *v9; // r13
  int v10; // eax
  int v12; // r14d
  unsigned int v13; // r12d
  char v14; // al
  unsigned int v15; // edi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  char v18; // al
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  _QWORD *v22; // r11
  __int64 updated; // rax
  __int64 v24; // r11
  __int64 v25; // r11
  signed __int64 v26; // rdx
  __int64 v27; // r10
  signed __int64 v28; // r8
  signed __int64 v29; // rcx
  bool v30; // cf
  int v31; // eax
  ULONG_PTR v32; // rdx
  char v33; // r11
  int v34; // ecx
  char v35; // r8
  int v36; // ecx
  bool v37; // zf
  _QWORD *v38; // rdx
  unsigned __int16 v39; // cx
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  unsigned int v44; // edi
  int v45; // ett
  unsigned int v46; // ecx
  unsigned int i; // edx
  _QWORD *v48; // rdx
  __int64 v49; // r11
  signed __int64 v50; // rdx
  signed __int64 v51; // r8
  signed __int64 v52; // rcx
  int v53; // eax
  signed __int64 v54; // r8
  signed __int64 v55; // rcx
  int v56; // ecx
  char v57; // al
  unsigned int v58; // r8d
  __int64 v59; // r10
  unsigned __int64 v60; // r12
  unsigned __int16 v61; // ax
  __int16 *v62; // r11
  _QWORD *v63; // r11
  __int64 v64; // r9
  __int64 v65; // rdi
  signed __int64 v66; // rdx
  signed __int64 v67; // r8
  signed __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // r14d
  unsigned __int64 v72; // r10
  unsigned __int64 v73; // r11
  volatile signed __int32 *v74; // r9
  char v75; // r8
  int v76; // r11d
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  unsigned __int64 v79; // rdi
  __int64 v80; // rcx
  int v81; // [rsp+70h] [rbp+0h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+58h]
  int v83; // [rsp+D8h] [rbp+68h]

  v83 = a2;
  v2 = (unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL;
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
    v8 = *(__int16 **)(qword_14034F0E8 + 8LL * v7);
  v9 = *(__int16 **)&v8[4 * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 1716];
  v10 = *((_DWORD *)v9 + 2);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, a2, (unsigned int)a2);
    return 1LL;
  }
  *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 1;
  v12 = 0;
  *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  *(_DWORD *)v2 = 0;
  v13 = 5;
  if ( v10 != 2 )
  {
    if ( v10 != 3 )
    {
      if ( (v6 & 0x200000000000000LL) != 0 )
        _InterlockedDecrement64(&qword_14034F400);
      else
        _InterlockedDecrement64((volatile signed __int64 *)v8 + 520);
      if ( !(_DWORD)a2 )
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9 + 4, (PKLOCK_QUEUE_HANDLE)(v2 + 16));
      goto LABEL_108;
    }
    _InterlockedDecrement64((volatile signed __int64 *)v9);
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64(&qword_14034F400);
    else
      _InterlockedDecrement64((volatile signed __int64 *)v8 + 520);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      if ( !(_DWORD)a2 )
      {
        v37 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
        *(_QWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9 + 16;
        *(_QWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        if ( v37 )
        {
          v38 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v9 + 4, v2 + 16);
          if ( v38 )
            KxWaitForLockOwnerShip(v2 + 16, v38);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v2 + 16, v9 + 16);
        }
      }
      --*((_QWORD *)v8 + 718);
      v39 = *(_QWORD *)(BugCheckParameter2 + 16);
      v40 = (unsigned __int8)v39 >> 1;
      v41 = v39 >> 12;
      if ( (v40 & 1) != 0 || (_DWORD)v41 == *((_DWORD *)v8 + 261) )
        v9 = &v8[16 * v41 + 1056 + 4 * v41];
      else
        v9 = v8 + 1024;
LABEL_108:
      v20 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
      v31 = *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v21 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
      goto LABEL_109;
    }
    v42 = *(_QWORD *)(BugCheckParameter2 + 40);
    v9 = &v8[16 * (HIBYTE(v42) >> 2) + 1376 + 4 * (HIBYTE(v42) >> 2)];
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v42 & 0x10000000000000LL) == 0 )
        goto LABEL_80;
    }
    else if ( (v42 & 0x10000000000000LL) == 0 )
    {
LABEL_80:
      v43 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      if ( qword_14034EB80 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034E8B0);
        }
        else
        {
          _m_prefetchw(&dword_14034E8B0);
          v45 = dword_14034E8B0 & 0x7FFFFFFF;
          if ( v45 != _InterlockedCompareExchange(
                        &dword_14034E8B0,
                        (dword_14034E8B0 & 0x7FFFFFFF) + 1,
                        dword_14034E8B0 & 0x7FFFFFFF) )
            ExpWaitForSpinLockSharedAndAcquire(&dword_14034E8B0);
        }
        v46 = dword_14034EB78;
        if ( v43 < *(_QWORD *)(qword_14034EB80 + 16LL * (unsigned int)dword_14034EB78) )
        {
          do
            --v46;
          while ( v43 < *(_QWORD *)(qword_14034EB80 + 16LL * v46) );
        }
        else
        {
          for ( i = dword_14034EB78 + 1; v43 >= *(_QWORD *)(qword_14034EB80 + 16LL * i); ++v46 )
            ++i;
        }
        v44 = *(_DWORD *)(qword_14034EB80 + 16LL * v46 + 8);
        dword_14034EB78 = v46;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034E8B0, retaddr);
        }
        else
        {
          _InterlockedAnd(&dword_14034E8B0, 0xBFFFFFFF);
          _InterlockedDecrement(&dword_14034E8B0);
        }
        v5 = v83;
      }
      else
      {
        v44 = 0;
      }
      goto LABEL_97;
    }
    v44 = 0;
LABEL_97:
    if ( !v5 )
    {
      v37 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
      *(_QWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9 + 16;
      *(_QWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      if ( v37 )
      {
        v48 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v9 + 4, v2 + 16);
        if ( v48 )
          KxWaitForLockOwnerShip(v2 + 16, v48);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v2 + 16, v9 + 16);
      }
    }
    *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v44 << 58);
    goto LABEL_108;
  }
  v14 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v14 & 8) != 0 )
    v15 = 5;
  else
    v15 = v14 & 7;
  v16 = qword_14034F420;
  v17 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( v17 < qword_14034F420 || v17 >= qword_14034F420 + 2048 )
  {
    *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    if ( (v14 & 8) != 0 )
      v12 = 1;
    *(_DWORD *)v2 = v12;
    if ( (v6 & 0x200000000000000LL) != 0 )
      _InterlockedDecrement64(&qword_14034F400);
    else
      _InterlockedDecrement64((volatile signed __int64 *)v8 + 520);
    v16 = qword_14034F420;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
  }
  v9 = &v8[16 * v15 + 864 + 4 * v15];
  if ( !v83 )
  {
    v18 = BYTE6(PerfGlobalGroupMask);
    *(_QWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9 + 16;
    *(_QWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    if ( (v18 & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v2 + 16, v9 + 16);
    }
    else
    {
      v19 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v9 + 4, v2 + 16);
      if ( v19 )
        KxWaitForLockOwnerShip(v2 + 16, v19);
    }
    v16 = qword_14034F420;
  }
  v20 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  if ( *(_DWORD *)v2 == 1 )
  {
    if ( v20 >= v16 && v20 < v16 + 2048 && v21 == v20 )
    {
      MiDeleteParentDecayNode(BugCheckParameter2);
    }
    else
    {
      v22 = (_QWORD *)(48 * v21 - 0x58000000000LL);
      if ( v21 < v16 || v21 >= v16 + 2048 )
      {
        *v22 ^= (*v22 ^ v20) & 0xFFFFFFFFFLL;
      }
      else
      {
        updated = MiUpdateTransitionPteFrame(v22[2], *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL);
        *(_QWORD *)(v24 + 16) = updated;
      }
      v25 = 48 * v20 - 0x58000000000LL;
      if ( v20 < qword_14034F420 || v20 >= qword_14034F420 + 2048 )
      {
        v26 = *(_QWORD *)(v25 + 24);
        v27 = v21 & 0xFFFFFFFFFLL;
        v28 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v25 + 24),
                v27 | v26 & 0xFFFFFFF000000000uLL,
                v26);
        if ( v26 != v28 )
        {
          do
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v25 + 24),
                    v27 | v28 & 0xFFFFFFF000000000uLL,
                    v28);
          }
          while ( v29 != v28 );
        }
      }
      else
      {
        *(_QWORD *)(v25 + 40) ^= (*(_QWORD *)(v25 + 40) ^ v21) & 0xFFFFFFFFFLL;
      }
    }
    v20 = 0xFFFFFFFFFLL;
    v21 = 0xFFFFFFFFFLL;
  }
  else
  {
    if ( v20 != 0xFFFFFFFFFLL && (v20 < v16 || v20 >= v16 + 2048) )
    {
      v32 = 48 * v20 - 0x58000000000LL;
      v33 = *(_BYTE *)(v32 + 35);
      v34 = (v33 & 8) != 0 ? 5 : v33 & 7;
      if ( v15 != v34 )
      {
        if ( (v33 & 8) == 0 )
          v13 = v33 & 7;
        KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v32, v13 | (unsigned __int64)(v15 << 8));
      }
    }
    if ( v21 != 0xFFFFFFFFFLL && (v21 < v16 || v21 >= v16 + 2048) )
    {
      v35 = *(_BYTE *)(48 * v21 - 0x58000000000LL + 35);
      v36 = (v35 & 8) != 0 ? 5 : v35 & 7;
      if ( v15 != v36 )
      {
        if ( (v35 & 8) == 0 )
          v13 = v35 & 7;
        KeBugCheckEx(
          0x1Au,
          0x8887uLL,
          BugCheckParameter2,
          48 * v21 - 0x58000000000LL,
          v13 | (unsigned __int64)(v15 << 8));
      }
    }
  }
  v30 = v15 < dword_14034F0F8;
  v31 = 1;
  *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 1;
  if ( v30 )
    *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
LABEL_109:
  if ( v20 != 0xFFFFFFFFFLL )
  {
    v49 = 48 * v20 - 0x58000000000LL;
    v50 = *(_QWORD *)(v49 + 24);
    if ( v31 == 1 )
    {
      v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 24), v21 | v50 & 0xFFFFFFF000000000uLL, v50);
      if ( v50 != v51 )
      {
        do
        {
          v52 = v51;
          v51 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v49 + 24),
                  v21 | v51 & 0xFFFFFFF000000000uLL,
                  v51);
        }
        while ( v52 != v51 );
        v53 = *(_DWORD *)v2;
        goto LABEL_119;
      }
    }
    else
    {
      v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 24), v21 | v50 & 0xFFFFFFF000000000uLL, v50);
      if ( v50 != v54 )
      {
        do
        {
          v55 = v54;
          v54 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v49 + 24),
                  v21 | v54 & 0xFFFFFFF000000000uLL,
                  v54);
        }
        while ( v55 != v54 );
      }
    }
    v53 = *(_DWORD *)v2;
    goto LABEL_119;
  }
  v53 = *(_DWORD *)v2;
  if ( !*(_DWORD *)v2 )
    *((_QWORD *)v9 + 3) = v21;
LABEL_119:
  if ( v21 == 0xFFFFFFFFFLL )
  {
    if ( !v53 )
      *((_QWORD *)v9 + 2) = v20;
  }
  else
  {
    *(_QWORD *)(48 * v21 - 0x58000000000LL) ^= (*(_QWORD *)(48 * v21 - 0x58000000000LL) ^ v20) & 0xFFFFFFFFFLL;
  }
  v56 = *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
  if ( !*(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    --*(_QWORD *)v9;
    if ( v56 == 1 )
    {
      v57 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v57 & 8) != 0 )
        v58 = 5;
      else
        v58 = v57 & 7;
      v59 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
      v60 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
      v61 = ((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF;
      if ( v61 == 1023 )
        v62 = MiSystemPartition;
      else
        v62 = *(__int16 **)(qword_14034F0E8 + 8LL * v61);
      v63 = (_QWORD *)(1336LL * ((unsigned __int8)HIBYTE(*(_QWORD *)(BugCheckParameter2 + 40)) >> 2)
                     + 24 * (v58 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL))
                     + *((_QWORD *)v62 + 5));
      if ( v59 == 0xFFFFFFFFFLL )
      {
        v63[52] = v60;
      }
      else
      {
        v64 = 48 * v59 - 0x58000000000LL;
        v65 = ((v60 >> 16) & 0xFFFFF) << 36;
        *(_WORD *)(v64 + 36) = *(_WORD *)(BugCheckParameter2 + 36);
        v66 = *(_QWORD *)(v64 + 24);
        v67 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v64 + 24),
                v65 | v66 & 0xFF00000FFFFFFFFFuLL,
                v66);
        if ( v66 != v67 )
        {
          do
          {
            v68 = v67;
            v67 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v64 + 24),
                    v65 | v67 & 0xFF00000FFFFFFFFFuLL,
                    v67);
          }
          while ( v68 != v67 );
        }
      }
      if ( v60 == 0xFFFFFFFFFLL )
      {
        v63[51] = v59;
      }
      else
      {
        v69 = 48 * v60 - 0x58000000000LL;
        v70 = *(_QWORD *)v69 ^ (v59 << 28);
        *(_BYTE *)(v69 + 39) = v59;
        *(_QWORD *)v69 = (v59 << 28) ^ v70 & 0xFFFFFFFFFLL;
      }
      --v63[50];
      if ( *(_DWORD *)v2 == 1 )
        *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
    }
  }
  v71 = *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_QWORD *)BugCheckParameter2 = 0LL;
  if ( v71 )
  {
    MiSetPfnBlink(BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFFF000000000uLL;
    if ( dword_14034F150 == 1 )
    {
      LOBYTE(v72) = 1;
      v73 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
      v74 = (volatile signed __int32 *)qword_14034F160->Buffer + (v73 >> 5);
      v75 = v73 & 0x1F;
      if ( (v73 & 0x1F) + 1 > 0x20 )
      {
        if ( (v73 & 0x1F) == 0 )
          goto LABEL_150;
        v76 = v73 & 0x1F;
        _InterlockedOr(v74++, ((1 << (32 - v76)) - 1) << v75);
        v72 = 1LL - (unsigned int)(32 - v76);
        if ( v72 >= 0x20 )
        {
          v77 = v72 >> 5;
          v72 += -32LL * (v72 >> 5);
          do
          {
            *v74++ = -1;
            --v77;
          }
          while ( v77 );
        }
        if ( v72 )
LABEL_150:
          _InterlockedOr(v74, (1 << v72) - 1);
      }
      else
      {
        _InterlockedOr(v74, 1 << v75);
      }
    }
  }
  if ( v83 )
    goto LABEL_159;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v2 + 16, retaddr);
    goto LABEL_159;
  }
  _m_prefetchw((const void *)(v2 + 16));
  v78 = *(_QWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v78 )
  {
    if ( _InterlockedCompareExchange64(
           *(volatile signed __int64 **)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
           0LL,
           ((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 16) == v2 + 16 )
      goto LABEL_159;
    v78 = KxWaitForLockChainValid((__int64 *)(v2 + 16));
  }
  *(_QWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v78 + 8), 1uLL);
LABEL_159:
  if ( *(_DWORD *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 4) == 1 && !v71 )
  {
    v79 = _InterlockedDecrement64((volatile signed __int64 *)v8 + 688);
    if ( v79 == *((_QWORD *)v8 + 513) || v79 == *((_QWORD *)v8 + 514) )
      MiUpdateAvailableEvents(v8);
    if ( v79 <= 0x400 )
    {
      v80 = *((_QWORD *)v8 + 657);
      if ( !v80 || !*(_BYTE *)(v80 + 52) )
        MiObtainFreePages(v8);
    }
  }
  return *(unsigned int *)(((unsigned __int64)&v81 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
}
