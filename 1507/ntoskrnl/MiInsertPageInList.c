/*
 * XREFs of MiInsertPageInList @ 0x1400C6750
 * Callers:
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400553B0 (MiInsertAndUnlockStandbyPages.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiCreateDecayPfn @ 0x1400E0F20 (MiCreateDecayPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140213164 (MmMarkPhysicalMemoryAsBad.c)
 *     MmEnableModifiedWriteOfSection @ 0x140216DA8 (MmEnableModifiedWriteOfSection.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 *     MiFreeModifiedReservations @ 0x1402218E8 (MiFreeModifiedReservations.c)
 *     MiMakePageBad @ 0x140232438 (MiMakePageBad.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiInsertDecayClusterTimer @ 0x140116CE0 (MiInsertDecayClusterTimer.c)
 *     MiWakeModifiedPageWriter @ 0x14014D788 (MiWakeModifiedPageWriter.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

int __fastcall MiInsertPageInList(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned __int16 v4; // ax
  __int16 *v5; // rsi
  __int16 *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // al
  signed __int64 v12; // rax
  bool v13; // dl
  __int64 v14; // rax
  int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 Next; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdx
  volatile signed __int32 *v21; // rbx
  signed __int8 v22; // cf
  signed __int32 v23; // edx
  unsigned int v24; // edi
  __int64 v25; // rax
  unsigned __int64 *v26; // rbx
  _QWORD *v27; // rdx
  unsigned __int16 v28; // cx
  char v29; // al
  __int64 v30; // rcx
  BOOL v31; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r8
  unsigned __int16 v42; // ax
  __int16 *v43; // r11
  _QWORD *v44; // r9
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _DWORD *v49; // rcx
  signed __int32 v51[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v52; // [rsp+20h] [rbp-58h]
  __int16 *v53; // [rsp+28h] [rbp-50h]
  __int64 v54; // [rsp+30h] [rbp-48h]
  __int64 v55; // [rsp+38h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v56; // [rsp+40h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-20h] BYREF
  void *retaddr; // [rsp+98h] [rbp+20h]
  unsigned __int64 v60; // [rsp+A0h] [rbp+28h]
  unsigned __int64 v61; // [rsp+A0h] [rbp+28h]
  char v62; // [rsp+A8h] [rbp+30h]
  int v63; // [rsp+B0h] [rbp+38h]
  BOOL v64; // [rsp+B8h] [rbp+40h]

  v62 = a2;
  v2 = a1;
  memset(&v56, 0, sizeof(v56));
  v3 = a2;
  v4 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v4 == 1023 )
    v5 = MiSystemPartition;
  else
    v5 = *(__int16 **)(qword_14034F0E8 + 8LL * v4);
  if ( (a2 & 4) != 0 )
  {
    v6 = v5 + 832;
  }
  else if ( (a2 & 8) != 0 )
  {
    v6 = v5 + 2816;
  }
  else
  {
    v6 = v5 + 2848;
    if ( (a2 & 0x10) == 0 )
      v6 = v5 + 1696;
  }
  v7 = *((unsigned int *)v6 + 2);
  v53 = v6;
  v63 = v7;
  v8 = (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v55 = (a1 + 0x58000000000LL) / 48;
  _InterlockedOr(v51, 0);
  v9 = (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v54 = 0LL;
  *(_QWORD *)(v2 + 24) ^= v9;
  v64 = 0;
  if ( (_DWORD)v7 == 2 )
  {
    v10 = *(_QWORD *)(v2 + 40);
    if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v10 & 0x10000000000000LL) == 0 )
        goto LABEL_13;
    }
    else if ( (v10 & 0x10000000000000LL) == 0 )
    {
LABEL_13:
      v11 = *(_BYTE *)(v2 + 35);
      if ( (v11 & 0x40) != 0 )
      {
        MiRestoreTransitionPte(v2, 0LL);
        LODWORD(v12) = MiInsertPageInList(v2, 32LL);
        return v12;
      }
      v13 = (v11 & 8) != 0;
      if ( (v11 & 8) != 0 )
        v14 = 5LL;
      else
        v14 = *(_BYTE *)(v2 + 35) & 7;
      v6 = &v5[16 * v14 + 864 + 4 * v14];
      v53 = v6;
      if ( v13 )
        goto LABEL_38;
      if ( (v10 & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64(&qword_14034F400);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 520);
      v15 = 1;
      v16 = _InterlockedIncrement64((volatile signed __int64 *)v5 + 688);
      v60 = v16;
      if ( v16 <= 0x80 )
      {
        if ( v16 == 128 )
          goto LABEL_28;
        if ( v16 == 2 )
        {
          v15 = 0;
LABEL_28:
          v17 = 16LL * v15;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 504, &LockHandle);
          KeSetEvent((PRKEVENT)&v5[v17 + 2020], 0, 0);
          ++*(_DWORD *)&v5[v17 + 2032];
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_34:
            v16 = v60;
            v6 = v53;
            goto LABEL_35;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_34;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_34;
        }
      }
LABEL_35:
      v19 = v16 - 1;
      if ( v19 == *((_QWORD *)v5 + 513) || v19 == *((_QWORD *)v5 + 514) )
        MiUpdateAvailableEvents(v5);
LABEL_38:
      if ( v62 >= 0 )
      {
        v56.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 16);
        v56.LockQueue.Next = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v56, v6 + 16);
        }
        else
        {
          v20 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6 + 4, (__int64)&v56);
          if ( v20 )
            KxWaitForLockOwnerShip((__int64)&v56, v20);
        }
      }
      goto LABEL_102;
    }
    MiRestoreTransitionPte(v2, 0LL);
    LODWORD(v12) = MiClearFileOnlyPfn(v2);
    return v12;
  }
  if ( (_DWORD)v7 == 3 )
  {
    if ( (*(_QWORD *)(v2 + 40) & 0x200000000000000LL) != 0 )
      _InterlockedIncrement64(&qword_14034F400);
    else
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 520);
    goto LABEL_76;
  }
  if ( (_DWORD)v7 != 4 )
  {
    MiClearPfnImageVerified(v2, 12LL);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 428, &v56);
    *(_QWORD *)(v2 + 8) = -4LL;
    goto LABEL_102;
  }
  v54 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v2 + 16), v8, v3, v7);
  if ( (*(_QWORD *)(v2 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedIncrement64(&qword_14034F400);
  else
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 520);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v6 + 4, &v56);
  v21 = (volatile signed __int32 *)(v54 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v54 + 72);
  }
  else
  {
    v22 = _interlockedbittestandset(v21, 0x1Fu);
    v52 = 0;
    if ( v22 )
      v52 = ExpWaitForSpinLockExclusiveAndAcquire(v21);
    v23 = *v21;
    if ( (*v21 & 0xBFFFFFFF) != 0x80000000 )
    {
      v24 = v52;
      do
      {
        if ( (v23 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v21, v23 | 0x40000000, v23);
        if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v24);
        v23 = *v21;
      }
      while ( (*v21 & 0xBFFFFFFF) != 0x80000000 );
      v2 = a1;
    }
  }
  if ( (*(_DWORD *)(v54 + 56) & 8) != 0 )
  {
    v6 = v53;
    goto LABEL_102;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
  else
    *v21 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v56);
    v25 = (__int64)v56.LockQueue.Next;
    if ( !v56.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v56.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&v56) == &v56 )
        goto LABEL_75;
      v25 = KxWaitForLockChainValid((__int64 *)&v56);
    }
    v56.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v25 + 8), 1uLL);
    goto LABEL_75;
  }
  KiReleaseQueuedSpinLockInstrumented(&v56, retaddr);
LABEL_75:
  v6 = v53;
  LOBYTE(v3) = v62;
  v54 = 0LL;
  v63 = 3;
LABEL_76:
  _InterlockedIncrement64((volatile signed __int64 *)v5 + 704);
  if ( (*(_DWORD *)(v2 + 16) & 0x400LL) != 0 )
  {
    v32 = *(unsigned int *)(qword_140355188 + 24);
    v56.LockQueue.Next = 0LL;
    v6 = &v5[16 * v32 + 1376 + 4 * v32];
    v56.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v56, v6 + 16);
    }
    else
    {
      v33 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6 + 4, (__int64)&v56);
      if ( v33 )
        KxWaitForLockOwnerShip((__int64)&v56, v33);
    }
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((((char *)v6 - (char *)v5 - 2752) / 40) << 58);
  }
  else
  {
    if ( (v3 & 0x80u) == 0LL )
    {
      v26 = (unsigned __int64 *)(v6 + 16);
      v56.LockQueue.Next = 0LL;
      v56.LockQueue.Lock = v26;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v56, v26);
      }
      else
      {
        v27 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v26, (__int64)&v56);
        if ( v27 )
          KxWaitForLockOwnerShip((__int64)&v56, v27);
      }
    }
    v28 = *(_QWORD *)(v2 + 16);
    v29 = (unsigned __int8)v28 >> 1;
    v30 = v28 >> 12;
    if ( (v29 & 1) != 0 || (_DWORD)v30 == *((_DWORD *)v5 + 261) )
      v6 = &v5[16 * v30 + 1056 + 4 * v30];
    else
      v6 = v5 + 1024;
    v31 = *(_QWORD *)v6 == 0LL;
    ++*((_QWORD *)v5 + 718);
    v64 = v31;
  }
  CurrentThread = KeGetCurrentThread();
  ++LODWORD(CurrentThread->ApcState.Process[2].Affinity.Bitmap[1]);
  v35 = *((_QWORD *)v5 + 688);
  v61 = v35;
  if ( v35 < 0x400 )
  {
    if ( v35 < 0x100 && *((_QWORD *)v5 + 718) >= 0x10uLL )
    {
      MiWakeModifiedPageWriter(v5, -1LL);
      v35 = v61;
    }
    v36 = *((_QWORD *)v5 + 704) - *((_QWORD *)v5 + 718);
    if ( v36 >= 0x320 || v35 < 0x100 && v36 >= 0x10 )
      KeSetEvent((PRKEVENT)(v5 + 352), 0, 0);
  }
LABEL_102:
  if ( (*(_BYTE *)(v2 + 35) & 8) != 0 )
    MiInsertDecayClusterTimer(v2);
  else
    ++*(_QWORD *)v6;
  v37 = *((_QWORD *)v6 + 3);
  v38 = v55;
  if ( v37 == 0xFFFFFFFFFLL )
    *((_QWORD *)v6 + 2) = v55;
  else
    *(_QWORD *)(48 * v37 - 0x58000000000LL) ^= (v55 ^ *(_QWORD *)(48 * v37 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v2 + 34) ^= (*(_BYTE *)(v2 + 34) ^ v63) & 7;
  *((_QWORD *)v6 + 3) = v38;
  v39 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)v2 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(v2 + 24) ^= (v37 ^ v39) & 0xFFFFFFFFFLL;
  if ( v63 == 2 && (*(_BYTE *)(v2 + 35) & 8) == 0 )
  {
    v40 = *(_QWORD *)(v2 + 40);
    v41 = v40 >> 58;
    v42 = (HIDWORD(v40) >> 8) & 0x3FF;
    if ( v42 == 1023 )
      v43 = MiSystemPartition;
    else
      v43 = *(__int16 **)(qword_14034F0E8 + 8LL * v42);
    v44 = (_QWORD *)(*((_QWORD *)v43 + 5)
                   + 1336LL * (unsigned int)v41
                   + 24 * ((*(_BYTE *)(v2 + 35) & 7) + 8 * ((*(_QWORD *)(v2 + 40) >> 36) & 3LL)));
    ++v44[50];
    v45 = v44[52];
    if ( v45 == 0xFFFFFFFFFLL )
    {
      v44[51] = v38;
    }
    else
    {
      v46 = 48 * v45 - 0x58000000000LL;
      v47 = (*(_QWORD *)v46 ^ (v38 << 28)) & 0xFFFFFFFFFLL;
      *(_BYTE *)(v46 + 39) = v38;
      *(_QWORD *)v46 = (v38 << 28) ^ v47;
    }
    *(_WORD *)(v2 + 36) = v45;
    *(_QWORD *)v2 |= 0xFFFFFFF000000000uLL;
    v48 = (*(_QWORD *)(v2 + 24) ^ (v45 << 20)) & 0xFFFFF000000000LL;
    *(_BYTE *)(v2 + 39) = -1;
    *(_QWORD *)(v2 + 24) ^= v48;
    v44[52] = v38;
  }
  LODWORD(v12) = v54;
  if ( v54 )
  {
    v49 = (_DWORD *)(v54 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      LODWORD(v12) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v49, retaddr);
    else
      *v49 = 0;
  }
  if ( v62 < 0 )
    goto LABEL_128;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    LODWORD(v12) = KiReleaseQueuedSpinLockInstrumented(&v56, retaddr);
    goto LABEL_128;
  }
  _m_prefetchw(&v56);
  v12 = (signed __int64)v56.LockQueue.Next;
  if ( !v56.LockQueue.Next )
  {
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v56.LockQueue.Lock, 0LL, (signed __int64)&v56);
    if ( (struct _KLOCK_QUEUE_HANDLE *)v12 == &v56 )
      goto LABEL_128;
    v12 = KxWaitForLockChainValid((__int64 *)&v56);
  }
  v56.LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
LABEL_128:
  if ( v64 )
    LODWORD(v12) = KeSetEvent((PRKEVENT)v5 + 33, 0, 0);
  return v12;
}
