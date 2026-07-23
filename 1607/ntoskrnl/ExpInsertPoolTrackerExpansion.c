/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x140012670
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     ExpResizeBigPageTable @ 0x14009CF9C (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x1401230E0 (ExpInsertPoolTracker.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400AC874 (ExpRemovePoolTrackerExpansion.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // bp
  unsigned int v4; // ebx
  unsigned __int64 v5; // r8
  unsigned __int8 CurrentIrql; // al
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v15; // rbp
  char *PoolPages; // rax
  char *v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // r11
  __int64 v21; // rbx
  int v22; // r10d
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // r11
  int v30; // r10d
  __int64 v31; // r8
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+30h] [rbp-78h]
  int v38; // [rsp+38h] [rbp-70h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  int v40; // [rsp+40h] [rbp-68h]
  unsigned __int64 Size; // [rsp+48h] [rbp-60h]
  __int64 v42; // [rsp+50h] [rbp-58h]
  __int64 v43; // [rsp+50h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+70h] [rbp-38h] BYREF
  int v48; // [rsp+C8h] [rbp+20h]
  int v49; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = 0;
  v5 = a2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
    v5 = a2;
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
    v5 = a2;
  }
  v48 = v3 & 0x20;
  if ( (v3 & 0x20) != 0 )
  {
    v8 = ExpSessionPoolTrackTable;
    v9 = ExpSessionPoolTrackTableSize;
    v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v11 = *(_DWORD **)(v10 + 8056);
    v12 = *(_QWORD *)(v10 + 8064);
  }
  else
  {
    v8 = PoolTrackTable;
    v9 = PoolTrackTableSize;
    v12 = PoolTrackTableExpansionSize;
    v11 = PoolTrackTableExpansion;
  }
  v38 = v9;
  v36 = v8;
  if ( v12 )
  {
    v13 = 0LL;
    do
    {
      v14 = v11[10 * v13];
      if ( v14 == a1 )
        break;
      if ( !v14 )
      {
        v11[10 * v4] = a1;
        break;
      }
      v13 = ++v4;
    }
    while ( v4 < v12 );
  }
  if ( v4 != v12 )
  {
    if ( (v3 & 1) != 0 )
    {
      ++v11[10 * v4 + 6];
      *(_QWORD *)&v11[10 * v4 + 8] += v5;
    }
    else
    {
      ++v11[10 * v4 + 1];
      *(_QWORD *)&v11[10 * v4 + 4] += v5;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  if ( *(_DWORD *)(v8 + 40 * v9 - 40) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (v3 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 40LL * (unsigned int)(v38 - 1) + 24));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 40LL * (unsigned int)(v38 - 1) + 32), a2);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 40LL * (unsigned int)(v38 - 1) + 4));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 40LL * (unsigned int)(v38 - 1) + 16), a2);
    }
    return;
  }
  v42 = 40 * v12;
  Size = (40 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v15 = Size + 4096;
  PoolPages = (char *)MiAllocatePoolPages(512LL, Size + 4096);
  v17 = PoolPages;
  if ( !PoolPages )
  {
    v35 = v36 + 40LL * (unsigned int)(v38 - 1);
    *(_DWORD *)v35 = 1818654287;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 24));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 32), a2);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 4));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 16), a2);
    }
    return;
  }
  if ( v11 )
    memmove(PoolPages, v11, Size);
  memset(&v17[v42], 0, v15 - v42);
  if ( v48 )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    *(_QWORD *)(v18 + 8056) = v17;
    *(_QWORD *)(v18 + 8064) = (Size + 4096) / 0x28;
  }
  else
  {
    PoolTrackTableExpansionSize = (Size + 4096) / 0x28;
    PoolTrackTableExpansion = v17;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 512, 1819242320, (_DWORD)v17, v15);
  v19 = PoolTrackTableMask;
  v20 = PoolTrackTableSize;
  v21 = PoolTrackTableMask & 0x40DEDA5;
  v40 = PoolTrackTableMask;
  v39 = PoolTrackTableSize;
  v22 = PoolTrackTableMask & 0x40DEDA5;
  v49 = PoolTrackTableMask & 0x40DEDA5;
  v23 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  v37 = v23;
  while ( 1 )
  {
    v24 = 40 * v21;
    v25 = *(_DWORD *)(40 * v21 + v23);
    v43 = 40 * v21;
    if ( v25 == 1819242320 )
      break;
    if ( v25 )
    {
LABEL_32:
      v21 = v19 & (unsigned int)(v21 + 1);
      if ( (_DWORD)v21 == v22 )
      {
        ExpInsertPoolTrackerExpansion(1819242320LL, v15, 512LL);
        goto LABEL_35;
      }
    }
    else
    {
      v33 = *(_DWORD *)(v24 + PoolTrackTable);
      if ( v33 )
      {
        *(_DWORD *)(v24 + v37) = v33;
        v23 = v37;
      }
      else
      {
        if ( (unsigned int)v21 == v20 - 1 )
        {
          v23 = v37;
          goto LABEL_32;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v45);
        if ( !*(_DWORD *)(v43 + PoolTrackTable) )
        {
          *(_DWORD *)(v43 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v43 + v37) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLock(&v45);
        v19 = v40;
        v22 = v49;
        v20 = v39;
        v23 = v37;
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(v24 + v23 + 4));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + v23 + 16), v15);
LABEL_35:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v11 )
  {
    if ( PoolHitTag == 1819242320 )
      __debugbreak();
    v26 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      v26 = EtwTracePool(3618, 512, 1819242320, (_DWORD)v11, Size);
    LODWORD(v26) = KeGetPcr()->Prcb.Number;
    v27 = PoolTrackTableMask;
    v28 = PoolTrackTableMask & 0x40DEDA5;
    v29 = (__int64)*(&ExPoolTagTables + v26);
    v30 = PoolTrackTableMask & 0x40DEDA5;
    do
    {
      while ( 1 )
      {
        v31 = 40 * v28;
        v32 = *(_DWORD *)(40 * v28 + v29);
        if ( v32 == 1819242320 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v31 + v29 + 8));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + v29 + 16), -(__int64)Size);
          goto LABEL_43;
        }
        if ( v32 )
          break;
        v34 = *(_DWORD *)(v31 + PoolTrackTable);
        if ( !v34 )
          break;
        *(_DWORD *)(v31 + v29) = v34;
      }
      v28 = v27 & (unsigned int)(v28 + 1);
    }
    while ( (_DWORD)v28 != v30 );
    ExpRemovePoolTrackerExpansion(1819242320LL, Size, 512LL);
LABEL_43:
    MiFreePoolPages((ULONG_PTR)v11);
  }
  ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
