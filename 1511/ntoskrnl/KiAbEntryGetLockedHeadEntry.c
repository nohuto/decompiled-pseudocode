/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400348F0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140031E44 (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1400D9E90 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAbCompareSnappedEntryState @ 0x1400EB1D0 (KiAbCompareSnappedEntryState.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

PRTL_BALANCED_NODE __fastcall KiAbEntryGetLockedHeadEntry(
        PRTL_BALANCED_NODE Node,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3)
{
  struct _KLOCK_QUEUE_HANDLE *v3; // r13
  int v4; // esi
  PRTL_BALANCED_NODE v5; // rbx
  __int128 v6; // xmm0
  unsigned __int64 v7; // rax
  volatile LONG *v8; // r14
  _RTL_RB_TREE *v9; // r12
  int v10; // ebp
  signed __int32 v11; // ett
  _RTL_BALANCED_NODE *Root; // rdi
  _RTL_BALANCED_NODE *v13; // rdx
  BOOLEAN v14; // r8
  PRTL_BALANCED_NODE v15; // rsi
  char *v16; // rdx
  unsigned __int64 v18; // rax
  unsigned int ParentValue; // eax
  char v20; // cl
  _RTL_BALANCED_NODE *v21; // rax
  _RTL_BALANCED_NODE *v22; // rdx
  char v23; // r8
  _RTL_RB_TREE *v24; // rcx
  BOOLEAN v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // al
  char v30; // r9
  _RTL_BALANCED_NODE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  unsigned int v39; // eax
  _RTL_BALANCED_NODE *v40; // rax
  unsigned __int64 v41; // [rsp+20h] [rbp-78h] BYREF
  int v42; // [rsp+28h] [rbp-70h]
  __int128 v43; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v5 = Node;
  if ( (BYTE3(Node[1].Left) & 1) != 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Node[3].Children[1], a3);
    if ( (BYTE3(v5[1].Left) & 1) != 0 )
      return v5;
    KxReleaseQueuedSpinLock(v3, v26, v27, v28);
  }
  v6 = *(_OWORD *)&v5[1].Right;
  v43 = v6;
  if ( (v6 & 0x8000000000000000uLL) == 0 && !v4 )
    return 0LL;
  v41 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  v7 = ((((unsigned __int64)v6 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v42 = DWORD2(v43);
  v8 = (volatile LONG *)((char *)&KiAbTreeArray + v7 + 16);
  v9 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v7);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v8);
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, a2, a3);
    }
    else
    {
      _m_prefetchw((const void *)v8);
      v11 = *v8 & 0x7FFFFFFF;
      if ( v11 != _InterlockedCompareExchange(v8, v11 + 1, v11) )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v8, a2, a3);
      }
    }
    Root = v9->Root;
    if ( v9->Root )
    {
      do
      {
        v18 = (__int64)Root[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
        if ( v18 > v41 )
          goto LABEL_62;
        if ( v18 < v41 )
          goto LABEL_66;
        ParentValue = Root[1].ParentValue;
        if ( ParentValue == DWORD2(v43) )
          break;
        if ( ParentValue < DWORD2(v43) )
LABEL_66:
          Root = Root->Children[1];
        else
LABEL_62:
          Root = Root->Children[0];
      }
      while ( Root );
      v5 = Node;
      v3 = a3;
    }
    if ( !v4 )
    {
      if ( Root )
      {
        v15 = Root;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Root[3].Children[1], v3);
        if ( v10 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v8);
        if ( v5 == Root )
          return v15;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v5[3].Children[1], &LockHandle);
        KxReleaseQueuedSpinLock(&LockHandle, v32, v33, v34);
        if ( (unsigned int)KiAbCompareSnappedEntryState(v5, &v41) )
          return v15;
        KxReleaseQueuedSpinLock(v3, v35, v36, v37);
      }
      else if ( v10 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      }
      return 0LL;
    }
    if ( Root )
    {
      v15 = Root;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Root[3].Children[1], v3);
      if ( v10 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      if ( (__int64)v5[1].Children[1] < 0 )
        return v15;
      if ( (BYTE1(v5[1].Children[0]) & 1) != 0 )
      {
        v20 = ((_BYTE *)&v5[8].Left - (unsigned __int16)(16 * LOBYTE(v5[1].Children[0])))[3];
        if ( v20 > 15 )
          v20 = 15;
        LOBYTE(v5[2].Children[0]) = v20;
        LOBYTE(v21) = 0;
        v22 = (_RTL_BALANCED_NODE *)Root[2].ParentValue;
        v23 = v20;
        v24 = (_RTL_RB_TREE *)&Root[2].16;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( SLOBYTE(v22[2].Children[0]) < v23 )
            {
              v21 = v22->Children[0];
              if ( !v22->Children[0] )
                break;
            }
            else
            {
              v21 = v22->Children[1];
              if ( !v21 )
              {
                LOBYTE(v21) = 1;
                break;
              }
            }
            v22 = v21;
          }
        }
        v25 = (unsigned __int8)v21;
      }
      else
      {
        v29 = KiAbOwnerComputeCpuPriorityKey((__int64)v5);
        v24 = (_RTL_RB_TREE *)&Root[2];
        LOBYTE(v5[2].Children[0]) = v29;
        v22 = Root[2].Children[0];
        v25 = 0;
        v30 = v29;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( SLOBYTE(v22[2].Children[0]) > v30 )
            {
              v31 = v22->Children[0];
              if ( !v22->Children[0] )
              {
                v25 = 0;
                break;
              }
            }
            else
            {
              v31 = v22->Children[1];
              if ( !v31 )
              {
                v25 = 1;
                break;
              }
            }
            v22 = v31;
          }
        }
      }
      RtlRbInsertNodeEx(v24, v22, v25, v5);
      HIBYTE(v5[1].Right) |= 0x80u;
      goto LABEL_21;
    }
    if ( v10 )
      break;
    v10 = 1;
    if ( ExTryConvertSharedSpinLockExclusive(v8) )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v8);
  }
  v13 = v9->Root;
  v14 = 0;
  if ( !v9->Root )
    goto LABEL_15;
  while ( 1 )
  {
    v38 = (__int64)v13[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v38 > v41 )
      break;
    if ( v38 >= v41 )
    {
      v39 = v13[1].ParentValue;
      if ( v39 != DWORD2(v43) && v39 >= DWORD2(v43) )
        break;
    }
    v40 = v13->Children[1];
    if ( !v40 )
    {
      v14 = 1;
      goto LABEL_15;
    }
LABEL_72:
    v13 = v40;
  }
  v40 = v13->Children[0];
  if ( v13->Children[0] )
    goto LABEL_72;
  v14 = 0;
LABEL_15:
  RtlRbInsertNodeEx(v9, v13, v14, v5);
  v3->LockQueue.Next = 0LL;
  v3->LockQueue.Lock = (unsigned __int64 *volatile)&v5[3].Children[1];
  v15 = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&v5[3].Children[1], (__int64)v3) )
  {
    KxWaitForLockOwnerShip(v3);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  HIBYTE(v5[1].Right) |= 0x80u;
  BYTE3(v5[1].Left) |= 1u;
  v5[2].Children[0] = 0LL;
  v5[2].Children[1] = 0LL;
  v5[2].ParentValue = 0LL;
  v5[3].Children[0] = 0LL;
  *((_WORD *)&v5[3].1 + 1) = 0;
LABEL_21:
  v16 = (char *)v5 - (unsigned __int16)(16 * LOBYTE(v5[1].Children[0]));
  if ( (BYTE1(v5[1].Children[0]) & 1) != 0 )
    ++v16[793];
  else
    _InterlockedExchangeAdd8(v16 + 1419, 1u);
  return v15;
}
