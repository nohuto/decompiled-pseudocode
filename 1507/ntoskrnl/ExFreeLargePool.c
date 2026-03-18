/*
 * XREFs of ExFreeLargePool @ 0x140046E10
 * Callers:
 *     MmFreeContiguousMemory @ 0x140114978 (MmFreeContiguousMemory.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400456B0 (ExpRemovePoolTrackerExpansion.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400478A0 (MiInsertNonPagedPoolOnSlist.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiClearNonPagedPtes @ 0x140065600 (MiClearNonPagedPtes.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     MiReturnPhysicalPoolPages @ 0x14010E300 (MiReturnPhysicalPoolPages.c)
 *     MmIsNonPagedPoolNx @ 0x14015AFF0 (MmIsNonPagedPoolNx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeCheckForTimer @ 0x1401FF398 (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     VerifierFreeTrackedPool @ 0x1402227B0 (VerifierFreeTrackedPool.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpCheckForResource @ 0x140263DEC (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x140264A98 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x140264D7C (ExpCheckForWorker.c)
 *     MiSessionPoolVector @ 0x14048B620 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140746198 (VfFreePoolNotification.c)
 */

__int64 __fastcall ExFreeLargePool(ULONG_PTR BugCheckParameter2, _DWORD *a2, ULONG_PTR *a3, int a4)
{
  ULONG_PTR v4; // r13
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 PteShadow; // rax
  __int64 *v11; // rcx
  int v12; // ebx
  unsigned __int8 CurrentIrql; // r14
  int v14; // ett
  __int64 v15; // r8
  volatile signed __int32 *v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int16 v18; // r15
  unsigned __int64 v19; // rdx
  ULONG_PTR v20; // rdi
  int v21; // esi
  int v22; // esi
  unsigned __int8 v23; // bp
  unsigned int v24; // ebx
  int v25; // r13d
  ULONG_PTR j; // r9
  __int64 v27; // r10
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  __int64 i; // rcx
  int v32; // r8d
  unsigned __int64 v33; // rax
  ULONG_PTR v34; // r14
  unsigned int v35; // ebx
  ULONG_PTR v36; // r15
  __int64 v37; // rbp
  __int64 v38; // rbp
  unsigned int v39; // eax
  __int64 result; // rax
  __int64 v41; // rbp
  ULONG_PTR v42; // r15
  int v43; // r9d
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // r8
  int v47; // eax
  __int64 k; // rcx
  int v49; // r8d
  volatile signed __int32 *v50; // rbx
  unsigned __int64 v51; // r14
  unsigned __int8 v52; // al
  __int16 v53; // ax
  unsigned __int64 v54; // rdx
  __int64 v55; // r8
  _QWORD *v56; // rcx
  _QWORD *v57; // rdx
  __int64 v58; // rsi
  unsigned __int8 v59; // bp
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 *v63; // rcx
  __int64 v64; // rax
  unsigned __int8 v65; // si
  unsigned __int32 v66; // eax
  __int64 v67; // r8
  ULONG_PTR v68; // rbx
  unsigned int v69; // esi
  __int64 v70; // rax
  char v71; // [rsp+30h] [rbp-78h]
  __int64 v72; // [rsp+38h] [rbp-70h]
  __int64 v73; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int64 *v74; // [rsp+48h] [rbp-60h]
  unsigned __int8 v75; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v77; // [rsp+B0h] [rbp+8h]
  int v80; // [rsp+C8h] [rbp+20h]

  v4 = a4;
  v6 = a4 & 1;
  v77 = a4 & 1;
  v7 = PoolVector[v6];
  v72 = v7;
  if ( a4 == 33 )
  {
    v72 = MiSessionPoolVector(v6, 0x140000000uLL);
  }
  else if ( !(_DWORD)v6 )
  {
    v8 = 0x12090482600LL;
    v9 = (__int64 *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v9;
    if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v9, *v9);
    if ( (PteShadow & 0x80u) == 0LL )
    {
      v11 = (__int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v11;
      if ( (unsigned __int64)&v11[v8] <= 0x7F8 )
        PteShadow = MiReadPteShadow(v11, *v11);
    }
    if ( PteShadow >= 0 )
      v72 = v7 + 4416;
  }
  v12 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock);
  }
  else
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v14 = ExpLargePoolTableLock & 0x7FFFFFFF;
    if ( v14 != _InterlockedCompareExchange(
                  &ExpLargePoolTableLock,
                  (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                  ExpLargePoolTableLock & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v15 = MEMORY[0xFFFFF90000001F00];
    v16 = (volatile signed __int32 *)0xFFFFF90000001E80LL;
    v17 = MEMORY[0xFFFFF90000001F08];
  }
  else
  {
    v15 = PoolBigPageTable;
    v16 = &ExpPoolBigEntriesInUse;
    v17 = PoolBigPageTableSize;
  }
  v18 = 0;
  v19 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (unsigned int)(BugCheckParameter2 >> 12))) & (unsigned int)(v17 - 1);
  if ( *(_QWORD *)(v15 + 24 * v19) != BugCheckParameter2 )
  {
    do
    {
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= v17 )
      {
        if ( v12 )
        {
          LODWORD(v19) = 0;
          v12 = 0;
        }
        else
        {
          if ( (v4 & 0x21) != 0
            || v15 != PoolBigPageTable
            || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process, v19) == -1
            || (v15 = MEMORY[0xFFFFF90000001F00],
                v16 = (volatile signed __int32 *)0xFFFFF90000001E80LL,
                v17 = MEMORY[0xFFFFF90000001F08],
                !MEMORY[0xFFFFF90000001F00])
            || !MEMORY[0xFFFFF90000001F08] )
          {
            KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v4, 0LL);
          }
          v12 = 1;
          LODWORD(v19) = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543 * (BugCheckParameter2 >> 12))) & (MEMORY[0xFFFFF90000001F08] - 1);
        }
      }
    }
    while ( *(_QWORD *)(v15 + 24LL * (unsigned int)v19) != BugCheckParameter2 );
  }
  v20 = *(_QWORD *)(v15 + 24LL * (unsigned int)v19 + 16);
  v21 = *(_DWORD *)(v15 + 24LL * (unsigned int)v19 + 12) >> 8;
  *a2 = *(_DWORD *)(v15 + 24LL * (unsigned int)v19 + 8);
  v22 = v21 & 0xFFF;
  if ( a3 )
    *a3 = v20;
  if ( v15 != PoolBigPageTable || *(_DWORD *)(v15 + 24LL * (unsigned int)v19 + 8) == 1819242320 )
  {
    v23 = 0;
  }
  else
  {
    v23 = *(_BYTE *)(v15 + 24LL * (unsigned int)v19 + 12);
    v18 = (*(_DWORD *)(v15 + 24LL * (unsigned int)v19 + 12) >> 20) & 0xFFF;
  }
  _InterlockedDecrement(v16);
  _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24LL * (unsigned int)v19));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  __writecr8(CurrentIrql);
  if ( (v22 & 0x21) == 0x20 )
    LODWORD(v4) = v22;
  *a2 &= ~0x80000000;
  v24 = *a2 & 0x7FFFFFFF;
  v80 = v4;
  if ( v24 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v4, v24, BugCheckParameter2, v20);
  v25 = v4 & 0x20;
  if ( v25 )
  {
    v27 = ExpSessionPoolTrackTable;
    j = ExpSessionPoolTrackTableMask;
  }
  else
  {
    j = PoolTrackTableMask;
    v27 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v28 = (unsigned int)j & (((40543 * (unsigned __int64)v24) >> 32) ^ (40543 * v24));
  v29 = 40 * v28;
  v30 = *(_DWORD *)(40 * v28 + v27);
  for ( i = 40 * v28 + v27; v30 != v24; i = v29 + v27 )
  {
    if ( v30 || v25 || (v32 = *(_DWORD *)(v29 + PoolTrackTable)) == 0 )
    {
      LODWORD(v28) = j & (v28 + 1);
      if ( (_DWORD)v28 == ((unsigned int)j & (((40543 * (unsigned __int64)v24) >> 32) ^ (40543 * v24))) )
      {
        ExpRemovePoolTrackerExpansion(v24, v20, v80);
        goto LABEL_58;
      }
    }
    else
    {
      *(_DWORD *)i = v32;
    }
    v29 = 40LL * (unsigned int)v28;
    v30 = *(_DWORD *)(v29 + v27);
  }
  v33 = -(__int64)v20;
  if ( (v80 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(i + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 32), v33);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(i + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 16), v33);
  }
LABEL_58:
  if ( (v22 & 0x40) != 0 )
    VerifierFreeTrackedPool(BugCheckParameter2, v20);
  v71 = 0;
  v34 = 0LL;
  if ( (v20 & 0xFFF) != 0 )
  {
    v34 = v20 + BugCheckParameter2;
    if ( *(_QWORD *)(v20 + BugCheckParameter2 + 16) != v20 )
      KeBugCheckEx(0x19u, 0x21uLL, BugCheckParameter2, v20, *(_QWORD *)(v20 + BugCheckParameter2 + 16));
    v35 = 1;
    v36 = *(unsigned __int8 *)(v34 + 1);
    v71 = *(_BYTE *)(v34 + 1);
    if ( v77 )
    {
      if ( v25 )
        goto LABEL_69;
      v38 = ExpPagedPoolDescriptor[v36];
      v35 = ExpNumberOfPagedPools + 1;
    }
    else
    {
      if ( (unsigned int)ExpNumberOfNonPagedPools <= 1
        || (v37 = ExpNonPagedPoolDescriptor[v36],
            v35 = ExpNumberOfNonPagedPools,
            v72 = v37,
            (unsigned int)MmIsNonPagedPoolNx(v20 + BugCheckParameter2)) )
      {
LABEL_69:
        if ( (unsigned int)v36 >= v35 )
          KeBugCheckEx(0x19u, 0x24uLL, v36, v35, v20 + BugCheckParameter2);
        goto LABEL_75;
      }
      v38 = v37 + 4416;
    }
    v72 = v38;
    goto LABEL_69;
  }
  if ( v23 )
  {
    v39 = 0;
    for ( j = BugCheckParameter2 + v20 - v18; v39 < v18; ++v39 )
    {
      if ( *(_BYTE *)j != v23 )
        KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, j, v23);
      ++j;
    }
  }
LABEL_75:
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x417) != 0 )
  {
    if ( (ExpPoolFlags & 0x400) != 0 && !v77 )
    {
      ExpCheckForLookaside(BugCheckParameter2, v20);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 1) != 0 )
    {
      KeCheckForTimer(BugCheckParameter2);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 4) != 0 )
    {
      ExpCheckForResource(BugCheckParameter2, v20);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 2) != 0 )
    {
      ExpCheckForWorker(BugCheckParameter2);
      result = (unsigned int)ExpPoolFlags;
    }
    if ( (result & 0x10) != 0 )
      result = VfFreePoolNotification(BugCheckParameter2, v20);
  }
  v41 = v72;
  v42 = v20;
  if ( (v20 & 0xFFF) == 0 )
    goto LABEL_141;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v72 + 80), 0xFFFFFFFFFFFFFFE0uLL);
  if ( PoolHitTag == 1734439494 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v80, 1734439494, v34, 32LL);
  if ( v25 )
  {
    v44 = ExpSessionPoolTrackTable;
    v43 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v43 = PoolTrackTableMask;
    v44 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v45 = v43 & 0x81B0A40E;
  v46 = 40 * v45;
  v47 = *(_DWORD *)(40 * v45 + v44);
  for ( k = 40 * v45 + v44; v47 != 1734439494; k = 40 * v45 + v44 )
  {
    if ( v47 || v25 || (v49 = *(_DWORD *)(v46 + PoolTrackTable)) == 0 )
    {
      v45 = v43 & (unsigned int)(v45 + 1);
      if ( (_DWORD)v45 == (v43 & 0x81B0A40E) )
      {
        ExpRemovePoolTrackerExpansion(1734439494, 32LL, v80);
        goto LABEL_106;
      }
    }
    else
    {
      *(_DWORD *)k = v49;
    }
    v46 = 40 * v45;
    v47 = *(_DWORD *)(40 * v45 + v44);
  }
  if ( (v80 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(k + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(k + 32), 0xFFFFFFFFFFFFFFE0uLL);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(k + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(k + 16), 0xFFFFFFFFFFFFFFE0uLL);
  }
LABEL_106:
  j = v77;
  v50 = (volatile signed __int32 *)(v72 + 8);
  v51 = v34 + 32;
  if ( v77 )
  {
    v58 = KeAbPreAcquire(v72 + 8);
    v59 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v50, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)v50);
    if ( v58 )
      *(_BYTE *)(v58 + 26) |= 1u;
    *(_QWORD *)(v72 + 16) = KeGetCurrentThread();
    *(_DWORD *)(v72 + 56) = v59;
    PsBoostThreadIoEx(KeGetCurrentThread(), 0LL, 0LL, 0LL);
    j = v77;
    v41 = v72;
    goto LABEL_110;
  }
  v74 = (volatile signed __int64 *)(v72 + 8);
  v73 = 0LL;
  v52 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v75 = v52;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v73, v72 + 8);
  }
  else
  {
    v57 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v50, (__int64)&v73);
    if ( !v57 )
      goto LABEL_110;
    KxWaitForLockOwnerShip((__int64)&v73, v57);
  }
  j = 0LL;
LABEL_110:
  v53 = *(_WORD *)(v51 + 2);
  v54 = v51 + 16LL * (unsigned __int8)v53;
  if ( *(_BYTE *)(v51 + 3) )
  {
    v54 = v51;
  }
  else
  {
    if ( (_BYTE)v53 != 1 )
    {
      v55 = *(_QWORD *)(v51 + 16);
      v56 = *(_QWORD **)(v51 + 24);
      if ( *(_QWORD *)(v55 + 8) != v51 + 16 || *v56 != v51 + 16 )
        __fastfail(3u);
      *v56 = v55;
      *(_QWORD *)(v55 + 8) = v56;
    }
    v51 += 16LL * (unsigned __int8)v53;
  }
  if ( (v54 & 0xFFF) != 0 )
  {
    v60 = v54 & 0xFFFFFFFFFFFFF000uLL;
    v61 = (__int64)(v51 - v60) >> 4;
    *(_WORD *)(v60 + 2) = (unsigned __int8)v61;
    *(_BYTE *)v60 = 0;
    *(_BYTE *)(v60 + 1) = v71;
    *(_DWORD *)(v60 + 4) = 1701147206;
    *(_BYTE *)v51 = v61;
    LOWORD(v61) = *(_WORD *)(v60 + 2);
    v54 = v60 + 16;
    v62 = v41 + 16 * ((unsigned int)(unsigned __int8)v61 - 1 + 20LL);
    v63 = *(unsigned __int64 **)(v62 + 8);
    *(_QWORD *)v54 = v62;
    *(_QWORD *)(v54 + 8) = v63;
    if ( *v63 != v62 )
      __fastfail(3u);
    *v63 = v54;
    v20 &= 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)(v62 + 8) = v54;
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(v41 + 192));
  }
  if ( !(_DWORD)j )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v73, retaddr);
      result = v75;
      __writecr8(v75);
      goto LABEL_141;
    }
    _m_prefetchw(&v73);
    v64 = v73;
    if ( !v73 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v74, 0LL, (signed __int64)&v73) == &v73 )
      {
LABEL_137:
        result = v75;
        __writecr8(v75);
        goto LABEL_141;
      }
      v64 = KxWaitForLockChainValid(&v73);
    }
    v73 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v64 + 8), 1uLL);
    goto LABEL_137;
  }
  LOBYTE(v54) = 1;
  PsBoostThreadIoEx(KeGetCurrentThread(), v54, 0LL, 0LL);
  *(_QWORD *)(v72 + 16) = 0LL;
  v65 = *(_BYTE *)(v72 + 56);
  v66 = _InterlockedCompareExchange(v50, 1, 0);
  if ( v66 )
    ExpReleaseFastMutexContended(v50, v66);
  __writecr8(v65);
  result = KeAbPostRelease((ULONG_PTR)v50);
LABEL_141:
  if ( v20 )
  {
    if ( !a3 )
    {
      v67 = (unsigned int)*a2;
      if ( BugCheckParameter2 + 0x200000000000LL > 0xFFFFFFFFFFFLL )
      {
        result = MiFreePagedPoolPages(BugCheckParameter2, v20, v67);
      }
      else
      {
        v68 = ((v20 & 0xFFF) != 0) + (v20 >> 12);
        result = MiInsertNonPagedPoolOnSlist(BugCheckParameter2, v68, v67, j);
        v69 = result;
        if ( (_DWORD)result != 1 )
        {
          v70 = MiClearNonPagedPtes(BugCheckParameter2, v68, (unsigned int)result);
          if ( v70 )
            MiReturnPhysicalPoolPages(v70);
          result = MiReturnNonPagedPoolVa(BugCheckParameter2, v68, v69);
        }
      }
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 72), -(int)(v20 >> 12));
  }
  _InterlockedIncrement((volatile signed __int32 *)(v41 + 68));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 80), -(__int64)v42);
  return result;
}
