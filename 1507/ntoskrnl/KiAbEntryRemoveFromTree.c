/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x1400F5E10
 * Callers:
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14004EAF0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeAbPreWait @ 0x1400F32B0 (KeAbPreWait.c)
 *     KeAbEntryFree @ 0x1400F4C90 (KeAbEntryFree.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlRbReplaceNode @ 0x1400F4960 (RtlRbReplaceNode.c)
 *     KiAbTryDecrementIoWaiterCount @ 0x1400F4C74 (KiAbTryDecrementIoWaiterCount.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall KiAbEntryRemoveFromTree(__int64 a1)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // rsi
  unsigned __int64 *v4; // r15
  unsigned __int8 CurrentIrql; // r12
  BOOL i; // r14d
  unsigned int v7; // ebx
  signed __int32 v8; // eax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _QWORD *v12; // rdx
  unsigned __int64 *v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  signed __int32 v17; // ett
  __int64 v18; // r8
  unsigned __int64 v19; // r13
  __int64 Next; // rax
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-40h]
  unsigned int v24; // [rsp+28h] [rbp-38h]
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v26; // [rsp+38h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  unsigned __int8 v29; // [rsp+90h] [rbp+30h]

  v24 = *(_DWORD *)(a1 + 40);
  v23 = *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v23 >> 4) & 0x3FF) << 6;
  v3 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v2 + 16);
  v4 = (unsigned __int64 *)((char *)&KiAbTreeArray + v2);
  CurrentIrql = KeGetCurrentIrql();
  v29 = CurrentIrql;
  __writecr8(2uLL);
  for ( i = (*(_BYTE *)(a1 + 27) & 1) != 0; ; i = 1 )
  {
    if ( i )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
      }
      else
      {
        v7 = 0;
        if ( _interlockedbittestandset(v3, 0x1Fu) )
          v7 = ExpWaitForSpinLockExclusiveAndAcquire(v3);
        while ( 1 )
        {
          v8 = *v3;
          if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v8 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v3, v8 | 0x40000000, v8);
          if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v7);
        }
      }
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v3);
    }
    else
    {
      _m_prefetchw((const void *)v3);
      v17 = *v3 & 0x7FFFFFFF;
      if ( v17 != _InterlockedCompareExchange(v3, v17 + 1, v17) )
        ExpWaitForSpinLockSharedAndAcquire(v3);
    }
    v9 = *v4;
    if ( *v4 )
    {
      do
      {
        v10 = *(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v10 > v23 )
          goto LABEL_63;
        if ( v10 < v23 )
          goto LABEL_66;
        v11 = *(_DWORD *)(v9 + 40);
        if ( v11 == v24 )
          break;
        if ( v11 < v24 )
LABEL_66:
          v9 = *(_QWORD *)(v9 + 8);
        else
LABEL_63:
          v9 = *(_QWORD *)v9;
      }
      while ( v9 );
      CurrentIrql = v29;
    }
    v26 = (volatile signed __int64 *)(v9 + 80);
    v25 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v25, v9 + 80);
    }
    else
    {
      v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v9 + 80), (__int64)&v25);
      if ( v12 )
        KxWaitForLockOwnerShip((__int64)&v25, v12);
    }
    if ( v9 != a1 )
      break;
    if ( i )
    {
      if ( *(_QWORD *)(v9 + 64) )
      {
        v13 = (unsigned __int64 *)(v9 + 64);
      }
      else
      {
        v13 = (unsigned __int64 *)(v9 + 48);
        if ( !*(_QWORD *)(v9 + 48) )
        {
LABEL_19:
          RtlRbRemoveNode(v4, v9);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
          else
            *v3 = 0;
          if ( (*(_BYTE *)(v9 + 27) & 2) != 0 )
            *(_BYTE *)(v9 + 27) &= ~2u;
          goto LABEL_23;
        }
      }
      if ( !v13 )
        goto LABEL_19;
      v19 = *v13;
      RtlRbRemoveNode(v13, *v13);
      RtlRbReplaceNode(v4, v9, v19);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 80), &LockHandle);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
      else
        *v3 = 0;
      *(_OWORD *)(v19 + 48) = *(_OWORD *)(v9 + 48);
      *(_OWORD *)(v19 + 64) = *(_OWORD *)(v9 + 64);
      *(_WORD *)(v19 + 90) = *(_WORD *)(v9 + 90);
      KiAbTryDecrementIoWaiterCount(v9, v19);
      *(_BYTE *)(v19 + 27) |= 1u;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      }
      else
      {
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_23;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_23:
      *(_BYTE *)(v9 + 39) &= ~0x80u;
      *(_BYTE *)(v9 + 27) &= ~1u;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      {
        _m_prefetchw(&v25);
        v14 = v25;
        if ( !v25 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v26, 0LL, (signed __int64)&v25) == &v25 )
            goto LABEL_26;
          goto LABEL_41;
        }
        goto LABEL_42;
      }
      goto LABEL_81;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
    }
    else
    {
      _InterlockedAnd(v3, 0xBFFFFFFF);
      _InterlockedDecrement(v3);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v25, retaddr);
    }
    else
    {
      _m_prefetchw(&v25);
      v21 = v25;
      if ( !v25 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v26, 0LL, (signed __int64)&v25) == &v25 )
          continue;
        v21 = KxWaitForLockChainValid(&v25);
      }
      v25 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
    }
  }
  if ( i )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
    else
      *v3 = 0;
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
  }
  else
  {
    _InterlockedAnd(v3, 0xBFFFFFFF);
    _InterlockedDecrement(v3);
  }
  *(_BYTE *)(a1 + 39) &= ~0x80u;
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    KiAbTryDecrementIoWaiterCount(a1, v9);
  else
    v18 = v9 + 48;
  RtlRbRemoveNode(v18, a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v25);
    v14 = v25;
    if ( !v25 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v26, 0LL, (signed __int64)&v25) == &v25 )
        goto LABEL_26;
LABEL_41:
      v14 = KxWaitForLockChainValid(&v25);
    }
LABEL_42:
    v25 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
    goto LABEL_26;
  }
LABEL_81:
  KiReleaseQueuedSpinLockInstrumented(&v25, retaddr);
LABEL_26:
  v15 = 16 * *(unsigned __int8 *)(a1 + 24);
  v16 = a1 - v15;
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    --*(_BYTE *)(v16 + 793);
  else
    LOBYTE(v15) = _InterlockedExchangeAdd8((volatile signed __int8 *)(v16 + 1419), 0xFFu);
  __writecr8(CurrentIrql);
  return v15;
}
