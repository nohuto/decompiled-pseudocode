/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14006C02C (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140099D60 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAbCompareSnappedEntryState @ 0x1400AB2DC (KiAbCompareSnappedEntryState.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

PRTL_BALANCED_NODE __fastcall KiAbEntryGetLockedHeadEntry(
        PRTL_BALANCED_NODE Node,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v3; // r15
  int v4; // r12d
  PRTL_BALANCED_NODE v5; // rbx
  __int128 v6; // xmm0
  unsigned __int64 v7; // rax
  volatile LONG *v8; // rsi
  _RTL_RB_TREE *v9; // r13
  int v10; // ebp
  signed __int32 v11; // ett
  _RTL_BALANCED_NODE *Root; // r14
  _RTL_BALANCED_NODE *v13; // rdx
  BOOLEAN v14; // r8
  PRTL_BALANCED_NODE v15; // r12
  _QWORD *v16; // rdx
  char *v17; // rdx
  unsigned __int64 v19; // rax
  unsigned int ParentValue; // eax
  char v21; // cl
  BOOLEAN v22; // r8
  _RTL_BALANCED_NODE *v23; // rdx
  char v24; // r9
  _RTL_RB_TREE *v25; // rcx
  _RTL_BALANCED_NODE *v26; // rax
  char v27; // al
  char v28; // r9
  _RTL_BALANCED_NODE *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  _RTL_BALANCED_NODE *v32; // rax
  unsigned __int64 v33; // [rsp+20h] [rbp-78h] BYREF
  int v34; // [rsp+28h] [rbp-70h]
  __int128 v35; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v3 = (__int64)a3;
  v4 = a2;
  v5 = Node;
  if ( (BYTE3(Node[1].Left) & 1) != 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Node[3].Children[1], a3);
    if ( (BYTE3(v5[1].Left) & 1) != 0 )
      return v5;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)v3);
  }
  v6 = *(_OWORD *)&v5[1].Right;
  v35 = v6;
  if ( (v6 & 0x8000000000000000uLL) == 0 && !v4 )
    return 0LL;
  v33 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  v7 = ((((unsigned __int64)v6 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v34 = DWORD2(v35);
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
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, a2);
    }
    else
    {
      _m_prefetchw((const void *)v8);
      v11 = *v8 & 0x7FFFFFFF;
      if ( v11 != _InterlockedCompareExchange(v8, v11 + 1, v11) )
        ExpWaitForSpinLockSharedAndAcquire(v8, 0xFFu);
    }
    Root = v9->Root;
    if ( v9->Root )
    {
      do
      {
        v19 = (__int64)Root[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
        if ( v19 < v33 )
          goto LABEL_63;
        if ( v19 > v33 )
          goto LABEL_66;
        ParentValue = Root[1].ParentValue;
        if ( ParentValue == DWORD2(v35) )
          break;
        if ( ParentValue < DWORD2(v35) )
LABEL_63:
          Root = Root->Children[1];
        else
LABEL_66:
          Root = Root->Children[0];
      }
      while ( Root );
      v5 = Node;
      v3 = (__int64)a3;
    }
    if ( !v4 )
    {
      if ( Root )
      {
        v15 = Root;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Root[3].Children[1], (PKLOCK_QUEUE_HANDLE)v3);
        if ( v10 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v8);
        if ( v5 == Root )
          return v15;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v5[3].Children[1], &LockHandle);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        if ( KiAbCompareSnappedEntryState((__m128i *)v5, (__int64)&v33) )
          return v15;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)v3);
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
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Root[3].Children[1], (PKLOCK_QUEUE_HANDLE)v3);
      if ( v10 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      if ( (__int64)v5[1].Children[1] < 0 )
        return v15;
      if ( (BYTE1(v5[1].Children[0]) & 1) != 0 )
      {
        v21 = ((_BYTE *)&v5[8].Left - (unsigned __int16)(16 * LOBYTE(v5[1].Children[0])))[3];
        if ( v21 > 15 )
          v21 = 15;
        LOBYTE(v5[2].Children[0]) = v21;
        v22 = 0;
        v23 = (_RTL_BALANCED_NODE *)Root[2].ParentValue;
        v24 = v21;
        v25 = (_RTL_RB_TREE *)&Root[2].16;
        if ( !v23 )
          goto LABEL_43;
        while ( 1 )
        {
          if ( SLOBYTE(v23[2].Children[0]) < v24 )
          {
            v26 = v23->Children[0];
            if ( !v23->Children[0] )
            {
              v22 = 0;
              goto LABEL_43;
            }
          }
          else
          {
            v26 = v23->Children[1];
            if ( !v26 )
              goto LABEL_42;
          }
          v23 = v26;
        }
      }
      v27 = KiAbOwnerComputeCpuPriorityKey((__int64)v5);
      v25 = (_RTL_RB_TREE *)&Root[2];
      LOBYTE(v5[2].Children[0]) = v27;
      v23 = Root[2].Children[0];
      v22 = 0;
      v28 = v27;
      if ( v23 )
      {
        while ( 1 )
        {
          if ( SLOBYTE(v23[2].Children[0]) > v28 )
          {
            v29 = v23->Children[0];
            if ( !v23->Children[0] )
            {
              v22 = 0;
              break;
            }
          }
          else
          {
            v29 = v23->Children[1];
            if ( !v29 )
            {
LABEL_42:
              v22 = 1;
              break;
            }
          }
          v23 = v29;
        }
      }
LABEL_43:
      RtlRbInsertNodeEx(v25, v23, v22, v5);
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
    v30 = (__int64)v13[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
    if ( v30 >= v33 )
    {
      if ( v30 > v33 )
        break;
      v31 = v13[1].ParentValue;
      if ( v31 != DWORD2(v35) && v31 >= DWORD2(v35) )
        break;
    }
    v32 = v13->Children[1];
    if ( !v32 )
    {
      v14 = 1;
      goto LABEL_15;
    }
LABEL_70:
    v13 = v32;
  }
  v32 = v13->Children[0];
  if ( v13->Children[0] )
    goto LABEL_70;
  v14 = 0;
LABEL_15:
  RtlRbInsertNodeEx(v9, v13, v14, v5);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = (char *)v5 + 80;
  v15 = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3, &v5[3].Right);
  }
  else
  {
    v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&v5[3].Children[1], v3);
    if ( v16 )
      KxWaitForLockOwnerShip(v3, v16);
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
  *((_WORD *)&v5[3].1 + 1) &= 1u;
LABEL_21:
  v17 = (char *)v5 - (unsigned __int16)(16 * LOBYTE(v5[1].Children[0]));
  if ( (BYTE1(v5[1].Children[0]) & 1) != 0 )
    ++v17[793];
  else
    _InterlockedExchangeAdd8(v17 + 1423, 1u);
  return v15;
}
