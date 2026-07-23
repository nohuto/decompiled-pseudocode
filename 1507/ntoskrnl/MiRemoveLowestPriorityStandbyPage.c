/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140145090
 * Callers:
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x140144FC0 (MiPurgePartitionStandby.c)
 *     MiRebalanceZeroFreeLists @ 0x14022E06C (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiSetPfnBlink @ 0x140100DBC (MiSetPfnBlink.c)
 *     MiDecreaseAvailablePages @ 0x1401026DC (MiDecreaseAvailablePages.c)
 *     MiDeleteParentDecayNode @ 0x140113C84 (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x140113D0C (MiRemoveDecayClusterTimer.c)
 *     MI_IS_DECAY_PFN @ 0x14011B378 (MI_IS_DECAY_PFN.c)
 *     MiUnlinkNumaStandbyPage @ 0x140145774 (MiUnlinkNumaStandbyPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rax
  KSPIN_LOCK *v4; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 Next; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  volatile signed __int32 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r9
  unsigned int v27; // eax
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r11
  __int64 updated; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r11
  __int64 v38; // r9
  __int64 v39; // rax
  char v40; // cl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int64 v44; // [rsp+A0h] [rbp+50h]
  unsigned __int8 v45; // [rsp+A8h] [rbp+58h]

  v2 = (_QWORD *)(a1 + 1728);
  v44 = a1 + 8 * (a2 + 4 * (a2 + 54LL));
  if ( a1 + 1728 >= v44 )
    return -1LL;
  v3 = a1 + 8 * (a2 + 4 * (a2 + 54LL));
  v4 = (KSPIN_LOCK *)(a1 + 1760);
  while ( v2[2] == 0xFFFFFFFFFLL )
  {
LABEL_57:
    v2 += 5;
    v4 += 5;
    if ( (unsigned __int64)v2 >= v3 )
      return -1LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v45 = CurrentIrql;
  __writecr8(2uLL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v4, &LockHandle);
  v6 = v2[2];
  if ( v6 == 0xFFFFFFFFFLL )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      v7 = CurrentIrql;
LABEL_56:
      __writecr8(v7);
      v3 = v44;
      goto LABEL_57;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_11:
        v7 = CurrentIrql;
        goto LABEL_56;
      }
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_11;
  }
  v9 = 48 * v6 - 0x58000000000LL;
  if ( MI_IS_DECAY_PFN(v2[2]) )
  {
    v14 = 48 * v6 - 0x58000000000LL;
    v15 = v6;
    v6 = ((unsigned __int64)MiReverseSwizzleInvalidPte(*(_QWORD *)(v9 + 16), v10, v11, v12) >> 12) & 0xFFFFFFFFFLL;
    v9 = 48 * v6 - v13;
    if ( v6 == v15 )
    {
      MiUnlinkPageFromList(v14, 1LL);
      *(_BYTE *)(v14 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v14);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        v7 = CurrentIrql;
        v2 -= 5;
        v4 -= 5;
        goto LABEL_56;
      }
      _m_prefetchw(&LockHandle);
      v16 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_20:
          v2 -= 5;
          v7 = CurrentIrql;
          v4 -= 5;
          goto LABEL_56;
        }
        v16 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
      goto LABEL_20;
    }
  }
  else
  {
    v14 = 0LL;
    v15 = 0xFFFFFFFFFLL;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    v19 = a1;
    goto LABEL_61;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    v17 = 0;
    goto LABEL_29;
  }
  _m_prefetchw(&LockHandle);
  v18 = (__int64)LockHandle.LockQueue.Next;
  v17 = 0;
  if ( !LockHandle.LockQueue.Next )
  {
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) == &LockHandle )
      goto LABEL_29;
    v18 = KxWaitForLockChainValid((__int64 *)&LockHandle);
  }
  LockHandle.LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v18 + 8), 1uLL);
LABEL_29:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v17);
    }
    while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
  }
  if ( (*(_BYTE *)(v9 + 34) & 7) != 2 )
    goto LABEL_55;
  v19 = a1;
  if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF) != (__int16 *)a1 )
    goto LABEL_55;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v4, &LockHandle);
  if ( !v14 )
  {
    if ( v6 == v2[2] )
      goto LABEL_60;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_55:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v2 -= 5;
      v4 -= 5;
      v7 = v45;
      goto LABEL_56;
    }
    _m_prefetchw(&LockHandle);
    v23 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_55;
      v23 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v23 + 8), 1uLL);
    goto LABEL_55;
  }
  if ( v15 != v2[2]
    || v6 != (((unsigned __int64)MiReverseSwizzleInvalidPte(*(_QWORD *)(v14 + 16), v20, v11, v21) >> 12) & 0xFFFFFFFFFLL) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_47:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = v45;
      v2 -= 5;
      v4 -= 5;
      goto LABEL_56;
    }
    _m_prefetchw(&LockHandle);
    v22 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_47;
      v22 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
    goto LABEL_47;
  }
LABEL_60:
  v13 = 0x58000000000LL;
LABEL_61:
  if ( !*v2 )
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v2, *(_QWORD *)(v19 + 5504), 0LL);
  --*v2;
  if ( dword_14034F150 == 1 )
  {
    v25 = v6 & 0x1F;
    LOBYTE(v26) = 1;
    v11 = (volatile signed __int32 *)qword_14034F160->Buffer + (v6 >> 5);
    if ( v25 + 1 <= 0x20 )
    {
      v27 = 1 << v25;
      goto LABEL_71;
    }
    if ( (v6 & 0x1F) == 0 )
      goto LABEL_70;
    _InterlockedOr(v11++, ((1 << (32 - (v6 & 0x1F))) - 1) << v25);
    v26 = 1LL - (32 - (unsigned int)(v6 & 0x1F));
    if ( v26 >= 0x20 )
    {
      v28 = v26 >> 5;
      v26 += -32LL * (v26 >> 5);
      do
      {
        *v11++ = -1;
        --v28;
      }
      while ( v28 );
    }
    if ( v26 )
    {
LABEL_70:
      v27 = (1 << v26) - 1;
LABEL_71:
      _InterlockedOr(v11, v27);
    }
  }
  v29 = *(_QWORD *)v9 & 0xFFFFFFFFFLL;
  v30 = 0;
  if ( (*(_BYTE *)(v9 + 35) & 8) != 0 )
  {
    if ( MI_IS_DECAY_PFN(*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFLL) && v31 == v32 )
    {
      MiDeleteParentDecayNode(v9);
      v30 = 1;
    }
    else
    {
      updated = MiUpdateTransitionPteFrame(*(_QWORD *)(48 * v32 - v33 + 16), v31);
      *(_QWORD *)(v35 + 16) = updated;
      MiSetPfnBlink(48 * v36 - v37, v38, 0);
      v30 = 1;
    }
  }
  else
  {
    v2[2] = v29;
    if ( v29 == 0xFFFFFFFFFLL )
      v2[3] = 0xFFFFFFFFFLL;
    else
      MiSetPfnBlink(48 * v29 - v13, 0xFFFFFFFFFLL, 0);
  }
  MiUnlinkNumaStandbyPage(v9, v29, v11);
  if ( v30 == 1 )
    *(_BYTE *)(v9 + 35) &= ~8u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_88;
  }
  _m_prefetchw(&LockHandle);
  v39 = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_87:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v39 + 8), 1uLL);
  }
  else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                            0LL,
                                            (signed __int64)&LockHandle) != &LockHandle )
  {
    v39 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    goto LABEL_87;
  }
LABEL_88:
  MiDecreaseAvailablePages(a1, 1LL);
  *(_QWORD *)(v9 + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(v9, 1);
  if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64(&qword_14034F400);
  else
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 4160));
  v40 = *(_BYTE *)(v9 + 34);
  *(_QWORD *)(v9 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v9 + 35) &= ~0x20u;
  *(_BYTE *)(v9 + 34) = v40 & 0xC0 | 5;
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 16) = MiMakeDemandZeroPte(4LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v45);
  return v6;
}
