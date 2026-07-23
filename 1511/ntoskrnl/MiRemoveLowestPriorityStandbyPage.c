/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140112420
 * Callers:
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x14011236C (MiPurgePartitionStandby.c)
 *     MiRebalanceZeroFreeLists @ 0x1401E424C (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiReleaseFreshPageLocked @ 0x140007B44 (MiReleaseFreshPageLocked.c)
 *     MiSetPfnBlink @ 0x140012C74 (MiSetPfnBlink.c)
 *     MiDecreaseAvailablePages @ 0x1400197DC (MiDecreaseAvailablePages.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiDeleteParentDecayNode @ 0x1400DFE0C (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x1400DFEB0 (MiRemoveDecayClusterTimer.c)
 *     MI_IS_DECAY_PFN @ 0x1400E55E4 (MI_IS_DECAY_PFN.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401126E0 (MiUnlinkNumaStandbyPage.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, __int16 a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // r14
  KSPIN_LOCK *v6; // rbp
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  volatile signed __int32 *v11; // r8
  __int64 v12; // r10
  __int64 v13; // r13
  int v14; // ebp
  __int64 v15; // rdx
  int v16; // edi
  char v17; // cl
  unsigned __int64 v18; // rax
  BOOL v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned __int64 v28; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+90h] [rbp+8h]

  v3 = (_QWORD *)(a1 + 1856);
  v5 = a1 + 8 * (a2 + 4 * (a2 + 58LL));
  if ( a1 + 1856 >= v5 )
    return -1LL;
  v6 = (KSPIN_LOCK *)(a1 + 1888);
  while ( v3[2] == 0xFFFFFFFFFLL )
  {
LABEL_4:
    v3 += 5;
    v6 += 5;
    if ( (unsigned __int64)v3 >= v5 )
      return -1LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v6, &LockHandle);
  v9 = v3[2];
  if ( v9 == 0xFFFFFFFFFLL )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
LABEL_40:
    __writecr8(CurrentIrql);
    goto LABEL_4;
  }
  v10 = 48 * v9 - 0x58000000000LL;
  if ( MI_IS_DECAY_PFN(v3[2]) )
  {
    v18 = v9;
    v13 = 48 * v9 - 0x58000000000LL;
    v9 = (*(_QWORD *)(v10 + 16) >> 12) & 0xFFFFFFFFFLL;
    v30 = v18;
    v10 = 48 * v9 - v12;
    if ( v9 == v18 )
    {
      MiUnlinkPageFromList(v13, 1);
      *(_BYTE *)(v13 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v13);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
LABEL_39:
      v3 -= 5;
      v6 -= 5;
      goto LABEL_40;
    }
  }
  else
  {
    v13 = 0LL;
    v30 = 0xFFFFFFFFFLL;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    goto LABEL_10;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  MiLockPageAtDpcInline(v10, v23, v24);
  if ( (*(_BYTE *)(v10 + 34) & 7) != 2
    || MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF) != (int *)a1 )
  {
LABEL_38:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_39;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v6, &LockHandle);
  if ( !v13 )
  {
    if ( v9 == v3[2] )
      goto LABEL_41;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    goto LABEL_38;
  }
  if ( v30 != v3[2] || v9 != ((*(_QWORD *)(v13 + 16) >> 12) & 0xFFFFFFFFFLL) )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_39;
  }
LABEL_41:
  v12 = 0x58000000000LL;
LABEL_10:
  if ( !*v3 )
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v3, *(_QWORD *)(a1 + 5888), 0LL);
  --*v3;
  if ( dword_1402FEC90 == 1 )
  {
    v25 = v9 & 0x1F;
    LOBYTE(v26) = 1;
    v11 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v9 >> 5);
    if ( v25 + 1 > 0x20 )
    {
      if ( (v9 & 0x1F) != 0 )
      {
        _InterlockedOr(v11++, ((1 << (32 - (v9 & 0x1F))) - 1) << v25);
        v26 = 1LL - (32 - (unsigned int)(v9 & 0x1F));
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
        if ( !v26 )
          goto LABEL_12;
      }
      v27 = (1 << v26) - 1;
    }
    else
    {
      v27 = 1 << v25;
    }
    _InterlockedOr(v11, v27);
  }
LABEL_12:
  v14 = 0;
  v15 = *(_QWORD *)v10 & 0xFFFFFFFFFLL;
  if ( (*(_BYTE *)(v10 + 35) & 8) != 0 )
  {
    v19 = MI_IS_DECAY_PFN(*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFLL);
    if ( v20 == v21 && v19 )
    {
      MiDeleteParentDecayNode(v10);
      v14 = 1;
    }
    else
    {
      *(_QWORD *)(48 * v21 - v22 + 16) ^= (*(_QWORD *)(48 * v21 - v22 + 16) ^ (v20 << 12)) & 0xFFFFFFFFF000LL;
      MiSetPfnBlink(48 * v20 - v22, v21, 0);
      v14 = 1;
    }
  }
  else
  {
    v3[2] = v15;
    if ( v15 == 0xFFFFFFFFFLL )
      v3[3] = 0xFFFFFFFFFLL;
    else
      MiSetPfnBlink(48 * v15 - v12, 0xFFFFFFFFFLL, 0);
  }
  MiUnlinkNumaStandbyPage(v10, v15, v11);
  if ( v14 == 1 )
    *(_BYTE *)(v10 + 35) &= ~8u;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v16 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, a3);
  *(_QWORD *)(v10 + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(v10, 1);
  if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64(&qword_1402FEF40);
  else
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 4352));
  v17 = *(_BYTE *)(v10 + 34);
  *(_QWORD *)(v10 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v10 + 35) &= ~0x20u;
  *(_QWORD *)v10 = 0LL;
  *(_BYTE *)(v10 + 34) = v17 & 0xC0 | 5;
  *(_QWORD *)(v10 + 16) = 128LL;
  if ( !v16 )
  {
    MiReleaseFreshPageLocked(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return -1LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v9;
}
