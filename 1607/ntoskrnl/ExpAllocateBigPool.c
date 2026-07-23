/*
 * XREFs of ExpAllocateBigPool @ 0x140011650
 * Callers:
 *     ExInsertPoolTag @ 0x14009AABC (ExInsertPoolTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExpAddTagForBigPages @ 0x140012050 (ExpAddTagForBigPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     MiFindNonPagedPoolVa @ 0x140017940 (MiFindNonPagedPoolVa.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     MiAssignNonPagedPoolPtes @ 0x14001AF80 (MiAssignNonPagedPoolPtes.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x1400DDEE0 (MiFlushTbAsNeeded.c)
 *     MiFindNonPagedPoolPages @ 0x1400E4F00 (MiFindNonPagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14041ADE0 (MiSessionPoolVector.c)
 */

ULONG_PTR __fastcall ExpAllocateBigPool(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // r12
  char v7; // bl
  unsigned __int64 v8; // rdi
  unsigned __int16 v10; // r13
  unsigned __int64 v11; // r15
  int v12; // esi
  unsigned __int64 v13; // rdx
  unsigned int v14; // edi
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rcx
  _SLIST_HEADER *v18; // rcx
  PSLIST_ENTRY v19; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v21; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  __int64 PagedPoolPages; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // edx
  int v27; // esi
  __int64 v28; // r8
  __int64 v29; // r14
  unsigned int v30; // ebx
  __int64 v31; // rdi
  int v32; // eax
  ULONG_PTR v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned int v35; // r13d
  int v36; // r14d
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rdi
  __int64 v40; // r15
  int v41; // eax
  __int16 v42; // ax
  volatile __int64 *v43; // rsi
  unsigned int v44; // ecx
  __int64 v45; // rdi
  int v46; // ecx
  __int64 v47; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v49; // rdx
  __int64 **v50; // rax
  __int64 *v51; // rbx
  __int64 v53; // r8
  int v54; // edx
  __int64 v55; // rax
  unsigned __int64 NonPagedPoolVa; // rax
  __int64 NonPagedPoolPages; // rax
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  int v60; // edx
  int v61; // r8d
  void *v62; // rcx
  ULONG_PTR PoolPages; // [rsp+30h] [rbp-B8h]
  int v65; // [rsp+3Ch] [rbp-ACh]
  __int64 v66; // [rsp+40h] [rbp-A8h]
  int v67; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+50h] [rbp-98h]
  unsigned __int64 v69; // [rsp+58h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v71; // [rsp+78h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE v72; // [rsp+80h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v73; // [rsp+98h] [rbp-50h] BYREF
  char v74; // [rsp+F0h] [rbp+8h]
  int v75; // [rsp+100h] [rbp+18h]

  v6 = a4;
  v7 = 0;
  v71 = a3;
  v8 = a3;
  v10 = 0;
  if ( a1 )
  {
    if ( (a5 & 2) != 0 )
    {
      v62 = (void *)(a1 + a3);
      if ( (((_DWORD)a1 + (_DWORD)a3) & 0xFFF) != 0 )
      {
        v10 = ((unsigned __int16)v62 & 0xF000) - (_WORD)v62 + 4096;
        v7 = MEMORY[0xFFFFF78000000320] | 1;
        memset(v62, MEMORY[0xFFFFF78000000320] | 1, v10);
      }
    }
    if ( (a5 & 1) != 0 )
      v8 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (v8 & 0xFFF) - 1 > 0xFBF )
  {
    if ( v8 >= v8 + 4095 )
      return 0LL;
    v11 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    if ( v8 >= v8 + 63 )
      return 0LL;
    v11 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v69 = v11;
  v12 = a2 & 1;
  v13 = 0x140000000uLL;
  v75 = v12;
  v65 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 && (a2 & 1) != 0 )
  {
    v55 = MiSessionPoolVector(0LL, 0x140000000uLL);
LABEL_82:
    v66 = v55;
    goto LABEL_8;
  }
  v66 = PoolVector[a2 & 1];
  if ( (a2 & 1) == 0 && (a2 & 0x200) == 0 )
  {
    v55 = PoolVector[a2 & 1] + 4416;
    goto LABEL_82;
  }
LABEL_8:
  if ( v11 >= 0x10000 || (ExpPoolFlags & 0x20) != 0 )
  {
    v59 = v11 + 4095;
    if ( v11 < v11 + 4095 )
    {
      v11 = v59 & 0xFFFFFFFFFFFFF000uLL;
      v69 = v59 & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_10;
    }
    return 0LL;
  }
LABEL_10:
  PoolPages = a1;
  v14 = a2 & 0x80000261;
  if ( a1 )
    goto LABEL_20;
  if ( (a2 & 1) != 0 )
  {
    PagedPoolPages = MiAllocatePagedPoolPages(v14, v11);
    PoolPages = PagedPoolPages;
  }
  else
  {
    v15 = ((v11 & 0xFFF) != 0) + (v11 >> 12);
    v16 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8LL * KeGetCurrentThread()->IdealProcessor + 3847104)
                                          + 1600LL)
                              + 146LL);
    if ( v15 > 3 )
      goto LABEL_89;
    v17 = 26 * v16;
    if ( (v14 & 0x200) != 0 )
      v17 += 3LL;
    v18 = &qword_1403269F0[v15 + v17];
    if ( LOWORD(v18->Alignment) && (v19 = RtlpInterlockedPopEntrySList(v18)) != 0LL )
    {
      Next = (ULONG_PTR)v19[-1].Next;
      v21 = (ULONG_PTR)&v19[-1];
      PoolPages = (ULONG_PTR)&v19[-1];
      BugCheckParameter4 = qword_1403277C0 ^ (unsigned __int64)&v19[-1];
      if ( Next != BugCheckParameter4 )
        KeBugCheckEx(0x1Au, 0x5200uLL, v21, Next, BugCheckParameter4);
    }
    else
    {
LABEL_89:
      if ( v15 >= 0x100000000LL )
        goto LABEL_137;
      NonPagedPoolVa = MiFindNonPagedPoolVa(v14, ((v11 & 0xFFF) != 0) + (v11 >> 12), (unsigned int)v16, &v67);
      PoolPages = NonPagedPoolVa;
      if ( !NonPagedPoolVa )
      {
        MiFreeExcessSegments();
        NonPagedPoolVa = MiFindNonPagedPoolVa(v14, ((v11 & 0xFFF) != 0) + (v11 >> 12), (unsigned int)v16, &v67);
        PoolPages = NonPagedPoolVa;
        if ( !NonPagedPoolVa )
        {
          ++dword_1403264B0;
          ++dword_1403264D4;
          MiFreeExcessSegments();
          goto LABEL_137;
        }
      }
      if ( *(char *)(((NonPagedPoolVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >= 0 )
      {
        if ( v67 == 2 )
          MiFlushTbAsNeeded(((PoolPages >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        NonPagedPoolPages = MiFindNonPagedPoolPages((unsigned int)v16, ((v11 & 0xFFF) != 0) + (v11 >> 12));
        if ( !NonPagedPoolPages )
        {
          ++dword_1403264B0;
          MiFreeExcessSegments();
          MiReturnNonPagedPoolVa(PoolPages, ((v11 & 0xFFF) != 0) + (v11 >> 12), v14);
          goto LABEL_137;
        }
        MiAssignNonPagedPoolPtes(PoolPages, ((v11 & 0xFFF) != 0) + (v11 >> 12), v14, NonPagedPoolPages);
      }
    }
    v12 = v75;
    PagedPoolPages = PoolPages;
  }
  if ( PagedPoolPages )
    goto LABEL_20;
LABEL_137:
  if ( (ExpPoolFlags & 0x100) == 0 )
    return 0LL;
  ExDeferredFreePool(v66, 0LL);
  PoolPages = MiAllocatePoolPages(v14, v11);
  if ( !PoolPages )
    return 0LL;
  v12 = v75;
LABEL_20:
  if ( !(unsigned int)ExpAddTagForBigPages(PoolPages, v6, v11, a2, v10, v7) )
  {
    if ( !a1 )
      MiFreePoolPages(PoolPages);
    return 0LL;
  }
  if ( (v11 & 0xFFF) == 0 )
  {
    v24 = v66;
    v74 = 0;
    goto LABEL_26;
  }
  if ( !v12 )
  {
    if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      v58 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
      v74 = v58;
      if ( (unsigned int)v58 >= ExpNumberOfNonPagedPools )
      {
        v58 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
        v74 = ExpNumberOfNonPagedPools - 1;
      }
      v24 = ExpNonPagedPoolDescriptor[v58];
      v66 = v24;
      if ( (a2 & 0x200) == 0 )
      {
        v24 += 4416LL;
        v66 = v24;
      }
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  if ( v65 )
  {
LABEL_24:
    v24 = v66;
    v74 = 0;
    goto LABEL_25;
  }
  if ( a2 < 0 )
  {
    LODWORD(v53) = 0;
    v74 = 0;
  }
  else if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    LODWORD(v53) = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
    v74 = v53;
    if ( (unsigned int)v53 < ExpNumberOfPagedPools )
    {
      v74 = v53 + 1;
      v24 = ExpPagedPoolDescriptor[(unsigned int)(v53 + 1)];
      v66 = v24;
      goto LABEL_25;
    }
  }
  else
  {
    LODWORD(v53) = 1;
    v74 = 1;
    if ( ExpNumberOfPagedPools != 1 )
    {
      v53 = (unsigned int)(ExpPoolIndex + 1);
      if ( (unsigned int)v53 > ExpNumberOfPagedPools )
        v53 = 1LL;
      v54 = v53;
      ExpPoolIndex = v53;
      do
      {
        if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v53] + 16) )
          break;
        v53 = (unsigned int)(v53 + 1);
        if ( (unsigned int)v53 > ExpNumberOfPagedPools )
          v53 = 1LL;
      }
      while ( (_DWORD)v53 != v54 );
      v74 = v53;
    }
  }
  v24 = ExpPagedPoolDescriptor[(unsigned int)v53];
  v66 = v24;
LABEL_25:
  _InterlockedIncrement64((volatile signed __int64 *)(v24 + 72));
LABEL_26:
  _InterlockedIncrement((volatile signed __int32 *)(v24 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 80), (int)(v11 >> 12));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 88), v11);
  if ( (_DWORD)v6 == PoolHitTag )
    __debugbreak();
  v25 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v25 = EtwTracePool(3616, a2, v6, PoolPages, v11);
  v26 = v65;
  if ( v65 )
  {
    v29 = ExpSessionPoolTrackTable;
    v27 = ExpSessionPoolTrackTableMask;
    v28 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v25) = KeGetPcr()->Prcb.Number;
    v27 = PoolTrackTableMask;
    v28 = PoolTrackTableSize;
    v29 = (__int64)*(&ExPoolTagTables + v25);
  }
  v68 = v28;
  v30 = v27 & ((40543 * v6) ^ ((unsigned __int64)(40543 * v6) >> 32));
  while ( 1 )
  {
    v31 = 40LL * v30;
    v32 = *(_DWORD *)(v29 + v31);
    if ( v32 == (_DWORD)v6 )
      break;
    if ( v32 )
    {
LABEL_35:
      v30 = v27 & (v30 + 1);
      if ( v30 == (v27 & ((40543 * (int)v6) ^ ((unsigned __int64)(40543 * v6) >> 32))) )
      {
        ExpInsertPoolTrackerExpansion((unsigned int)v6, v11, (unsigned int)a2);
        goto LABEL_39;
      }
    }
    else
    {
      if ( v26 )
        goto LABEL_84;
      v60 = *(_DWORD *)(v31 + PoolTrackTable);
      if ( v60 )
      {
        *(_DWORD *)(v29 + 40LL * v30) = v60;
        v26 = v65;
      }
      else
      {
        v26 = v65;
LABEL_84:
        if ( v30 == v28 - 1 )
          goto LABEL_35;
        if ( v26 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v29 + v31), v6, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v72);
          if ( !*(_DWORD *)(v31 + PoolTrackTable) )
          {
            *(_DWORD *)(v31 + PoolTrackTable) = v6;
            *(_DWORD *)(v29 + 40LL * v30) = v6;
          }
          KeReleaseInStackQueuedSpinLock(&v72);
          v28 = v68;
          v26 = v65;
        }
      }
    }
  }
  if ( v75 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v29 + v31 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + v31 + 32), v11);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v29 + v31 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + v31 + 16), v11);
  }
LABEL_39:
  v33 = PoolPages;
  if ( (v71 & 0xFFF) != 0 && a2 < 0 )
    memset((void *)(PoolPages + (v71 & 0xFFFFFFFFFFFFF000uLL)), 0, 0x1000uLL);
  if ( (v11 & 0xFFF) == 0 )
    return v33;
  v34 = v11 + PoolPages;
  v35 = a2 & 0x221 | 2;
  *(_BYTE *)(v34 + 1) = v74;
  *(_BYTE *)(v34 + 3) = v35;
  *(_BYTE *)(v34 + 2) = 2;
  *(_BYTE *)v34 = 0;
  *(_DWORD *)(v34 + 4) = 1734439494;
  *(_QWORD *)(v34 + 16) = v11;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 88), 0x20uLL);
  if ( PoolHitTag == 1734439494 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, v35, 1734439494, v34, 32LL);
  if ( (a2 & 0x20) != 0 )
  {
    v38 = ExpSessionPoolTrackTable;
    v36 = ExpSessionPoolTrackTableMask;
    v37 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v36 = PoolTrackTableMask;
    v37 = PoolTrackTableSize;
    v38 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v68 = v37;
  v39 = v36 & 0x81B0A40E;
  while ( 1 )
  {
    v40 = 40 * v39;
    v41 = *(_DWORD *)(40 * v39 + v38);
    if ( v41 == 1734439494 )
      break;
    if ( v41 )
      goto LABEL_143;
    if ( (a2 & 0x20) == 0 )
    {
      v61 = *(_DWORD *)(v40 + PoolTrackTable);
      if ( v61 )
      {
        *(_DWORD *)(v40 + v38) = v61;
        continue;
      }
    }
    if ( (unsigned int)v39 == v37 - 1 )
    {
LABEL_143:
      v39 = v36 & (unsigned int)(v39 + 1);
      if ( (_DWORD)v39 == (v36 & 0x81B0A40E) )
      {
        ExpInsertPoolTrackerExpansion(1734439494LL, 32LL, v35);
        goto LABEL_52;
      }
    }
    else if ( (a2 & 0x20) != 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v40 + v38), 1734439494, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v73);
      if ( !*(_DWORD *)(v40 + PoolTrackTable) )
      {
        *(_DWORD *)(v40 + PoolTrackTable) = 1734439494;
        *(_DWORD *)(v40 + v38) = 1734439494;
      }
      KeReleaseInStackQueuedSpinLock(&v73);
      v37 = v68;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v40 + v38 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + v38 + 32), 0x20uLL);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v40 + v38 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + v38 + 16), 0x20uLL);
  }
LABEL_52:
  v42 = v69 + 32;
  *(_BYTE *)(v34 + 35) = 0;
  *(_BYTE *)(v34 + 32) = 2;
  *(_DWORD *)(v34 + 36) = 1701147206;
  v43 = (volatile __int64 *)(v66 + 8);
  v44 = (4096 - (v42 & 0xFFFu)) >> 4;
  *(_BYTE *)(v34 + 34) = v44;
  *(_BYTE *)(v34 + 33) = v74;
  v45 = v44 - 1;
  v46 = v75;
  v47 = v66 + 16 * (v45 + 20);
  if ( v75 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v66 + 8));
    PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
    v46 = v75;
  }
  else
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v66 + 8);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v66 + 8);
      v46 = 0;
    }
    else
    {
      v49 = _InterlockedExchange64(v43, (__int64)&LockHandle);
      if ( v49 )
      {
        KxWaitForLockOwnerShip(&LockHandle);
        v46 = 0;
      }
    }
  }
  v50 = *(__int64 ***)(v47 + 8);
  v51 = (__int64 *)(v34 + 48);
  if ( *v50 != (__int64 *)v47 )
    __fastfail(3u);
  *v51 = v47;
  v51[1] = (__int64)v50;
  *v50 = v51;
  *(_QWORD *)(v47 + 8) = v51;
  if ( v46 )
  {
    LOBYTE(v49) = 1;
    PsBoostThreadIoEx(KeGetCurrentThread(), v49, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)v43);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return PoolPages;
}
