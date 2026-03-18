/*
 * XREFs of ExpAllocateBigPool @ 0x140041130
 * Callers:
 *     ExInsertPoolTag @ 0x1400BDA98 (ExInsertPoolTag.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     ExpAddTagForBigPages @ 0x140041A10 (ExpAddTagForBigPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x140150068 (EtwTracePool.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExDeferredFreePool @ 0x140238000 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x1404065D0 (MiSessionPoolVector.c)
 */

ULONG_PTR __fastcall ExpAllocateBigPool(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // r13
  char v6; // bl
  unsigned __int16 v7; // bp
  unsigned __int64 v8; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  ULONG_PTR PoolPages; // rax
  unsigned int v14; // edi
  __int64 v15; // rax
  int v16; // edx
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r12
  unsigned int v20; // ebx
  __int64 v21; // rdi
  int v22; // eax
  ULONG_PTR v23; // rbx
  unsigned __int64 v24; // rbx
  int v25; // r15d
  int v26; // ebp
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // r15
  int v32; // eax
  volatile __int64 *v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rdi
  int v36; // ecx
  __int64 v37; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 **v39; // rax
  __int64 *v40; // rbx
  __int64 v42; // r9
  int v43; // r8d
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  _KNODE *ParentNode; // rcx
  int v47; // edx
  int v48; // r8d
  void *v49; // rcx
  unsigned int v50; // [rsp+30h] [rbp-B8h]
  __int64 v51; // [rsp+38h] [rbp-B0h]
  ULONG_PTR v52; // [rsp+40h] [rbp-A8h]
  __int64 v53; // [rsp+48h] [rbp-A0h]
  __int64 v54; // [rsp+48h] [rbp-A0h]
  __int16 v55; // [rsp+50h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v57; // [rsp+78h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE v58; // [rsp+80h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v59; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int16 v60; // [rsp+F0h] [rbp+8h]
  int v61; // [rsp+100h] [rbp+18h]

  v5 = a4;
  v6 = 0;
  v57 = a3;
  v7 = 0;
  v8 = a3;
  if ( a1 )
  {
    if ( (a5 & 2) != 0 )
    {
      v49 = (void *)(a3 + a1);
      if ( ((unsigned __int16)v49 & 0xFFF) != 0 )
      {
        v7 = ((unsigned __int16)v49 & 0xF000) - (_WORD)v49 + 4096;
        v6 = MEMORY[0xFFFFF78000000320] | 1;
        memset(v49, MEMORY[0xFFFFF78000000320] | 1, v7);
      }
    }
    if ( (a5 & 1) != 0 )
      v8 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (v8 & 0xFFF) - 1 > 0xFBF )
  {
    if ( v8 < v8 + 4095 )
    {
      v11 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_5;
    }
    return 0LL;
  }
  if ( v8 >= v8 + 63 )
    return 0LL;
  v11 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_5:
  v55 = v11;
  v61 = a2 & 1;
  if ( (a2 & 0x20) != 0 && (a2 & 1) != 0 )
  {
    v12 = MiSessionPoolVector(a2 & 1, 0x140000000uLL);
    v51 = v12;
  }
  else
  {
    v12 = PoolVector[a2 & 1];
    v51 = v12;
    if ( (a2 & 1) == 0 && (a2 & 0x200) == 0 )
    {
      v12 += 4416LL;
      v51 = v12;
    }
  }
  if ( v11 >= 0x10000 || (ExpPoolFlags & 0x20) != 0 )
  {
    v45 = v11 + 4095;
    if ( v11 >= v11 + 4095 )
      return 0LL;
    v11 = v45 & 0xFFFFFFFFFFFFF000uLL;
    v55 = v45 & 0xF000;
  }
  LODWORD(PoolPages) = a1;
  v14 = a2 & 0x80000261;
  v52 = a1;
  if ( !a1 )
  {
    PoolPages = MiAllocatePoolPages(v14, v11);
    v52 = PoolPages;
    if ( !PoolPages )
    {
      if ( (ExpPoolFlags & 0x200) == 0 )
        return 0LL;
      ExDeferredFreePool(v12, 0LL);
      PoolPages = MiAllocatePoolPages(v14, v11);
      v52 = PoolPages;
      if ( !PoolPages )
        return 0LL;
    }
  }
  if ( !(unsigned int)ExpAddTagForBigPages(PoolPages, v5, v11, a2, v7, v6) )
  {
    if ( !a1 )
      MiFreePoolPages(v52, v11);
    return 0LL;
  }
  if ( (v11 & 0xFFF) == 0 )
  {
    LOBYTE(v60) = 0;
    goto LABEL_19;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      v44 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
      LOBYTE(v60) = v44;
      if ( (unsigned int)v44 >= ExpNumberOfNonPagedPools )
      {
        v44 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
        LOBYTE(v60) = ExpNumberOfNonPagedPools - 1;
      }
      v12 = ExpNonPagedPoolDescriptor[v44];
      v51 = v12;
      if ( (a2 & 0x200) == 0 )
      {
        v12 += 4416LL;
        v51 = v12;
      }
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  if ( (a2 & 0x20) != 0 )
  {
LABEL_17:
    LOBYTE(v60) = 0;
    goto LABEL_18;
  }
  if ( a2 < 0 )
  {
    LODWORD(v42) = 0;
    LOBYTE(v60) = 0;
  }
  else
  {
    if ( (ExpPoolFlags & 0x100) != 0 )
    {
      if ( (a2 & 0x100) != 0 )
      {
        LOBYTE(v60) = ExpNumberOfPagedPools;
        v12 = ExpPagedPoolDescriptor[ExpNumberOfPagedPools];
        v51 = v12;
      }
      else
      {
        LOBYTE(v60) = 1;
        v12 = unk_1403832B8;
        v51 = unk_1403832B8;
      }
      goto LABEL_18;
    }
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      ParentNode = KeGetCurrentPrcb()->ParentNode;
      LODWORD(v42) = ParentNode->Affinity.Reserved[0];
      v60 = ParentNode->Affinity.Reserved[0];
      if ( (unsigned int)v42 < ExpNumberOfPagedPools )
      {
        LOBYTE(v60) = v42 + 1;
        v12 = ExpPagedPoolDescriptor[(unsigned int)(v42 + 1)];
        v51 = v12;
        goto LABEL_18;
      }
    }
    else
    {
      LODWORD(v42) = 1;
      LOBYTE(v60) = 1;
      if ( ExpNumberOfPagedPools != 1 )
      {
        v42 = (unsigned int)(ExpPoolIndex + 1);
        if ( (unsigned int)v42 > ExpNumberOfPagedPools )
          v42 = 1LL;
        v43 = v42;
        ExpPoolIndex = v42;
        do
        {
          if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v42] + 16) )
            break;
          v42 = (unsigned int)(v42 + 1);
          if ( (unsigned int)v42 > ExpNumberOfPagedPools )
            v42 = 1LL;
        }
        while ( (_DWORD)v42 != v43 );
        LOBYTE(v60) = v42;
      }
    }
  }
  v12 = ExpPagedPoolDescriptor[(unsigned int)v42];
  v51 = v12;
LABEL_18:
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 192));
LABEL_19:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 72), v11 >> 12);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 80), v11);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 64));
  if ( (_DWORD)v5 == PoolHitTag )
    __debugbreak();
  v15 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v15 = EtwTracePool(3616, a2, v5, v52, v11);
  v16 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
  {
    v19 = ExpSessionPoolTrackTable;
    v17 = ExpSessionPoolTrackTableMask;
    v18 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v15) = KeGetPcr()->Prcb.Number;
    v17 = PoolTrackTableMask;
    v18 = PoolTrackTableSize;
    v19 = (__int64)*(&ExPoolTagTables + v15);
  }
  v53 = v18;
  v20 = v17 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
  while ( 1 )
  {
    v21 = 40LL * v20;
    v22 = *(_DWORD *)(v21 + v19);
    if ( v22 == (_DWORD)v5 )
      break;
    if ( v22 )
    {
LABEL_28:
      v20 = v17 & (v20 + 1);
      if ( v20 == (v17 & ((40543 * (int)v5) ^ ((unsigned __int64)(40543 * v5) >> 32))) )
      {
        ExpInsertPoolTrackerExpansion((unsigned int)v5, v11, (unsigned int)a2);
        goto LABEL_32;
      }
    }
    else
    {
      if ( v16 )
        goto LABEL_80;
      v47 = *(_DWORD *)(v21 + PoolTrackTable);
      if ( v47 )
      {
        *(_DWORD *)(v21 + v19) = v47;
        v16 = a2 & 0x20;
      }
      else
      {
        v16 = a2 & 0x20;
LABEL_80:
        if ( v20 == v18 - 1 )
          goto LABEL_28;
        if ( v16 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v21 + v19), v5, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v58);
          if ( !*(_DWORD *)(v21 + PoolTrackTable) )
          {
            *(_DWORD *)(v21 + PoolTrackTable) = v5;
            *(_DWORD *)(v21 + v19) = v5;
          }
          KeReleaseInStackQueuedSpinLock(&v58);
          v16 = a2 & 0x20;
          v18 = v53;
        }
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v21 + v19 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + v19 + 32), v11);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v21 + v19 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + v19 + 16), v11);
  }
LABEL_32:
  v23 = v52;
  if ( (v57 & 0xFFF) != 0 && a2 < 0 )
    memset((void *)(v52 + (v57 & 0xFFFFFFFFFFFFF000uLL)), 0, 0x1000uLL);
  if ( (v11 & 0xFFF) == 0 )
    return v23;
  v24 = v11 + v52;
  v25 = a2 & 0x221 | 2;
  v50 = v25;
  *(_BYTE *)(v24 + 1) = v60;
  *(_BYTE *)(v24 + 3) = v25;
  *(_BYTE *)(v24 + 2) = 2;
  *(_BYTE *)v24 = 0;
  *(_DWORD *)(v24 + 4) = 1734439494;
  *(_QWORD *)(v24 + 16) = v11;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 80), 0x10uLL);
  if ( PoolHitTag == 1734439494 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, v25, 1734439494, v24, 32LL);
  v26 = v25 & 0x20;
  if ( (v25 & 0x20) != 0 )
  {
    v29 = ExpSessionPoolTrackTable;
    v27 = ExpSessionPoolTrackTableMask;
    v28 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v27 = PoolTrackTableMask;
    v28 = PoolTrackTableSize;
    v29 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v54 = v28;
  v30 = v27 & 0x81B0A40E;
  while ( 1 )
  {
    v31 = 40 * v30;
    v32 = *(_DWORD *)(40 * v30 + v29);
    if ( v32 == 1734439494 )
      break;
    if ( v32 )
      goto LABEL_126;
    if ( !v26 )
    {
      v48 = *(_DWORD *)(v31 + PoolTrackTable);
      if ( v48 )
      {
        *(_DWORD *)(v31 + v29) = v48;
        continue;
      }
    }
    if ( (unsigned int)v30 == v28 - 1 )
    {
LABEL_126:
      v30 = v27 & (unsigned int)(v30 + 1);
      if ( (_DWORD)v30 == (v27 & 0x81B0A40E) )
      {
        ExpInsertPoolTrackerExpansion(1734439494LL, 32LL, v50);
        goto LABEL_45;
      }
    }
    else if ( v26 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v31 + v29), 1734439494, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v59);
      if ( !*(_DWORD *)(v31 + PoolTrackTable) )
      {
        *(_DWORD *)(v31 + PoolTrackTable) = 1734439494;
        *(_DWORD *)(v31 + v29) = 1734439494;
      }
      KeReleaseInStackQueuedSpinLock(&v59);
      v28 = v54;
    }
  }
  if ( (v50 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + v29 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + v29 + 32), 0x20uLL);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + v29 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + v29 + 16), 0x20uLL);
  }
LABEL_45:
  *(_BYTE *)(v24 + 35) = 0;
  *(_BYTE *)(v24 + 32) = 2;
  *(_DWORD *)(v24 + 36) = 1701147206;
  v33 = (volatile __int64 *)(v51 + 8);
  v34 = (4096 - ((v55 + 32) & 0xFFFu)) >> 4;
  *(_BYTE *)(v24 + 34) = v34;
  *(_BYTE *)(v24 + 33) = v60;
  v35 = v34 - 1;
  v36 = v61;
  v37 = v51 + 16 * (v35 + 20);
  if ( v61 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v51 + 8));
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
    v36 = v61;
  }
  else
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v51 + 8);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle);
      v36 = 0;
    }
    else if ( _InterlockedExchange64(v33, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
      v36 = 0;
    }
  }
  v39 = *(__int64 ***)(v37 + 8);
  v40 = (__int64 *)(v24 + 48);
  *v40 = v37;
  v40[1] = (__int64)v39;
  if ( *v39 != (__int64 *)v37 )
    __fastfail(3u);
  *v39 = v40;
  *(_QWORD *)(v37 + 8) = v40;
  if ( v36 )
  {
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v33);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v52;
}
