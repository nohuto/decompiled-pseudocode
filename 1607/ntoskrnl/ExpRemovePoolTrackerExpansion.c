/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x1400AC874
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rax
  _DWORD *v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  if ( (a3 & 0x20) != 0 )
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v7 = *(_DWORD **)(v6 + 8056);
    v8 = *(_QWORD *)(v6 + 8064);
  }
  else
  {
    v8 = PoolTrackTableExpansionSize;
    v7 = PoolTrackTableExpansion;
  }
  v9 = 0LL;
  if ( v8 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = v7[10 * v10];
      if ( v11 == a1 )
        break;
      if ( v11 )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 = (unsigned int)v9;
        if ( (unsigned int)v9 < v8 )
          continue;
      }
      goto LABEL_14;
    }
    v12 = 5 * v9;
    if ( (a3 & 1) != 0 )
    {
      ++v7[2 * v12 + 7];
      *(_QWORD *)&v7[2 * v12 + 8] -= a2;
    }
    else
    {
      ++v7[2 * v12 + 2];
      *(_QWORD *)&v7[2 * v12 + 4] -= a2;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
LABEL_14:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (a3 & 0x20) != 0 )
    {
      v15 = ExpSessionPoolTrackTable;
      v14 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      LODWORD(v13) = KeGetPcr()->Prcb.Number;
      v14 = PoolTrackTableSize;
      v15 = (__int64)*(&ExPoolTagTables + v13);
    }
    v16 = (unsigned int)(v14 - 1);
    v17 = -a2;
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 40 * v16 + 28));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 40 * v16 + 32), v17);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 40 * v16 + 8));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 40 * v16 + 16), v17);
    }
  }
}
