/*
 * XREFs of ExpInsertPoolTracker @ 0x1401230E0
 * Callers:
 *     ExDrainPoolLookasideList @ 0x140532278 (ExDrainPoolLookasideList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 */

void __fastcall ExpInsertPoolTracker(unsigned int a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned int v11; // r14d
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF

  v6 = a1;
  if ( a1 == PoolHitTag )
    __debugbreak();
  v7 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v7 = EtwTracePool(3616, a3, a1, a4, a2);
  if ( (a3 & 0x20) != 0 )
  {
    v10 = ExpSessionPoolTrackTable;
    v8 = ExpSessionPoolTrackTableMask;
    v9 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    v8 = PoolTrackTableMask;
    v9 = PoolTrackTableSize;
    v10 = (__int64)*(&ExPoolTagTables + v7);
  }
  v15 = v9;
  v11 = v8 & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
  v12 = v11;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v10 + 40LL * v11);
    if ( v13 == (_DWORD)v6 )
      break;
    if ( v13 )
    {
LABEL_10:
      v11 = v8 & (v11 + 1);
      if ( v11 == v12 )
      {
        ExpInsertPoolTrackerExpansion(v6, a2, a3);
        return;
      }
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        v14 = *(_DWORD *)(PoolTrackTable + 40LL * v11);
        if ( v14 )
        {
          *(_DWORD *)(v10 + 40LL * v11) = v14;
          goto LABEL_22;
        }
        v12 = v8 & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
      }
      if ( v11 == v9 - 1 )
        goto LABEL_10;
      if ( (a3 & 0x20) != 0 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 40LL * v11), v6, 0);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 40LL * v11) )
        {
          *(_DWORD *)(PoolTrackTable + 40LL * v11) = v6;
          *(_DWORD *)(v10 + 40LL * v11) = v6;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v9 = v15;
LABEL_22:
        v12 = v8 & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
      }
    }
  }
  if ( (a3 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 40LL * v11 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40LL * v11 + 32), a2);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 40LL * v11 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40LL * v11 + 16), a2);
  }
}
