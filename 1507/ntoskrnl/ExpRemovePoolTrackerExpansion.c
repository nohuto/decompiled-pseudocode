/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x1400456B0
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rax
  _DWORD *v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v8);
  }
  if ( (a3 & 0x20) != 0 )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v10 = *(_DWORD **)(v9 + 7920);
    v11 = *(_QWORD *)(v9 + 7928);
  }
  else
  {
    v11 = PoolTrackTableExpansionSize;
    v10 = PoolTrackTableExpansion;
  }
  if ( v11 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = v10[10 * v12];
      if ( v13 == a1 )
        break;
      if ( v13 )
      {
        v12 = ++v4;
        if ( v4 < v11 )
          continue;
      }
      goto LABEL_18;
    }
    if ( (a3 & 1) != 0 )
    {
      ++v10[10 * v4 + 7];
      *(_QWORD *)&v10[10 * v4 + 8] -= a2;
    }
    else
    {
      ++v10[10 * v4 + 2];
      *(_QWORD *)&v10[10 * v4 + 4] -= a2;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
LABEL_18:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (a3 & 0x20) != 0 )
    {
      v16 = ExpSessionPoolTrackTable;
      v15 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      LODWORD(v14) = KeGetPcr()->Prcb.Number;
      v15 = PoolTrackTableSize;
      v16 = (__int64)*(&ExPoolTagTables + v14);
    }
    v17 = (unsigned int)(v15 - 1);
    v18 = -a2;
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 40 * v17 + 28));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 40 * v17 + 32), v18);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 40 * v17 + 8));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 40 * v17 + 16), v18);
    }
  }
}
