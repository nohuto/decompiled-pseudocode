/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140120F60
 * Callers:
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x140120EAC (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x1401F35CC (MiPruneStandbyPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiReleaseFreshPageLocked @ 0x140021D24 (MiReleaseFreshPageLocked.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiDecreaseAvailablePages @ 0x14008A420 (MiDecreaseAvailablePages.c)
 *     MiDeleteParentDecayNode @ 0x140096330 (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x1400963B8 (MiRemoveDecayClusterTimer.c)
 *     MiIsDecayPfn @ 0x1400A2720 (MiIsDecayPfn.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401213C4 (MiUnlinkNumaStandbyPage.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, __int16 a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 v5; // rax
  KSPIN_LOCK *v6; // rsi
  __int64 v7; // r12
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // r11
  __int64 v12; // rbp
  bool v13; // zf
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r9
  volatile signed __int32 *v17; // r8
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r11
  __int64 updated; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r11
  __int64 v29; // r9
  BOOL v30; // edi
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // cl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+90h] [rbp+8h]

  v3 = (_QWORD *)(a1 + 1984);
  v35 = a1 + 1984 + 40LL * a2;
  if ( a1 + 1984 >= v35 )
    return -1LL;
  v5 = a1 + 1984 + 40LL * a2;
  v6 = (KSPIN_LOCK *)(a1 + 2016);
  v7 = 0xFFFFFFFFFLL;
  while ( v3[2] == 0xFFFFFFFFFLL )
  {
LABEL_22:
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
LABEL_21:
    __writecr8(CurrentIrql);
    v5 = v35;
    goto LABEL_22;
  }
  v10 = 48 * v9 - 0x58000000000LL;
  if ( MiIsDecayPfn(v3[2]) )
  {
    v12 = 48 * v9 - 0x58000000000LL;
    v7 = v9;
    v9 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v10 + 16);
    v10 = v11 + 48 * v9;
    if ( v9 == v7 )
    {
      MiUnlinkPageFromList(v12, 1);
      *(_BYTE *)(v12 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v12);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
LABEL_20:
      v3 -= 5;
      v7 = 0xFFFFFFFFFLL;
      v6 -= 5;
      goto LABEL_21;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    goto LABEL_25;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  MiLockPageAtDpcInline(v10);
  if ( (*(_BYTE *)(v10 + 34) & 7) != 2
    || MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF) != (int *)a1 )
  {
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_20;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v6, &LockHandle);
  if ( v12 )
  {
    if ( v7 != v3[2] )
    {
LABEL_18:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      goto LABEL_19;
    }
    v13 = v9 == MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v12 + 16);
  }
  else
  {
    v13 = v9 == v3[2];
  }
  if ( !v13 )
    goto LABEL_18;
  v11 = 0xFFFFFA8000000000uLL;
LABEL_25:
  if ( !*v3 )
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v3, *(_QWORD *)(a1 + 6464), 0LL);
  --*v3;
  if ( dword_1403270A0 == 1 )
  {
    v15 = v9 & 0x1F;
    LOBYTE(v16) = 1;
    v17 = (volatile signed __int32 *)stru_1403270B8.Buffer + (v9 >> 5);
    if ( v15 + 1 <= 0x20 )
    {
      v18 = 1 << v15;
      goto LABEL_35;
    }
    if ( (v9 & 0x1F) == 0 )
      goto LABEL_34;
    _InterlockedOr(v17++, ((1 << (32 - (v9 & 0x1F))) - 1) << v15);
    v16 = 1LL - (32 - (unsigned int)(v9 & 0x1F));
    if ( v16 >= 0x20 )
    {
      v19 = v16 >> 5;
      v16 += -32LL * (v16 >> 5);
      do
      {
        *v17++ = -1;
        --v19;
      }
      while ( v19 );
    }
    if ( v16 )
    {
LABEL_34:
      v18 = (1 << v16) - 1;
LABEL_35:
      _InterlockedOr(v17, v18);
    }
  }
  v20 = *(_QWORD *)v10 & 0xFFFFFFFFFLL;
  v21 = 0;
  if ( (*(_BYTE *)(v10 + 35) & 8) != 0 )
  {
    if ( MiIsDecayPfn(*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFLL) && v22 == v23 )
    {
      MiDeleteParentDecayNode(v10);
      v21 = 1;
    }
    else
    {
      updated = MiUpdateTransitionPteFrame(*(_QWORD *)(v24 + 48 * v23 + 16), v22);
      *(_QWORD *)(v26 + 16) = updated;
      MiSetPfnBlink(v28 + 48 * v27, v29, 0);
      v21 = 1;
    }
  }
  else
  {
    v3[2] = v20;
    if ( v20 == 0xFFFFFFFFFLL )
      v3[3] = 0xFFFFFFFFFLL;
    else
      MiSetPfnBlink(v11 + 48 * v20, 0xFFFFFFFFFLL, 0);
  }
  MiUnlinkNumaStandbyPage(v10);
  if ( v21 == 1 )
    *(_BYTE *)(v10 + 35) &= ~8u;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v30 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, a3);
  *(_QWORD *)(v10 + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(v10, 1LL, v31, v32);
  if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64(&qword_140327380);
  else
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 4480));
  *(_QWORD *)(v10 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v10 + 34) &= 0xC7u;
  *(_BYTE *)(v10 + 35) &= ~0x20u;
  v33 = *(_BYTE *)(v10 + 34) & 0xFD;
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_BYTE *)(v10 + 34) = v33 | 5;
  MiSetFreshPfnFromFreeList(v10);
  if ( !v30 )
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
