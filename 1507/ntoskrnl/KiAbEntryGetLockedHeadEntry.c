/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400F6A90
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14012041C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCompareSnappedEntryState @ 0x14012A82C (KiAbCompareSnappedEntryState.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140264370 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

PRTL_BALANCED_NODE __fastcall KiAbEntryGetLockedHeadEntry(
        PRTL_BALANCED_NODE Node,
        int a2,
        struct _KLOCK_QUEUE_HANDLE *a3,
        __int64 a4)
{
  unsigned int v4; // r14d
  struct _KLOCK_QUEUE_HANDLE *v5; // r15
  int v8; // esi
  unsigned __int64 v9; // rax
  volatile signed __int32 *v10; // rdi
  _RTL_RB_TREE *v11; // r12
  signed __int32 v12; // ett
  _RTL_BALANCED_NODE *Root; // r14
  unsigned int v14; // ebp
  signed __int32 v15; // edx
  _RTL_BALANCED_NODE *v16; // rdx
  BOOLEAN v17; // r8
  PRTL_BALANCED_NODE v18; // rbp
  _QWORD *v19; // rdx
  char *v20; // rdx
  unsigned __int64 v22; // rax
  unsigned int ParentValue; // eax
  __int64 v24; // rdx
  char v25; // cl
  BOOLEAN v26; // r8
  _RTL_BALANCED_NODE *v27; // rdx
  _RTL_BALANCED_NODE *v28; // rax
  _RTL_RB_TREE *v29; // rcx
  char v30; // al
  char v31; // r9
  _RTL_BALANCED_NODE *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  _RTL_BALANCED_NODE *v37; // rax
  signed __int32 v38; // edx
  __int64 Next; // rax
  unsigned __int64 v40; // [rsp+20h] [rbp-68h] BYREF
  int v41; // [rsp+28h] [rbp-60h]
  __int128 v42; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v4 = 0;
  v5 = a3;
  if ( (BYTE3(Node[1].Left) & 1) == 0 )
    goto LABEL_2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Node[3].Children[1], a3);
  if ( (BYTE3(Node[1].Left) & 1) != 0 )
    return Node;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v5, retaddr);
  }
  else
  {
    _m_prefetchw(v5);
    Next = (__int64)v5->LockQueue.Next;
    if ( !v5->LockQueue.Next )
    {
      if ( v5 == (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v5->LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)v5) )
        goto LABEL_2;
      Next = KxWaitForLockChainValid((__int64 *)v5);
    }
    v5->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_2:
  v42 = *(_OWORD *)&Node[1].Right;
  if ( (__int64)v42 >= 0 && !a2 )
    return 0LL;
  v8 = 0;
  v40 = v42 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = ((((unsigned __int64)v42 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v41 = DWORD2(v42);
  v10 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v9 + 16);
  v11 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v9);
  while ( 1 )
  {
    if ( v8 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10);
      }
      else
      {
        if ( _interlockedbittestandset(v10, 0x1Fu) )
          v4 = ExpWaitForSpinLockExclusiveAndAcquire(v10);
        while ( 1 )
        {
          v38 = *v10;
          if ( (*v10 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v38 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v10, v38 | 0x40000000, v38);
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
        }
      }
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10);
    }
    else
    {
      _m_prefetchw((const void *)v10);
      v12 = *v10 & 0x7FFFFFFF;
      if ( v12 != _InterlockedCompareExchange(v10, v12 + 1, v12) )
        ExpWaitForSpinLockSharedAndAcquire(v10);
    }
    Root = v11->Root;
    if ( v11->Root )
    {
      do
      {
        v22 = (__int64)Root[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
        if ( v22 > v40 )
          goto LABEL_93;
        if ( v22 < v40 )
          goto LABEL_96;
        ParentValue = Root[1].ParentValue;
        if ( ParentValue == DWORD2(v42) )
          break;
        if ( ParentValue < DWORD2(v42) )
LABEL_96:
          Root = Root->Children[1];
        else
LABEL_93:
          Root = Root->Children[0];
      }
      while ( Root );
      v5 = a3;
    }
    if ( !a2 )
    {
      if ( !Root )
      {
        if ( v8 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
          else
            *v10 = 0;
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
        }
        else
        {
          _InterlockedAnd(v10, 0xBFFFFFFF);
          _InterlockedDecrement(v10);
        }
        return 0LL;
      }
      v18 = Root;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Root[3].Children[1], v5);
      if ( v8 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
        else
          *v10 = 0;
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
      }
      else
      {
        _InterlockedAnd(v10, 0xBFFFFFFF);
        _InterlockedDecrement(v10);
      }
      if ( Node == Root )
        return v18;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Node[3].Children[1], &LockHandle);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      }
      else
      {
        _m_prefetchw(&LockHandle);
        v33 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_61;
          v33 = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v33 + 8), 1uLL);
      }
LABEL_61:
      if ( (unsigned int)KiAbCompareSnappedEntryState(Node, &v40) )
        return v18;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(v5, retaddr);
        return 0LL;
      }
      _m_prefetchw(v5);
      v34 = (__int64)v5->LockQueue.Next;
      if ( !v5->LockQueue.Next )
      {
        if ( v5 == (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v5->LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)v5) )
          return 0LL;
        v34 = KxWaitForLockChainValid((__int64 *)v5);
      }
      v5->LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v34 + 8), 1uLL);
      return 0LL;
    }
    if ( Root )
    {
      v18 = Root;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Root[3].Children[1], v5);
      if ( v8 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
        else
          *v10 = 0;
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
      }
      else
      {
        _InterlockedAnd(v10, 0xBFFFFFFF);
        _InterlockedDecrement(v10);
      }
      if ( (__int64)Node[1].Children[1] < 0 )
        return v18;
      if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
      {
        v25 = ((_BYTE *)&Node[8].Left - (unsigned __int16)(16 * LOBYTE(Node[1].Children[0])))[3];
        if ( v25 > 15 )
          v25 = 15;
        LOBYTE(Node[2].Children[0]) = v25;
        v26 = 0;
        v27 = (_RTL_BALANCED_NODE *)Root[2].ParentValue;
        if ( v27 )
        {
          while ( 1 )
          {
            if ( SLOBYTE(v27[2].Children[0]) < v25 )
            {
              v28 = v27->Children[0];
              if ( !v27->Children[0] )
              {
                v26 = 0;
                break;
              }
            }
            else
            {
              v28 = v27->Children[1];
              if ( !v28 )
              {
                v26 = 1;
                break;
              }
            }
            v27 = v28;
          }
        }
        v29 = (_RTL_RB_TREE *)&Root[2].16;
      }
      else
      {
        v30 = KiAbOwnerComputeCpuPriorityKey(Node, v24);
        v29 = (_RTL_RB_TREE *)&Root[2];
        LOBYTE(Node[2].Children[0]) = v30;
        v27 = Root[2].Children[0];
        v26 = 0;
        v31 = v30;
        if ( v27 )
        {
          while ( 1 )
          {
            if ( SLOBYTE(v27[2].Children[0]) > v31 )
            {
              v32 = v27->Children[0];
              if ( !v27->Children[0] )
              {
                v26 = 0;
                break;
              }
            }
            else
            {
              v32 = v27->Children[1];
              if ( !v32 )
              {
                v26 = 1;
                break;
              }
            }
            v27 = v32;
          }
        }
      }
      RtlRbInsertNodeEx(v29, v27, v26, Node);
      HIBYTE(Node[1].Right) |= 0x80u;
      goto LABEL_23;
    }
    if ( v8 )
      goto LABEL_16;
    v8 = 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
      break;
    if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v10, retaddr, a3, a4) )
      goto LABEL_16;
LABEL_88:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
    }
    else
    {
      _InterlockedAnd(v10, 0xBFFFFFFF);
      _InterlockedDecrement(v10);
    }
    v4 = 0;
  }
  if ( _interlockedbittestandset(v10, 0x1Fu) )
    goto LABEL_88;
  v14 = 0;
  while ( 1 )
  {
    v15 = *v10;
    if ( (*v10 & 0xBFFFFFFF) == 0x80000001 )
      break;
    if ( (v15 & 0x40000000) == 0 )
      _InterlockedCompareExchange(v10, v15 | 0x40000000, v15);
    if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v14);
  }
LABEL_16:
  v16 = v11->Root;
  v17 = 0;
  if ( !v11->Root )
    goto LABEL_17;
  while ( 2 )
  {
    v35 = (__int64)v16[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v35 <= v40 )
    {
      if ( v35 < v40 || (v36 = v16[1].ParentValue, v36 == DWORD2(v42)) || v36 < DWORD2(v42) )
      {
        v37 = v16->Children[1];
        if ( !v37 )
        {
          v17 = 1;
          goto LABEL_17;
        }
        goto LABEL_99;
      }
    }
    v37 = v16->Children[0];
    if ( v16->Children[0] )
    {
LABEL_99:
      v16 = v37;
      continue;
    }
    break;
  }
  v17 = 0;
LABEL_17:
  RtlRbInsertNodeEx(v11, v16, v17, Node);
  v5->LockQueue.Next = 0LL;
  v5->LockQueue.Lock = (unsigned __int64 *volatile)&Node[3].Children[1];
  v18 = Node;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, &Node[3].Right);
  }
  else
  {
    v19 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&Node[3].Children[1], (__int64)v5);
    if ( v19 )
      KxWaitForLockOwnerShip((__int64)v5, v19);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
  else
    *v10 = 0;
  HIBYTE(Node[1].Right) |= 0x80u;
  BYTE3(Node[1].Left) |= 1u;
  Node[2].Children[0] = 0LL;
  Node[2].Children[1] = 0LL;
  Node[2].ParentValue = 0LL;
  Node[3].Children[0] = 0LL;
  *((_WORD *)&Node[3].1 + 1) = 0;
LABEL_23:
  v20 = (char *)Node - (unsigned __int16)(16 * LOBYTE(Node[1].Children[0]));
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    ++v20[793];
  else
    _InterlockedExchangeAdd8(v20 + 1419, 1u);
  return v18;
}
