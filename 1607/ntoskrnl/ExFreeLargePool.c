/*
 * XREFs of ExFreeLargePool @ 0x140010760
 * Callers:
 *     MmFreeContiguousMemory @ 0x14009A3B8 (MmFreeContiguousMemory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140011050 (MiInsertNonPagedPoolOnSlist.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiClearNonPagedPtes @ 0x1400240A0 (MiClearNonPagedPtes.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiReturnPhysicalPoolPages @ 0x140097B80 (MiReturnPhysicalPoolPages.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400AC874 (ExpRemovePoolTrackerExpansion.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     MmIsNonPagedPoolNx @ 0x140134120 (MmIsNonPagedPoolNx.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeCheckForTimer @ 0x1401D346C (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     VerifierFreeTrackedPool @ 0x1401EEC54 (VerifierFreeTrackedPool.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ExpCheckForResource @ 0x14022D9F4 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DCE8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x14022E358 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14022E6D0 (ExpCheckForWorker.c)
 *     MiSessionPoolVector @ 0x14041ADE0 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140710998 (VfFreePoolNotification.c)
 */

void __fastcall ExFreeLargePool(ULONG_PTR BugCheckParameter2, _DWORD *a2, ULONG_PTR *a3, int a4)
{
  unsigned __int8 *v4; // rbp
  ULONG_PTR v5; // r12
  ULONG_PTR v6; // r10
  int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rdi
  int v12; // ebx
  unsigned __int8 CurrentIrql; // r14
  int v14; // ett
  __int64 v15; // rdx
  volatile signed __int32 *v16; // r9
  unsigned __int64 v17; // r8
  unsigned int v18; // ebx
  ULONG_PTR v19; // r12
  int v20; // edi
  int v21; // edi
  int v22; // r10d
  unsigned int v23; // esi
  __int64 v24; // rbx
  int v25; // r10d
  __int64 v26; // r8
  __int64 v27; // r11
  unsigned int v28; // eax
  ULONG_PTR v29; // r9
  int v30; // ecx
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  ULONG_PTR v33; // rbx
  ULONG_PTR v34; // r14
  ULONG_PTR v35; // rax
  char v36; // al
  unsigned __int64 v37; // rsi
  int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  volatile __int64 *v44; // rdi
  unsigned __int8 v45; // al
  __int16 v46; // ax
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // rax
  ULONG_PTR v52; // rbx
  unsigned int inserted; // eax
  unsigned int v54; // edi
  unsigned __int8 v55; // dl
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 *v60; // rcx
  int v61; // r10d
  int v62; // r11d
  unsigned int i; // eax
  _BYTE v64[4]; // [rsp+50h] [rbp+0h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+78h]
  unsigned int v69; // [rsp+E8h] [rbp+98h]

  v69 = a4;
  v4 = (unsigned __int8 *)((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL);
  v5 = a4;
  v6 = BugCheckParameter2;
  v7 = a4 & 1;
  v8 = PoolVector[a4 & 1];
  if ( a4 == 33 )
  {
    v8 = MiSessionPoolVector();
  }
  else if ( (a4 & 1) == 0 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v9 & 0x80u) == 0LL )
      v9 = MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v9 >= 0 )
      v8 += 4416LL;
  }
  *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 1;
  v10 = 1;
  v11 = 40543LL * (unsigned int)(v6 >> 12);
  v12 = v11 ^ HIDWORD(v11);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v14 = ExpLargePoolTableLock & 0x7FFFFFFF;
    if ( v14 == _InterlockedCompareExchange(
                  &ExpLargePoolTableLock,
                  (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                  ExpLargePoolTableLock & 0x7FFFFFFF) )
      goto LABEL_9;
    ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
  }
  v6 = BugCheckParameter2;
LABEL_9:
  if ( (v5 & 0x20) != 0 )
  {
    v15 = *(_QWORD *)(qword_140326958 + 8072);
    v16 = (volatile signed __int32 *)(qword_140326958 + 7936);
    v17 = *(_QWORD *)(qword_140326958 + 8080);
  }
  else
  {
    v15 = PoolBigPageTable;
    v16 = &ExpPoolBigEntriesInUse;
    v17 = PoolBigPageTableSize;
  }
LABEL_11:
  v18 = (v17 - 1) & v12;
  while ( *(_QWORD *)(v15 + 24LL * v18) != v6 )
  {
    if ( ++v18 >= v17 )
    {
      if ( !v10 )
      {
        if ( (v5 & 0x21) == 0 && v15 == PoolBigPageTable )
        {
          if ( (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
            || (v15 = *(_QWORD *)(qword_140326958 + 8072),
                v16 = (volatile signed __int32 *)(qword_140326958 + 7936),
                v17 = *(_QWORD *)(qword_140326958 + 8080),
                !v15) )
          {
            v6 = BugCheckParameter2;
          }
          else
          {
            v6 = BugCheckParameter2;
            if ( v17 )
            {
              v10 = 1;
              v12 = v11 ^ HIDWORD(v11);
              goto LABEL_11;
            }
          }
        }
        KeBugCheckEx(0x19u, 0x22uLL, v6, v5, 0LL);
      }
      v18 = 0;
      v10 = 0;
    }
  }
  v19 = *(_QWORD *)(v15 + 24LL * v18 + 16);
  v20 = *(_DWORD *)(v15 + 24LL * v18 + 12) >> 8;
  *a2 = *(_DWORD *)(v15 + 24LL * v18 + 8);
  v21 = v20 & 0xFFF;
  if ( a3 )
    *a3 = v19;
  if ( v15 != PoolBigPageTable || *(_DWORD *)(v15 + 24LL * v18 + 8) == 1819242320 )
  {
    *v4 = 0;
    *(_WORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
  }
  else
  {
    v22 = *(_DWORD *)(v15 + 24LL * v18 + 12) >> 20;
    LOWORD(v22) = v22 & 0xFFF;
    *v4 = *(_BYTE *)(v15 + 24LL * v18 + 12);
    *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = v22;
    LODWORD(v6) = BugCheckParameter2;
  }
  _InterlockedDecrement(v16);
  _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24LL * v18));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    LODWORD(v6) = BugCheckParameter2;
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  __writecr8(CurrentIrql);
  if ( (v21 & 0x21) == 0x20 )
  {
    v23 = v21;
    v69 = v21;
  }
  else
  {
    v23 = v69;
  }
  v24 = (unsigned int)*a2;
  if ( (_DWORD)v24 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v23, v24, v6, v19);
  v25 = v23 & 0x20;
  *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v25;
  if ( (v23 & 0x20) != 0 )
  {
    v27 = ExpSessionPoolTrackTable;
    v26 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v26 = PoolTrackTableMask;
    v27 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v28 = v26 & ((40543 * v24) ^ ((unsigned __int64)(40543 * v24) >> 32));
  v29 = v28;
  while ( 1 )
  {
    v30 = *(_DWORD *)(v27 + 40LL * v28);
    v31 = 40LL * v28;
    if ( v30 == (_DWORD)v24 )
      break;
    if ( v30 || v25 )
      goto LABEL_31;
    v61 = *(_DWORD *)(PoolTrackTable + 40LL * v28);
    if ( v61 )
    {
      *(_DWORD *)(v27 + 40LL * v28) = v61;
      v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    }
    else
    {
      v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
LABEL_31:
      v28 = v26 & (v28 + 1);
      if ( v28 == (_DWORD)v29 )
      {
        ExpRemovePoolTrackerExpansion((unsigned int)v24, v19, v23);
        v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        goto LABEL_35;
      }
    }
  }
  v32 = -(__int64)v19;
  if ( (v23 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v27 + v31 + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + v31 + 32), v32);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v27 + v31 + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + v31 + 16), v32);
  }
LABEL_35:
  if ( (v21 & 0x40) != 0 )
  {
    VerifierFreeTrackedPool(BugCheckParameter2, v19);
    v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
  }
  v33 = 0LL;
  LOBYTE(v34) = 0;
  if ( (v19 & 0xFFF) != 0 )
  {
    v33 = v19 + BugCheckParameter2;
    if ( *(_QWORD *)(v19 + BugCheckParameter2 + 16) != v19 )
      KeBugCheckEx(0x19u, 0x21uLL, BugCheckParameter2, v19, *(_QWORD *)(v19 + BugCheckParameter2 + 16));
    v34 = *(unsigned __int8 *)(v33 + 1);
    if ( v7 )
    {
      if ( !v25 )
      {
        v8 = ExpPagedPoolDescriptor[v34];
        *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = ExpNumberOfPagedPools + 1;
      }
    }
    else if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = ExpNumberOfNonPagedPools;
      v8 = ExpNonPagedPoolDescriptor[v34];
      if ( !(unsigned int)MmIsNonPagedPoolNx(v19 + BugCheckParameter2) )
        v8 += 4416LL;
    }
    v35 = *(unsigned int *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( (unsigned int)v34 >= (unsigned int)v35 )
      KeBugCheckEx(0x19u, 0x24uLL, v34, v35, v19 + BugCheckParameter2);
  }
  else
  {
    v55 = *v4;
    if ( *v4 )
    {
      v29 = BugCheckParameter2
          + v19
          - (unsigned __int16)*(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
      for ( i = 0; i < (unsigned __int16)*(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC); ++i )
      {
        if ( *(_BYTE *)v29 != v55 )
          KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, v29, v55);
        ++v29;
      }
    }
  }
  v36 = ExpPoolFlags;
  if ( (ExpPoolFlags & 0x217) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v7 )
    {
      ExpCheckForLookaside(BugCheckParameter2, v19, v26, v29);
      v36 = ExpPoolFlags;
      v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    }
    if ( (v36 & 1) != 0 )
    {
      KeCheckForTimer(BugCheckParameter2);
      v36 = ExpPoolFlags;
      v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    }
    if ( (v36 & 4) != 0 )
    {
      ExpCheckForResource(BugCheckParameter2, v19, v26, v29);
      v36 = ExpPoolFlags;
      v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    }
    if ( (v36 & 2) != 0 )
    {
      ExpCheckForWorker(BugCheckParameter2);
      v36 = ExpPoolFlags;
      v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    }
    if ( (v36 & 0x10) != 0 )
    {
      VfFreePoolNotification(BugCheckParameter2, v19, v26, v29);
      v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    }
  }
  v37 = v19;
  if ( (v19 & 0xFFF) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 152), 0x20uLL);
    if ( PoolHitTag == 1734439494 )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    {
      EtwTracePool(3618, v69, 1734439494, v33, 32LL);
      v25 = *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    }
    if ( v25 )
    {
      v39 = ExpSessionPoolTrackTable;
      v38 = ExpSessionPoolTrackTableMask;
    }
    else
    {
      v38 = PoolTrackTableMask;
      v39 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    }
    v40 = v38 & 0x81B0A40E;
    while ( 1 )
    {
      v41 = *(_DWORD *)(v39 + 40 * v40);
      v42 = 40 * v40;
      if ( v41 == 1734439494 )
        break;
      if ( v41
        || *(_DWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 4)
        || (v62 = *(_DWORD *)(v42 + PoolTrackTable)) == 0 )
      {
        v40 = v38 & (unsigned int)(v40 + 1);
        if ( (_DWORD)v40 == (v38 & 0x81B0A40E) )
        {
          ExpRemovePoolTrackerExpansion(1734439494LL, 32LL, v69);
          goto LABEL_54;
        }
      }
      else
      {
        *(_DWORD *)(v39 + 40 * v40) = v62;
      }
    }
    if ( (v69 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v39 + v42 + 28));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + v42 + 32), 0xFFFFFFFFFFFFFFE0uLL);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v39 + v42 + 8));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + v42 + 16), 0xFFFFFFFFFFFFFFE0uLL);
    }
LABEL_54:
    v43 = v33 + 32;
    v44 = (volatile __int64 *)(v8 + 8);
    if ( v7 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v8 + 8));
      PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v44;
      *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
      v45 = KeGetCurrentIrql();
      __writecr8(2uLL);
      *(_BYTE *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v45;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(v4 + 16, v8 + 8);
      }
      else if ( _InterlockedExchange64(v44, (__int64)(v4 + 16)) )
      {
        KxWaitForLockOwnerShip(v4 + 16);
      }
    }
    v46 = *(_WORD *)(v43 + 2);
    v47 = v43 + 16LL * (unsigned __int8)v46;
    if ( *(_BYTE *)(v43 + 3) )
    {
      v47 = v43;
    }
    else
    {
      if ( (_BYTE)v46 != 1 )
      {
        v48 = *(_QWORD *)(v43 + 16);
        v49 = v43 + 16;
        v50 = *(_QWORD **)(v49 + 8);
        if ( *(_QWORD *)(v48 + 8) != v49 || *v50 != v49 )
          __fastfail(3u);
        *v50 = v48;
        *(_QWORD *)(v48 + 8) = v50;
      }
      v43 = v47;
    }
    if ( (v47 & 0xFFF) != 0 )
    {
      v57 = v47 & 0xFFFFFFFFFFFFF000uLL;
      v58 = (__int64)(v43 - v57) >> 4;
      *(_WORD *)(v57 + 2) = (unsigned __int8)v58;
      *(_BYTE *)v57 = 0;
      *(_BYTE *)(v57 + 1) = v34;
      *(_DWORD *)(v57 + 4) = 1701147206;
      *(_BYTE *)v43 = v58;
      LOWORD(v58) = *(_WORD *)(v57 + 2);
      v47 = v57 + 16;
      v59 = v8 + 16 * ((unsigned int)(unsigned __int8)v58 - 1 + 20LL);
      v60 = *(unsigned __int64 **)(v59 + 8);
      if ( *v60 != v59 )
        __fastfail(3u);
      *(_QWORD *)v47 = v59;
      v19 &= 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v47 + 8) = v60;
      *v60 = v47;
      *(_QWORD *)(v59 + 8) = v47;
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v8 + 136));
    }
    if ( v7 )
    {
      LOBYTE(v47) = 1;
      PsBoostThreadIoEx(KeGetCurrentThread(), v47, 0LL, 0LL);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 8));
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(v4 + 16, retaddr);
      }
      else
      {
        _m_prefetchw(v4 + 16);
        v51 = *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        if ( !v51 )
        {
          if ( (unsigned __int8 *)_InterlockedCompareExchange64(
                                    *(volatile signed __int64 **)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                                    0LL,
                                    ((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 16) == v4 + 16 )
            goto LABEL_70;
          v51 = KxWaitForLockChainValid(v4 + 16);
        }
        *(_QWORD *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v51 + 8), 1uLL);
      }
LABEL_70:
      __writecr8(*(unsigned __int8 *)(((unsigned __int64)v64 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
    }
  }
  if ( v19 )
  {
    if ( !a3 )
    {
      if ( BugCheckParameter2 < qword_140327F60 || BugCheckParameter2 >= qword_140327F60 + 0x100000000000LL )
      {
        MiFreePagedPoolPages(BugCheckParameter2);
      }
      else
      {
        v52 = ((v19 & 0xFFF) != 0) + (v19 >> 12);
        inserted = MiInsertNonPagedPoolOnSlist(BugCheckParameter2, v52, (unsigned int)*a2);
        v54 = inserted;
        if ( inserted != 1 )
        {
          v56 = MiClearNonPagedPtes(BugCheckParameter2, v52, inserted);
          if ( v56 )
            MiReturnPhysicalPoolPages(v56);
          MiReturnNonPagedPoolVa(BugCheckParameter2, v52, v54);
        }
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 144), (int)(v19 >> 12));
  }
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 128));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 152), v37);
}
