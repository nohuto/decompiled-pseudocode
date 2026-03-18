/*
 * XREFs of ExpAllocateBigPool @ 0x140046030
 * Callers:
 *     ExInsertPoolTag @ 0x140115390 (ExInsertPoolTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpAddTagForBigPages @ 0x140046960 (ExpAddTagForBigPages.c)
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExDeferredFreePool @ 0x14028A240 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14048B620 (MiSessionPoolVector.c)
 */

ULONG_PTR __fastcall ExpAllocateBigPool(ULONG_PTR a1, int a2, unsigned __int64 a3, int a4, char a5)
{
  char v5; // bl
  unsigned __int16 v6; // si
  unsigned __int64 v8; // rdi
  void *v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v14; // r13
  __int64 PoolPages; // rax
  unsigned int v16; // edi
  __int64 v17; // rbx
  int v18; // edx
  unsigned __int32 v19; // r15d
  __int64 v20; // rax
  int v21; // r9d
  int v22; // ecx
  __int64 v23; // r10
  __int64 v24; // r8
  unsigned __int64 v25; // r14
  int v26; // r11d
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  int v29; // eax
  __int64 i; // rdi
  int v31; // ecx
  ULONG_PTR v32; // r15
  int v33; // r12d
  int v34; // r12d
  int v35; // edx
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rsi
  unsigned int v39; // r10d
  __int64 v40; // rcx
  __int64 v41; // r14
  int v42; // eax
  __int64 j; // rdi
  int v44; // edx
  int v45; // r8d
  unsigned __int64 v46; // rcx
  volatile signed __int32 *v47; // rbx
  __int64 v48; // rdi
  unsigned __int8 v49; // al
  _QWORD *v50; // rdx
  ULONG_PTR *v51; // rcx
  ULONG_PTR v52; // rax
  __int64 v53; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v55; // di
  unsigned __int32 v56; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-C8h]
  unsigned int v58; // [rsp+38h] [rbp-C0h]
  int v59; // [rsp+40h] [rbp-B8h]
  int v60; // [rsp+40h] [rbp-B8h]
  __int64 v61; // [rsp+48h] [rbp-B0h]
  __int64 v62; // [rsp+50h] [rbp-A8h]
  __int64 v63; // [rsp+50h] [rbp-A8h]
  __int64 v64; // [rsp+58h] [rbp-A0h]
  __int64 v65; // [rsp+58h] [rbp-A0h]
  int v66; // [rsp+60h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE v67; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v68; // [rsp+80h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v70; // [rsp+A0h] [rbp-58h] BYREF
  int v71; // [rsp+100h] [rbp+8h]
  unsigned int v72; // [rsp+110h] [rbp+18h]

  v68 = a3;
  v5 = 0;
  v6 = 0;
  v8 = a3;
  if ( a1 )
  {
    if ( (a5 & 2) != 0 )
    {
      v11 = (void *)(a3 + a1);
      if ( ((unsigned __int16)v11 & 0xFFF) != 0 )
      {
        v6 = ((unsigned __int16)v11 & 0xF000) - (_WORD)v11 + 4096;
        v5 = MEMORY[0xFFFFF78000000320] | 1;
        memset(v11, MEMORY[0xFFFFF78000000320] | 1, v6);
      }
    }
    if ( (a5 & 1) != 0 )
      v8 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (v8 & 0xFFF) - 1 > 0xFBF )
  {
    if ( v8 < v8 + 4095 )
    {
      v12 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_13;
    }
    return 0LL;
  }
  if ( v8 >= v8 + 63 )
    return 0LL;
  v12 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_13:
  v71 = a2 & 1;
  if ( (a2 & 0x20) != 0 && (a2 & 1) != 0 )
  {
    v14 = MiSessionPoolVector(a2 & 1, 0x140000000uLL);
    v61 = v14;
  }
  else
  {
    v14 = PoolVector[a2 & 1];
    v61 = v14;
    if ( (a2 & 1) == 0 && (a2 & 0x200) == 0 )
    {
      v14 += 4416LL;
      v61 = v14;
    }
  }
  if ( v12 >= 0x10000 || (ExpPoolFlags & 0x20) != 0 )
  {
    if ( v12 >= v12 + 4095 )
      return 0LL;
    v12 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  LODWORD(PoolPages) = a1;
  v16 = a2 & 0x80000261;
  BugCheckParameter2 = a1;
  if ( !a1 )
  {
    PoolPages = MiAllocatePoolPages(v16, v12);
    BugCheckParameter2 = PoolPages;
    if ( !PoolPages )
    {
      if ( (ExpPoolFlags & 0x200) == 0 )
        return 0LL;
      ExDeferredFreePool(v14, 0LL);
      PoolPages = MiAllocatePoolPages(v16, v12);
      BugCheckParameter2 = PoolPages;
      if ( !PoolPages )
        return 0LL;
    }
  }
  if ( !(unsigned int)ExpAddTagForBigPages(PoolPages, a4, v12, a2, v6, v5) )
  {
    if ( !a1 )
      MiFreePoolPages(BugCheckParameter2);
    return 0LL;
  }
  if ( (v12 & 0xFFF) != 0 )
  {
    if ( (a2 & 1) == 0 )
    {
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        v17 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
        if ( (unsigned int)v17 >= ExpNumberOfNonPagedPools )
          v17 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
        v14 = ExpNonPagedPoolDescriptor[v17];
        v61 = v14;
        if ( (a2 & 0x200) == 0 )
        {
          v14 += 4416LL;
          v61 = v14;
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 192));
          goto LABEL_61;
        }
        goto LABEL_59;
      }
LABEL_58:
      LOBYTE(v17) = 0;
LABEL_59:
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 192));
      goto LABEL_61;
    }
    if ( (a2 & 0x20) != 0 )
      goto LABEL_58;
    if ( a2 >= 0 )
    {
      if ( (ExpPoolFlags & 0x100) != 0 )
      {
        LODWORD(v17) = ExpNumberOfPagedPools;
        if ( (a2 & 0x100) == 0 )
          LODWORD(v17) = 1;
      }
      else if ( (unsigned __int16)KeNumberNodes <= 1u )
      {
        LODWORD(v17) = 1;
        if ( ExpNumberOfPagedPools != 1 )
        {
          v17 = (unsigned int)(ExpPoolIndex + 1);
          if ( (unsigned int)v17 > ExpNumberOfPagedPools )
            v17 = 1LL;
          ExpPoolIndex = v17;
          v18 = v17;
          do
          {
            if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v17] + 16) )
              break;
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 > ExpNumberOfPagedPools )
              v17 = 1LL;
          }
          while ( (_DWORD)v17 != v18 );
        }
      }
      else
      {
        LODWORD(v17) = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
        if ( (unsigned int)v17 < ExpNumberOfPagedPools )
          LODWORD(v17) = v17 + 1;
      }
    }
    else
    {
      LODWORD(v17) = 0;
    }
    v14 = ExpPagedPoolDescriptor[(unsigned int)v17];
    v61 = v14;
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 192));
  }
  else
  {
    LOBYTE(v17) = 0;
  }
LABEL_61:
  _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 72), v12 >> 12);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 80), v12);
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 64));
  v19 = a4 & 0x7FFFFFFF;
  if ( v19 == PoolHitTag )
    __debugbreak();
  v20 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v20 = EtwTracePool(3616, a2, v19, BugCheckParameter2, v12);
  v21 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
  {
    v24 = ExpSessionPoolTrackTable;
    v22 = ExpSessionPoolTrackTableMask;
    v23 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v20) = KeGetPcr()->Prcb.Number;
    v22 = PoolTrackTableMask;
    v23 = PoolTrackTableSize;
    v24 = (__int64)*(&ExPoolTagTables + v20);
  }
  v64 = v23;
  v59 = v22;
  v62 = v24;
  v25 = v22 & (((40543 * (unsigned __int64)v19) >> 32) ^ (40543 * v19));
  v26 = v22 & (((40543 * (unsigned __int64)v19) >> 32) ^ (40543 * v19));
  v66 = v26;
  v27 = v25;
  v28 = 40 * v25;
  v29 = *(_DWORD *)(40 * v25 + v24);
  for ( i = 40 * v25 + v24; v29 != v19; i = v28 + v24 )
  {
    if ( !v29 )
    {
      if ( !v21 )
      {
        v31 = *(_DWORD *)(v28 + PoolTrackTable);
        if ( v31 )
        {
          *(_DWORD *)i = v31;
          goto LABEL_81;
        }
        v22 = v59;
      }
      if ( v27 != v23 - 1 )
      {
        if ( v21 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)i, v19, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(PoolTrackTable + v28) )
          {
            *(_DWORD *)(PoolTrackTable + v28) = v19;
            *(_DWORD *)i = v19;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v24 = v62;
          v21 = a2 & 0x20;
          v26 = v66;
        }
        goto LABEL_81;
      }
    }
    LODWORD(v25) = v22 & (v25 + 1);
    if ( (_DWORD)v25 == v26 )
    {
      ExpInsertPoolTrackerExpansion(v19, v12, (unsigned int)a2);
      goto LABEL_86;
    }
LABEL_81:
    v22 = v59;
    v23 = v64;
    v27 = (unsigned int)v25;
    v28 = 40LL * (unsigned int)v25;
    v29 = *(_DWORD *)(v28 + v24);
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(i + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 32), v12);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(i + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 16), v12);
  }
LABEL_86:
  if ( a2 < 0 && (v68 & 0xFFF) != 0 )
    memset((void *)(BugCheckParameter2 + (v68 & 0xFFFFFFFFFFFFF000uLL)), 0, 0x1000uLL);
  if ( (v12 & 0xFFF) != 0 )
  {
    v32 = BugCheckParameter2 + v12;
    v33 = a2 & 0x221 | 2;
    *(_BYTE *)(v32 + 2) = 2;
    v72 = v33;
    *(_BYTE *)(v32 + 3) = v33;
    *(_BYTE *)v32 = 0;
    *(_BYTE *)(v32 + 1) = v17;
    *(_DWORD *)(v32 + 4) = 1734439494;
    *(_QWORD *)(v32 + 16) = v12;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 80), 0x10uLL);
    if ( PoolHitTag == 1734439494 )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      EtwTracePool(3616, v33, 1734439494, BugCheckParameter2 + v12, 32LL);
    v34 = v33 & 0x20;
    if ( v34 )
    {
      v37 = ExpSessionPoolTrackTable;
      v35 = ExpSessionPoolTrackTableMask;
      v36 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      v35 = PoolTrackTableMask;
      v36 = PoolTrackTableSize;
      v37 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    }
    v63 = v36;
    v38 = v35 & 0x81B0A40E;
    v60 = v35;
    v65 = v37;
    v39 = v35 & 0x81B0A40E;
    v58 = v35 & 0x81B0A40E;
    v40 = v38;
    v41 = 40 * v38;
    v42 = *(_DWORD *)(v37 + 40 * v38);
    for ( j = v37 + 40 * v38; v42 != 1734439494; v40 = (unsigned int)v38 )
    {
      if ( !v42 )
      {
        if ( !v34 )
        {
          v44 = *(_DWORD *)(v41 + PoolTrackTable);
          if ( v44 )
          {
            *(_DWORD *)j = v44;
            goto LABEL_110;
          }
          v35 = v60;
        }
        if ( v40 != v36 - 1 )
        {
          if ( v34 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)j, 1734439494, 0);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v70);
            if ( !*(_DWORD *)(PoolTrackTable + v41) )
            {
              *(_DWORD *)(PoolTrackTable + v41) = 1734439494;
              *(_DWORD *)j = 1734439494;
            }
            KeReleaseInStackQueuedSpinLock(&v70);
            v37 = v65;
            v39 = v58;
          }
          goto LABEL_110;
        }
      }
      v38 = v35 & (unsigned int)(v38 + 1);
      if ( (_DWORD)v38 == v39 )
      {
        ExpInsertPoolTrackerExpansion(1734439494LL, 32LL, v72);
        goto LABEL_115;
      }
LABEL_110:
      v35 = v60;
      v36 = v63;
      v41 = 40 * v38;
      v42 = *(_DWORD *)(v37 + 40 * v38);
      j = v37 + 40 * v38;
    }
    if ( (v72 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(j + 24));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(j + 32), 0x20uLL);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(j + 4));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(j + 16), 0x20uLL);
    }
LABEL_115:
    v45 = v71;
    *(_BYTE *)(v32 + 33) = v17;
    *(_BYTE *)(v32 + 35) = 0;
    *(_BYTE *)(v32 + 32) = 2;
    v46 = (unsigned __int64)(4096 - (((_WORD)v12 + 32) & 0xFFFu)) >> 4;
    *(_BYTE *)(v32 + 34) = v46;
    *(_DWORD *)(v32 + 36) = 1701147206;
    v47 = (volatile signed __int32 *)(v61 + 8);
    v48 = v61 + 16 * ((unsigned int)(v46 - 1) + 20LL);
    if ( v71 )
    {
      v53 = KeAbPreAcquire(v61 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v47, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)v47);
      if ( v53 )
        *(_BYTE *)(v53 + 26) |= 1u;
      *(_QWORD *)(v61 + 16) = KeGetCurrentThread();
      *(_DWORD *)(v61 + 56) = CurrentIrql;
      PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
      v45 = v71;
      goto LABEL_119;
    }
    v67.LockQueue.Lock = (unsigned __int64 *volatile)(v61 + 8);
    v67.LockQueue.Next = 0LL;
    v49 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v67.OldIrql = v49;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v67, v47);
    }
    else
    {
      v50 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v47, (__int64)&v67);
      if ( !v50 )
        goto LABEL_119;
      KxWaitForLockOwnerShip((__int64)&v67, v50);
    }
    v45 = 0;
LABEL_119:
    v51 = *(ULONG_PTR **)(v48 + 8);
    v52 = v32 + 48;
    *(_QWORD *)(v32 + 48) = v48;
    *(_QWORD *)(v32 + 56) = v51;
    if ( *v51 != v48 )
      __fastfail(3u);
    *v51 = v52;
    *(_QWORD *)(v48 + 8) = v52;
    if ( v45 )
    {
      LOBYTE(v50) = 1;
      PsBoostThreadIoEx(KeGetCurrentThread(), v50, 0LL, 0LL);
      v55 = *(_BYTE *)(v61 + 56);
      *(_QWORD *)(v61 + 16) = 0LL;
      v56 = _InterlockedCompareExchange(v47, 1, 0);
      if ( v56 )
        ExpReleaseFastMutexContended(v47, v56);
      __writecr8(v55);
      KeAbPostRelease((ULONG_PTR)v47);
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&v67);
    }
  }
  return BugCheckParameter2;
}
