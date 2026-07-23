/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140033590
 * Callers:
 *     KeAbPreWait @ 0x140020C90 (KeAbPreWait.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbEntryFree @ 0x140033200 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140042F70 (ExReleaseCacheAwarePushLockSharedEx.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     KiAbTryDecrementIoWaiterCount @ 0x1400355FC (KiAbTryDecrementIoWaiterCount.c)
 *     RtlRbReplaceNode @ 0x140035A7C (RtlRbReplaceNode.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // r14
  _RTL_RB_TREE *v6; // r15
  unsigned __int8 CurrentIrql; // r12
  BOOL i; // edi
  signed __int32 v9; // edx
  _RTL_BALANCED_NODE *Root; // rbx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  _RTL_RB_TREE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // ax
  char *v18; // rdx
  _RTL_BALANCED_NODE *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PRTL_RB_TREE v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  signed __int32 v29; // eax
  unsigned __int64 v31; // [rsp+20h] [rbp-68h]
  unsigned int ParentValue; // [rsp+28h] [rbp-60h]
  _QWORD v33[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v36; // [rsp+90h] [rbp+8h] BYREF

  ParentValue = Node[1].ParentValue;
  v31 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v4 = ((v31 >> 4) & 0x3FF) << 6;
  v5 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v4 + 16);
  v6 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = (BYTE3(Node[1].Left) & 1) != 0; ; i = 1 )
  {
    if ( i )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5, a2);
      }
      else
      {
        v36 = 0;
        if ( _interlockedbittestandset(v5, 0x1Fu) )
        {
          LOBYTE(a2) = -1;
          v36 = ExpWaitForSpinLockExclusiveAndAcquire(v5, a2, a3);
        }
        v9 = *v5;
        while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v9 & 0x40000000) == 0 )
          {
            v29 = _InterlockedCompareExchange(v5, v9 | 0x40000000, v9);
            v28 = v9 == v29;
            v9 = v29;
            if ( !v28 )
              continue;
          }
          KeYieldProcessorEx(&v36);
          v9 = *v5;
        }
      }
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    }
    Root = v6->Root;
    while ( Root )
    {
      v11 = (__int64)Root[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v11 > v31 )
        goto LABEL_37;
      if ( v11 < v31 )
        goto LABEL_46;
      v12 = Root[1].ParentValue;
      if ( v12 == ParentValue )
        break;
      if ( v12 < ParentValue )
LABEL_46:
        Root = Root->Children[1];
      else
LABEL_37:
        Root = Root->Children[0];
    }
    v33[1] = (char *)Root + 80;
    v33[0] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v33);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)&Root[3].Children[1], (__int64)v33) )
    {
      KxWaitForLockOwnerShip(v33);
    }
    if ( Root != Node )
      break;
    if ( i )
    {
      if ( Root[2].ParentValue )
      {
        v13 = (_RTL_RB_TREE *)&Root[2].16;
      }
      else
      {
        v13 = (_RTL_RB_TREE *)&Root[2];
        if ( !Root[2].Children[0] )
        {
LABEL_18:
          RtlRbRemoveNode(v6, Root);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
          else
            *v5 = 0;
          if ( (BYTE3(Root[1].Left) & 2) != 0 )
            BYTE3(Root[1].Left) &= ~2u;
          goto LABEL_22;
        }
      }
      if ( !v13 )
        goto LABEL_18;
      v19 = v13->Root;
      RtlRbRemoveNode(v13, v13->Root);
      RtlRbReplaceNode(v6, Root, v19);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v19[3].Children[1], &LockHandle);
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      v19[2].0 = Root[2].0;
      *(_OWORD *)&v19[2].0 = *(_OWORD *)&Root[2].0;
      *((_WORD *)&v19[3].1 + 1) = *((_WORD *)&Root[3].1 + 1);
      KiAbTryDecrementIoWaiterCount(Root, v19, v20);
      BYTE3(v19[1].Left) |= 1u;
      KxReleaseQueuedSpinLock(&LockHandle, v21, v22, v23);
LABEL_22:
      HIBYTE(Root[1].Right) &= ~0x80u;
      BYTE3(Root[1].Left) &= ~1u;
      goto LABEL_23;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v5);
    KxReleaseQueuedSpinLock(v33, v25, v26, v27);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v5);
  HIBYTE(Node[1].Right) &= ~0x80u;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
  {
    KiAbTryDecrementIoWaiterCount(Node, Root, &Root[2].16);
    RtlRbRemoveNode(v24, Node);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)&Root[2], Node);
  }
LABEL_23:
  KxReleaseQueuedSpinLock(v33, v14, v15, v16);
  v17 = 16 * LOBYTE(Node[1].Children[0]);
  v18 = (char *)Node - v17;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v18[793];
  else
    LOBYTE(v17) = _InterlockedExchangeAdd8(v18 + 1419, 0xFFu);
  __writecr8(CurrentIrql);
  return v17;
}
