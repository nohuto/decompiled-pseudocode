/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x1400C6E40
 * Callers:
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140104978 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x140113E6C (ExpInsertPoolTracker.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x140749B74 (InitializePagedPool.c)
 * Callees:
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400C7DC0 (ExpRemovePoolTrackerExpansion.c)
 *     EtwTracePool @ 0x140150068 (EtwTracePool.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // bp
  unsigned int v4; // ebx
  __int64 v5; // r8
  unsigned __int8 CurrentIrql; // al
  _QWORD *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rbp
  char *PoolPages; // rax
  char *v18; // rbx
  unsigned __int64 v19; // rax
  int v20; // r9d
  __int64 v21; // r11
  __int64 v22; // rbx
  int v23; // r10d
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // r11
  int v31; // r10d
  __int64 v32; // r8
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  __int64 v36; // rbx
  __int64 v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+30h] [rbp-68h]
  int v39; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+38h] [rbp-60h]
  int v41; // [rsp+40h] [rbp-58h]
  __int64 v42; // [rsp+48h] [rbp-50h]
  __int64 v43; // [rsp+48h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+68h] [rbp-30h] BYREF
  int v48; // [rsp+B8h] [rbp+20h]
  int v49; // [rsp+B8h] [rbp+20h]

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
    KiAcquireQueuedSpinLockInstrumented(&LockHandle);
    v5 = a2;
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v8 )
    {
      KxWaitForLockOwnerShip((__int64)&LockHandle, v8, v5);
      v5 = a2;
    }
  }
  v48 = v3 & 0x20;
  if ( (v3 & 0x20) != 0 )
  {
    v9 = ExpSessionPoolTrackTable;
    v10 = ExpSessionPoolTrackTableSize;
    v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v12 = *(_DWORD **)(v11 + 7920);
    v13 = *(_QWORD *)(v11 + 7928);
  }
  else
  {
    v9 = PoolTrackTable;
    v10 = PoolTrackTableSize;
    v13 = PoolTrackTableExpansionSize;
    v12 = PoolTrackTableExpansion;
  }
  v39 = v10;
  v37 = v9;
  if ( v13 )
  {
    v14 = 0LL;
    do
    {
      v15 = v12[10 * v14];
      if ( v15 == a1 )
        break;
      if ( !v15 )
      {
        v12[10 * v4] = a1;
        break;
      }
      v14 = ++v4;
    }
    while ( v4 < v13 );
  }
  if ( v4 != v13 )
  {
    if ( (v3 & 1) != 0 )
    {
      ++v12[10 * v4 + 6];
      *(_QWORD *)&v12[10 * v4 + 8] += v5;
    }
    else
    {
      ++v12[10 * v4 + 1];
      *(_QWORD *)&v12[10 * v4 + 4] += v5;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return;
  }
  if ( *(_DWORD *)(v9 + 40 * v10 - 40) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (v3 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 40LL * (unsigned int)(v39 - 1) + 24));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 40LL * (unsigned int)(v39 - 1) + 32), a2);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 40LL * (unsigned int)(v39 - 1) + 4));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 40LL * (unsigned int)(v39 - 1) + 16), a2);
    }
    return;
  }
  v42 = 40 * v13;
  v16 = (40 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  PoolPages = (char *)MiAllocatePoolPages(0x200u, v16 + 4096);
  v18 = PoolPages;
  if ( !PoolPages )
  {
    v36 = v37 + 40LL * (unsigned int)(v39 - 1);
    *(_DWORD *)v36 = 1818654287;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 24));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 32), a2);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 4));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 16), a2);
    }
    return;
  }
  if ( v12 )
    memmove(PoolPages, v12, v16);
  memset(&v18[v42], 0, 0x1000uLL);
  if ( v48 )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    *(_QWORD *)(v19 + 7920) = v18;
    *(_QWORD *)(v19 + 7928) = (v16 + 4096) / 0x28;
  }
  else
  {
    PoolTrackTableExpansionSize = (v16 + 4096) / 0x28;
    PoolTrackTableExpansion = v18;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 512, 1819242320, (_DWORD)v18, v16 + 4096);
  v20 = PoolTrackTableMask;
  v21 = PoolTrackTableSize;
  v22 = PoolTrackTableMask & 0x40DEDA5;
  v41 = PoolTrackTableMask;
  v40 = PoolTrackTableSize;
  v23 = PoolTrackTableMask & 0x40DEDA5;
  v49 = PoolTrackTableMask & 0x40DEDA5;
  v24 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  v38 = v24;
  while ( 1 )
  {
    v25 = 40 * v22;
    v26 = *(_DWORD *)(40 * v22 + v24);
    v43 = 40 * v22;
    if ( v26 == 1819242320 )
      break;
    if ( v26 )
    {
LABEL_31:
      v22 = v20 & (unsigned int)(v22 + 1);
      if ( (_DWORD)v22 == v23 )
      {
        ExpInsertPoolTrackerExpansion(1819242320LL, v16 + 4096, 512LL);
        goto LABEL_34;
      }
    }
    else
    {
      v34 = *(_DWORD *)(v25 + PoolTrackTable);
      if ( v34 )
      {
        *(_DWORD *)(v25 + v38) = v34;
        v24 = v38;
      }
      else
      {
        if ( (unsigned int)v22 == v21 - 1 )
        {
          v24 = v38;
          goto LABEL_31;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v45);
        if ( !*(_DWORD *)(v43 + PoolTrackTable) )
        {
          *(_DWORD *)(v43 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v43 + v38) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLock(&v45);
        v20 = v41;
        v23 = v49;
        v21 = v40;
        v24 = v38;
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(v25 + v24 + 4));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + v24 + 16), v16 + 4096);
LABEL_34:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 )
  {
    if ( PoolHitTag == 1819242320 )
      __debugbreak();
    v27 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      v27 = EtwTracePool(3618, 512, 1819242320, (_DWORD)v12, v16);
    LODWORD(v27) = KeGetPcr()->Prcb.Number;
    v28 = PoolTrackTableMask;
    v29 = PoolTrackTableMask & 0x40DEDA5;
    v30 = (__int64)*(&ExPoolTagTables + v27);
    v31 = PoolTrackTableMask & 0x40DEDA5;
    do
    {
      while ( 1 )
      {
        v32 = 40 * v29;
        v33 = *(_DWORD *)(40 * v29 + v30);
        if ( v33 == 1819242320 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + v30 + 8));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + v30 + 16), -(__int64)v16);
          goto LABEL_43;
        }
        if ( v33 )
          break;
        v35 = *(_DWORD *)(v32 + PoolTrackTable);
        if ( !v35 )
          break;
        *(_DWORD *)(v32 + v30) = v35;
      }
      v29 = v28 & (unsigned int)(v29 + 1);
    }
    while ( (_DWORD)v29 != v31 );
    ExpRemovePoolTrackerExpansion(1819242320LL, v16, 512LL);
LABEL_43:
    MiFreePoolPages((ULONG_PTR)v12, v16);
  }
  ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
