/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140031030
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1400139A0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbEntryFree @ 0x14002C430 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreWait @ 0x1400C8450 (KeAbPreWait.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002EC30 (ExpAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x1400317E0 (KiAbTryDecrementIoWaiterCounts.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     RtlRbReplaceNode @ 0x1400A75C4 (RtlRbReplaceNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DD30 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DE9C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall KiAbEntryRemoveFromTree(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // r14
  __int64 **v5; // r15
  unsigned __int8 CurrentIrql; // r12
  BOOL i; // edi
  __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // rdi
  __int16 v17; // cx
  unsigned __int64 v19; // [rsp+20h] [rbp-68h]
  unsigned int v20; // [rsp+28h] [rbp-60h]
  _QWORD v21[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v20 = *(_DWORD *)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL;
  v3 = ((v19 >> 4) & 0x3FF) << 6;
  v4 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v3 + 16);
  v5 = (__int64 **)((char *)&KiAbTreeArray + v3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = (*(_BYTE *)(a1 + 27) & 1) != 0; ; i = 1 )
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
    v8 = *v5;
    while ( v8 )
    {
      v9 = v8[4] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v9 < v19 )
        goto LABEL_34;
      if ( v9 > v19 )
        goto LABEL_38;
      v10 = *((_DWORD *)v8 + 10);
      if ( v10 == v20 )
        break;
      if ( v10 < v20 )
LABEL_34:
        v8 = (__int64 *)v8[1];
      else
LABEL_38:
        v8 = (__int64 *)*v8;
    }
    v21[1] = v8 + 10;
    v21[0] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v21, v8 + 10);
    }
    else
    {
      v11 = (_QWORD *)_InterlockedExchange64(v8 + 10, (__int64)v21);
      if ( v11 )
        KxWaitForLockOwnerShip((__int64)v21, v11);
    }
    if ( v8 != (__int64 *)a1 )
      break;
    if ( i )
    {
      if ( v8[8] )
      {
        v12 = v8 + 8;
      }
      else
      {
        v12 = v8 + 6;
        if ( !v8[6] )
          goto LABEL_16;
      }
      if ( v12 )
      {
        v16 = *v12;
        RtlRbRemoveNode(v12, *v12);
        RtlRbReplaceNode(v5, v8, v16);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 80), &LockHandle);
        ExReleaseSpinLockExclusiveFromDpcLevel(v4);
        v17 = *(_WORD *)(v16 + 90);
        *(_OWORD *)(v16 + 48) = *((_OWORD *)v8 + 3);
        *(_OWORD *)(v16 + 64) = *((_OWORD *)v8 + 4);
        *(_WORD *)(v16 + 90) ^= (*((_WORD *)v8 + 45) ^ v17) & 0x1FE;
        *(_WORD *)(v16 + 90) = *((_WORD *)v8 + 45) ^ (*((_WORD *)v8 + 45) ^ *(_WORD *)(v16 + 90)) & 0x1FF;
        KiAbTryDecrementIoWaiterCounts(v8, v16);
        *(_BYTE *)(v16 + 27) |= 1u;
        KxReleaseQueuedSpinLock(&LockHandle);
      }
      else
      {
LABEL_16:
        RtlRbRemoveNode(v5, v8);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
        else
          *v4 = 0;
        KiAbTryDecrementIoWaiterCounts(v8, v8);
      }
      *((_BYTE *)v8 + 39) &= ~0x80u;
      *((_BYTE *)v8 + 27) &= ~1u;
      goto LABEL_20;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v4);
    KxReleaseQueuedSpinLock(v21);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v4);
  *(_BYTE *)(a1 + 39) &= ~0x80u;
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    KiAbTryDecrementIoWaiterCounts(a1, v8);
    RtlRbRemoveNode(v15, a1);
  }
  else
  {
    RtlRbRemoveNode(v8 + 6, a1);
  }
LABEL_20:
  KxReleaseQueuedSpinLock(v21);
  v13 = 16 * *(unsigned __int8 *)(a1 + 24);
  v14 = a1 - v13;
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    --*(_BYTE *)(v14 + 793);
  else
    LOBYTE(v13) = _InterlockedExchangeAdd8((volatile signed __int8 *)(v14 + 1423), 0xFFu);
  __writecr8(CurrentIrql);
  return v13;
}
