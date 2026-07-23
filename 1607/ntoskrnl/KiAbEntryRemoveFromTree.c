/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140030BB0
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140013520 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbEntryFree @ 0x14002BFB0 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreWait @ 0x1400C62F0 (KeAbPreWait.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x140031360 (KiAbTryDecrementIoWaiterCounts.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     RtlRbReplaceNode @ 0x1400A5B3C (RtlRbReplaceNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node, __int64 a2)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // r14
  _RTL_RB_TREE *v5; // r15
  unsigned __int8 CurrentIrql; // r12
  BOOL i; // edi
  _RTL_BALANCED_NODE *Root; // rbx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  _QWORD *v11; // rdx
  _RTL_RB_TREE *v12; // rcx
  unsigned __int16 v13; // ax
  char *v14; // rdx
  PRTL_RB_TREE v15; // r10
  _RTL_BALANCED_NODE *v16; // rdi
  __int16 v17; // cx
  unsigned __int64 v19; // [rsp+20h] [rbp-68h]
  unsigned int ParentValue; // [rsp+28h] [rbp-60h]
  _QWORD v21[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  ParentValue = Node[1].ParentValue;
  v19 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v3 = ((v19 >> 4) & 0x3FF) << 6;
  v4 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v3 + 16);
  v5 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = (BYTE3(Node[1].Left) & 1) != 0; ; i = 1 )
  {
    if ( i )
    {
      LOBYTE(a2) = -1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, a2);
      else
        ExpAcquireSpinLockExclusive(v4, a2);
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel(v4);
    }
    Root = v5->Root;
    while ( Root )
    {
      v9 = (__int64)Root[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v9 < v19 )
        goto LABEL_34;
      if ( v9 > v19 )
        goto LABEL_38;
      v10 = Root[1].ParentValue;
      if ( v10 == ParentValue )
        break;
      if ( v10 < ParentValue )
LABEL_34:
        Root = Root->Children[1];
      else
LABEL_38:
        Root = Root->Children[0];
    }
    v21[1] = (char *)Root + 80;
    v21[0] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v21, &Root[3].Right);
    }
    else
    {
      v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&Root[3].Children[1], (__int64)v21);
      if ( v11 )
        KxWaitForLockOwnerShip((__int64)v21, v11);
    }
    if ( Root != Node )
      break;
    if ( i )
    {
      if ( Root[2].ParentValue )
      {
        v12 = (_RTL_RB_TREE *)&Root[2].16;
      }
      else
      {
        v12 = (_RTL_RB_TREE *)&Root[2];
        if ( !Root[2].Children[0] )
          goto LABEL_16;
      }
      if ( v12 )
      {
        v16 = v12->Root;
        RtlRbRemoveNode(v12, v12->Root);
        RtlRbReplaceNode(v5, Root, v16);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v16[3].Children[1], &LockHandle);
        ExReleaseSpinLockExclusiveFromDpcLevel(v4);
        v17 = *((_WORD *)&v16[3].1 + 1);
        v16[2].0 = Root[2].0;
        *(_OWORD *)&v16[2].0 = *(_OWORD *)&Root[2].0;
        *((_WORD *)&v16[3].1 + 1) ^= (*((_WORD *)&Root[3].1 + 1) ^ v17) & 0x1FE;
        *((_WORD *)&v16[3].1 + 1) = *((_WORD *)&Root[3].1 + 1) ^ (*((_WORD *)&Root[3].1 + 1) ^ *((_WORD *)&v16[3].1 + 1)) & 0x1FF;
        KiAbTryDecrementIoWaiterCounts(Root, v16);
        BYTE3(v16[1].Left) |= 1u;
        KxReleaseQueuedSpinLock(&LockHandle);
      }
      else
      {
LABEL_16:
        RtlRbRemoveNode(v5, Root);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
        else
          *v4 = 0;
        KiAbTryDecrementIoWaiterCounts(Root, Root);
      }
      HIBYTE(Root[1].Right) &= ~0x80u;
      BYTE3(Root[1].Left) &= ~1u;
      goto LABEL_20;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v4);
    KxReleaseQueuedSpinLock(v21);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v4);
  HIBYTE(Node[1].Right) &= ~0x80u;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
  {
    KiAbTryDecrementIoWaiterCounts(Node, Root);
    RtlRbRemoveNode(v15, Node);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)&Root[2], Node);
  }
LABEL_20:
  KxReleaseQueuedSpinLock(v21);
  v13 = 16 * LOBYTE(Node[1].Children[0]);
  v14 = (char *)Node - v13;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v14[793];
  else
    LOBYTE(v13) = _InterlockedExchangeAdd8(v14 + 1423, 0xFFu);
  __writecr8(CurrentIrql);
  return v13;
}
