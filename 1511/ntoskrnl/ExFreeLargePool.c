/*
 * XREFs of ExFreeLargePool @ 0x1400892D0
 * Callers:
 *     MmFreeContiguousMemory @ 0x1400C1D4C (MmFreeContiguousMemory.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140089B90 (MiInsertNonPagedPoolOnSlist.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400C7DC0 (ExpRemovePoolTrackerExpansion.c)
 *     MiClearNonPagedPtes @ 0x1400D2B70 (MiClearNonPagedPtes.c)
 *     MiReturnPhysicalPoolPages @ 0x1400D6950 (MiReturnPhysicalPoolPages.c)
 *     MmIsNonPagedPoolNx @ 0x14012BDD0 (MmIsNonPagedPoolNx.c)
 *     EtwTracePool @ 0x140150068 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeCheckForTimer @ 0x1401C3440 (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     VerifierFreeTrackedPool @ 0x1401DD4E8 (VerifierFreeTrackedPool.c)
 *     ExpCheckForResource @ 0x140213F80 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x1402148BC (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x140214B20 (ExpCheckForWorker.c)
 *     MiSessionPoolVector @ 0x1404065D0 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x1406C48D4 (VfFreePoolNotification.c)
 */

void __fastcall ExFreeLargePool(ULONG_PTR a1, int *a2, ULONG_PTR *a3, signed int a4)
{
  ULONG_PTR v4; // r14
  int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bp
  int v12; // ett
  __int64 v13; // rdx
  volatile signed __int32 *v14; // r9
  unsigned __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned __int16 v17; // r13
  int *v18; // r10
  ULONG_PTR v19; // r14
  int v20; // edi
  int v21; // edi
  unsigned int v22; // esi
  __int64 v23; // rbx
  int v24; // r10d
  __int64 v25; // r8
  __int64 v26; // r11
  unsigned int v27; // eax
  ULONG_PTR i; // r9
  int v29; // ecx
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // rdi
  ULONG_PTR v33; // rbx
  ULONG_PTR v34; // rbp
  char v35; // al
  ULONG_PTR v36; // rdi
  int v37; // r11d
  int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  ULONG_PTR v43; // rbx
  unsigned __int8 v44; // al
  __int16 v45; // ax
  ULONG_PTR v46; // rdx
  __int64 v47; // rcx
  ULONG_PTR v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // rax
  ULONG_PTR v51; // rbx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 *v55; // rdx
  __int64 v56; // rax
  __int64 **v57; // rcx
  int v58; // r10d
  unsigned int v59; // eax
  int v60; // r11d
  unsigned __int8 v61; // [rsp+30h] [rbp-78h]
  unsigned int BugCheckParameter3; // [rsp+38h] [rbp-70h]
  __int64 v63; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int64 *v64; // [rsp+48h] [rbp-60h]
  unsigned __int8 v65; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v70; // [rsp+C8h] [rbp+20h]

  v70 = a4;
  v4 = a4;
  v6 = a4 & 1;
  v7 = PoolVector[a4 & 1];
  if ( a4 == 33 )
  {
    v7 = MiSessionPoolVector(0x140000000uLL, a2);
  }
  else if ( (a4 & 1) == 0 )
  {
    v8 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v8 & 0x80u) == 0LL )
      v8 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v8 >= 0 )
      v7 += 4416LL;
  }
  BugCheckParameter3 = 1;
  v9 = 1;
  v10 = 40543LL * (unsigned int)(a1 >> 12);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v12 = ExpLargePoolTableLock & 0x7FFFFFFF;
    if ( v12 != _InterlockedCompareExchange(
                  &ExpLargePoolTableLock,
                  (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                  ExpLargePoolTableLock & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v13 = MEMORY[0xFFFFF90000001F00];
    v14 = (volatile signed __int32 *)0xFFFFF90000001E80LL;
    v15 = MEMORY[0xFFFFF90000001F08];
  }
  else
  {
    v13 = PoolBigPageTable;
    v14 = &ExpPoolBigEntriesInUse;
    v15 = PoolBigPageTableSize;
  }
  v16 = (v15 - 1) & (v10 ^ HIDWORD(v10));
  v17 = 0;
  while ( *(_QWORD *)(v13 + 24LL * v16) != a1 )
  {
    if ( ++v16 >= v15 )
    {
      if ( v9 )
      {
        v16 = 0;
        v9 = 0;
      }
      else
      {
        if ( (v4 & 0x21) != 0
          || v13 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
          || (v14 = (volatile signed __int32 *)0xFFFFF90000001E80LL,
              v13 = MEMORY[0xFFFFF90000001F00],
              v15 = MEMORY[0xFFFFF90000001F08],
              !MEMORY[0xFFFFF90000001F00])
          || !MEMORY[0xFFFFF90000001F08] )
        {
          KeBugCheckEx(0x19u, 0x22uLL, a1, v4, 0LL);
        }
        v9 = 1;
        v16 = (MEMORY[0xFFFFF90000001F08] - 1) & (v10 ^ HIDWORD(v10));
      }
    }
  }
  v18 = a2;
  v19 = *(_QWORD *)(v13 + 24LL * v16 + 16);
  v20 = *(_DWORD *)(v13 + 24LL * v16 + 12) >> 8;
  *a2 = *(_DWORD *)(v13 + 24LL * v16 + 8);
  v21 = v20 & 0xFFF;
  if ( a3 )
    *a3 = v19;
  if ( v13 != PoolBigPageTable || *(_DWORD *)(v13 + 24LL * v16 + 8) == 1819242320 )
  {
    v61 = 0;
  }
  else
  {
    v17 = (*(_DWORD *)(v13 + 24LL * v16 + 12) >> 20) & 0xFFF;
    v61 = *(_BYTE *)(v13 + 24LL * v16 + 12);
  }
  _InterlockedDecrement(v14);
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24LL * v16));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    v18 = a2;
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  __writecr8(CurrentIrql);
  if ( (v21 & 0x21) == 0x20 )
  {
    v22 = v21;
    v70 = v21;
  }
  else
  {
    v22 = v70;
  }
  v23 = (unsigned int)*v18;
  if ( (_DWORD)v23 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v22, v23, a1, v19);
  v24 = v22 & 0x20;
  if ( (v22 & 0x20) != 0 )
  {
    v26 = ExpSessionPoolTrackTable;
    v25 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v25 = PoolTrackTableMask;
    v26 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v27 = v25 & ((40543 * v23) ^ ((unsigned __int64)(40543 * v23) >> 32));
  i = v27;
  while ( 1 )
  {
    v29 = *(_DWORD *)(v26 + 40LL * v27);
    v30 = 40LL * v27;
    if ( v29 == (_DWORD)v23 )
      break;
    if ( v29 || v24 )
      goto LABEL_32;
    v58 = *(_DWORD *)(PoolTrackTable + 40LL * v27);
    if ( v58 )
    {
      *(_DWORD *)(v26 + 40LL * v27) = v58;
      v24 = v22 & 0x20;
    }
    else
    {
      v24 = v22 & 0x20;
LABEL_32:
      v27 = v25 & (v27 + 1);
      if ( v27 == (_DWORD)i )
      {
        ExpRemovePoolTrackerExpansion((unsigned int)v23, v19, v22);
        v24 = v22 & 0x20;
        goto LABEL_36;
      }
    }
  }
  v31 = -(__int64)v19;
  if ( (v22 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v26 + v30 + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + v30 + 32), v31);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v26 + v30 + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + v30 + 16), v31);
  }
LABEL_36:
  if ( (v21 & 0x40) != 0 )
  {
    v32 = a1;
    VerifierFreeTrackedPool(a1, v19);
    v24 = v22 & 0x20;
  }
  else
  {
    v32 = a1;
  }
  v33 = 0LL;
  LOBYTE(v34) = 0;
  if ( (v19 & 0xFFF) != 0 )
  {
    v33 = v19 + v32;
    if ( *(_QWORD *)(v19 + v32 + 16) != v19 )
      KeBugCheckEx(0x19u, 0x21uLL, v32, v19, *(_QWORD *)(v19 + v32 + 16));
    v34 = *(unsigned __int8 *)(v33 + 1);
    if ( v6 )
    {
      if ( !v24 )
      {
        v7 = ExpPagedPoolDescriptor[v34];
        BugCheckParameter3 = ExpNumberOfPagedPools + 1;
      }
    }
    else if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      BugCheckParameter3 = ExpNumberOfNonPagedPools;
      v7 = ExpNonPagedPoolDescriptor[v34];
      if ( !(unsigned int)MmIsNonPagedPoolNx(v19 + v32) )
        v7 += 4416LL;
    }
    if ( (unsigned int)v34 >= BugCheckParameter3 )
      KeBugCheckEx(0x19u, 0x24uLL, v34, BugCheckParameter3, v19 + v32);
  }
  else if ( v61 )
  {
    v59 = 0;
    for ( i = v32 + v19 - v17; v59 < v17; ++v59 )
    {
      if ( *(_BYTE *)i != v61 )
        KeBugCheckEx(0xC2u, 0x62uLL, v32, i, v61);
      ++i;
    }
  }
  v35 = ExpPoolFlags;
  if ( (ExpPoolFlags & 0x417) != 0 )
  {
    if ( (ExpPoolFlags & 0x400) != 0 && !v6 )
    {
      ExpCheckForLookaside(v32, v19, v25, i);
      v35 = ExpPoolFlags;
    }
    if ( (v35 & 1) != 0 )
    {
      KeCheckForTimer(v32);
      v35 = ExpPoolFlags;
    }
    if ( (v35 & 4) != 0 )
    {
      ExpCheckForResource(v32, v19, v25, i);
      v35 = ExpPoolFlags;
    }
    if ( (v35 & 2) != 0 )
    {
      ExpCheckForWorker(v32);
      v35 = ExpPoolFlags;
    }
    if ( (v35 & 0x10) != 0 )
      VfFreePoolNotification(v32, v19, v25, i);
  }
  v36 = v19;
  if ( (v19 & 0xFFF) == 0 )
    goto LABEL_72;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 80), 0xFFFFFFFFFFFFFFE0uLL);
  if ( PoolHitTag == 1734439494 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v70, 1734439494, v33, 32LL);
  v37 = v22 & 0x20;
  if ( (v22 & 0x20) != 0 )
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
    if ( !v41 && !v37 )
    {
      v60 = *(_DWORD *)(v42 + PoolTrackTable);
      if ( v60 )
      {
        *(_DWORD *)(v39 + 40 * v40) = v60;
        v37 = v22 & 0x20;
        continue;
      }
      v37 = v22 & 0x20;
    }
    v40 = v38 & (unsigned int)(v40 + 1);
    if ( (_DWORD)v40 == (v38 & 0x81B0A40E) )
    {
      ExpRemovePoolTrackerExpansion(1734439494LL, 32LL, v70);
      goto LABEL_55;
    }
  }
  if ( (v70 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v39 + v42 + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + v42 + 32), 0xFFFFFFFFFFFFFFE0uLL);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v39 + v42 + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + v42 + 16), 0xFFFFFFFFFFFFFFE0uLL);
  }
LABEL_55:
  v43 = v33 + 32;
  if ( v6 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v7 + 8));
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
  }
  else
  {
    v64 = (volatile signed __int64 *)(v7 + 8);
    v63 = 0LL;
    v44 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v65 = v44;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v63);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v7 + 8), (__int64)&v63) )
    {
      KxWaitForLockOwnerShip(&v63);
    }
  }
  v45 = *(_WORD *)(v43 + 2);
  v46 = v43 + 16LL * (unsigned __int8)v45;
  if ( *(_BYTE *)(v43 + 3) )
  {
    v46 = v43;
  }
  else
  {
    if ( (_BYTE)v45 != 1 )
    {
      v47 = *(_QWORD *)(v43 + 16);
      v48 = v43 + 16;
      v49 = *(_QWORD **)(v48 + 8);
      if ( *(_QWORD *)(v47 + 8) != v48 || *v49 != v48 )
        __fastfail(3u);
      *v49 = v47;
      *(_QWORD *)(v47 + 8) = v49;
    }
    v43 = v46;
  }
  if ( (v46 & 0xFFF) != 0 )
  {
    v53 = v46 & 0xFFFFFFFFFFFFF000uLL;
    v54 = (__int64)(v43 - v53) >> 4;
    *(_WORD *)(v53 + 2) = (unsigned __int8)v54;
    *(_BYTE *)v53 = 0;
    *(_BYTE *)(v53 + 1) = v34;
    *(_DWORD *)(v53 + 4) = 1701147206;
    *(_BYTE *)v43 = v54;
    LOWORD(v54) = *(_WORD *)(v53 + 2);
    v55 = (__int64 *)(v53 + 16);
    v56 = v7 + 16 * ((unsigned int)(unsigned __int8)v54 - 1 + 20LL);
    v57 = *(__int64 ***)(v56 + 8);
    *v55 = v56;
    v55[1] = (__int64)v57;
    if ( *v57 != (__int64 *)v56 )
      __fastfail(3u);
    *v57 = v55;
    v19 &= 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)(v56 + 8) = v55;
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 192));
  }
  if ( v6 )
  {
    PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v7 + 8));
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v63, retaddr);
    }
    else
    {
      _m_prefetchw(&v63);
      v50 = v63;
      if ( !v63 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v64, 0LL, (signed __int64)&v63) == &v63 )
          goto LABEL_71;
        v50 = KxWaitForLockChainValid(&v63);
      }
      v63 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v50 + 8), 1uLL);
    }
LABEL_71:
    __writecr8(v65);
  }
LABEL_72:
  if ( v19 )
  {
    if ( !a3 )
    {
      if ( a1 + 0x200000000000LL > 0xFFFFFFFFFFFLL )
      {
        MiFreePagedPoolPages(a1, v19, *a2);
      }
      else
      {
        v51 = ((v19 & 0xFFF) != 0) + (v19 >> 12);
        if ( (unsigned int)MiInsertNonPagedPoolOnSlist(a1, v51) != 1 )
        {
          v52 = MiClearNonPagedPtes(a1, v51);
          if ( v52 )
            MiReturnPhysicalPoolPages(v52);
          MiReturnNonPagedPoolVa(a1, v51);
        }
      }
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 72), -(int)(v19 >> 12));
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 68));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 80), -(__int64)v36);
}
