/*
 * XREFs of CcSetDirtyInMask @ 0x14002FE40
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14002F920 (CcSetDirtyPinnedData.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400F1EC4 (CcReleaseByteRangeFromWrite.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x140128BC4 (CcMdlWriteComplete2.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400304C4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcFindBitmapRangeToDirty @ 0x140030588 (CcFindBitmapRangeToDirty.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     CcAllocateInitializeMbcb @ 0x140030EBC (CcAllocateInitializeMbcb.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rbp
  char *v5; // rsi
  __int64 v7; // rdi
  unsigned int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 AbEntrySummary; // rdx
  signed __int64 v12; // r15
  int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  volatile signed __int32 *v16; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v18; // rcx
  int SessionId; // eax
  __int16 v20; // ax
  unsigned __int8 CurrentIrql; // bl
  __int64 v22; // rsi
  __int64 v23; // rcx
  ULONG_PTR v24; // rbx
  unsigned __int8 v25; // di
  unsigned __int32 v26; // eax
  __int64 BitmapRangeToDirty; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  _DWORD *v30; // rdx
  int v31; // ebx
  __int64 v32; // rcx
  struct _KTHREAD *v33; // r9
  PVOID v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rdx
  __int64 **v37; // rcx
  __int64 **v38; // rcx
  __int64 InitializeMbcb; // rax
  _OWORD *v40; // rbx
  _OWORD *v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 *v46; // rdx
  unsigned __int8 v47; // bl
  unsigned __int32 v48; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 *v50; // rdx
  __int64 *v51; // rax
  __int64 **v52; // rcx
  __int64 **v53; // rcx
  KIRQL v54; // al
  PVOID Entry; // [rsp+38h] [rbp-50h] BYREF
  __int64 v56; // [rsp+40h] [rbp-48h]
  KIRQL v57; // [rsp+A0h] [rbp+18h]

  v4 = *a2;
  v5 = 0LL;
  v56 = a3;
  v7 = a1;
  Entry = 0LL;
  v8 = 0;
  v9 = v4 + a3 - 1LL;
  if ( ((v4 ^ v9) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC0CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = v4 >> 12;
  AbEntrySummary = (*(__int64 *)(a1 + 32) >> 63) & 0xFFF;
  v12 = v9 >> 12;
  if ( *(_QWORD *)(a1 + 32) / 4096LL <= v12 )
    KeBugCheckEx(0x34u, 0xC1EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_3:
  v13 = 0;
  v14 = 1LL;
  while ( 1 )
  {
    v15 = 0x70000000000LL;
    if ( *(_QWORD *)(v7 + 32) > 0x300000uLL )
    {
      v34 = ExAllocateFromNPagedLookasideList(&CcBitmapLookasideList);
      if ( !v34 )
      {
        ++CcDbgNumberOfFailedBitmapAllocations;
        goto LABEL_103;
      }
      Entry = v34;
      v14 = 1LL;
      v15 = 0x70000000000LL;
    }
    v16 = (volatile signed __int32 *)(v7 + 280);
    if ( KiAbEnabled )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v7 + 280, KeGetCurrentIrql(), 0LL);
      --CurrentThread->SpecialApcDisable;
      if ( !CurrentThread->AbEntrySummary )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          {
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, v7 + 280, 1LL, 0x70000000000LL);
            v14 = 1LL;
          }
          goto LABEL_86;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      }
      AbEntrySummary = CurrentThread->AbEntrySummary;
      _BitScanForward((unsigned int *)&v18, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
      a1 = 96 * v18;
      v5 = (char *)CurrentThread->LockEntries + a1;
      if ( v5 )
      {
        if ( (unsigned __int64)(v7 + 0x70000000118LL) <= 0x7FFFFFFFFFLL )
        {
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process, AbEntrySummary);
          v14 = 1LL;
        }
        else
        {
          SessionId = -1;
        }
        *((_DWORD *)v5 + 10) = SessionId;
        a1 = 0x7FFFFFFFFFFFFFFCLL;
        *((_QWORD *)v5 + 4) = (unsigned __int64)v16 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_12:
        v20 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v20;
        if ( !v20
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(a1, AbEntrySummary, 1LL);
          v14 = 1LL;
        }
        goto LABEL_15;
      }
LABEL_86:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
      goto LABEL_12;
    }
LABEL_15:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v16, 0) )
      ExpAcquireFastMutexContended(v7 + 280);
    if ( v5 )
      v5[26] |= 1u;
    *(_QWORD *)(v7 + 288) = KeGetCurrentThread();
    *(_DWORD *)(v7 + 328) = CurrentIrql;
    v22 = *(_QWORD *)(v7 + 160);
    if ( !v22 )
      break;
LABEL_20:
    if ( v10 == v12 && v10 == *(_QWORD *)(v22 + 40) )
      goto LABEL_22;
    if ( (unsigned __int64)v12 >= 0x300 && *(_WORD *)v22 != 761 )
    {
      v40 = Entry;
      memset(Entry, 0, 0x400uLL);
      if ( *(_DWORD *)(v22 + 80) )
      {
        v41 = *(_OWORD **)(v22 + 88);
        *v40 = *v41;
        v40[1] = v41[1];
        v40[2] = v41[2];
        v40[3] = v41[3];
        v40[4] = v41[4];
        v40[5] = v41[5];
        memset(*(void **)(v22 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v22 + 88) = v40;
      v42 = v22 + 16;
      v43 = *(__int64 **)(v22 + 24);
      v44 = v22 + 96;
      *(_QWORD *)(v22 + 96) = v22 + 16;
      *(_QWORD *)(v22 + 104) = v43;
      Entry = 0LL;
      if ( *v43 != v22 + 16 )
        __fastfail(3u);
      *v43 = v44;
      *(_QWORD *)(v22 + 24) = v44;
      v45 = v22 + 144;
      *(_QWORD *)(v22 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v22 + 120) = -1;
      v46 = *(__int64 **)(v22 + 24);
      *(_QWORD *)(v22 + 144) = v42;
      *(_QWORD *)(v22 + 152) = v46;
      if ( *v46 != v42 )
        __fastfail(3u);
      *v46 = v45;
      *(_QWORD *)(v22 + 24) = v45;
      *(_WORD *)v22 = 761;
      *(_QWORD *)(v22 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v22 + 168) = -1;
      v5 = 0LL;
      v47 = *(_BYTE *)(v7 + 328);
      *(_QWORD *)(v7 + 288) = 0LL;
      v48 = _InterlockedCompareExchange(v16, 1, 0);
      if ( v48 )
        ExpReleaseFastMutexContended(v7 + 280, v48);
      __writecr8(v47);
      KeAbPostRelease(v7 + 280);
      goto LABEL_3;
    }
    BitmapRangeToDirty = CcFindBitmapRangeToDirty(v22, v10, &Entry, v15);
    v28 = BitmapRangeToDirty;
    if ( !BitmapRangeToDirty )
      goto LABEL_102;
    v29 = *(_QWORD *)(BitmapRangeToDirty + 16);
    if ( v10 < v29 + *(unsigned int *)(BitmapRangeToDirty + 24) )
      *(_DWORD *)(BitmapRangeToDirty + 24) = v10 - v29;
    if ( v12 > v29 + *(unsigned int *)(BitmapRangeToDirty + 28) )
      *(_DWORD *)(BitmapRangeToDirty + 28) = v12 - v29;
    v57 = KeAcquireQueuedSpinLock(5uLL);
    if ( !*(_DWORD *)(v7 + 112) && (*(_DWORD *)(v7 + 152) & 2) == 0 )
    {
      CcScheduleLazyWriteScan(0LL, 0LL);
      if ( (*(_DWORD *)(v7 + 152) & 0x3000000) != 0 )
      {
        v50 = *(__int64 **)(v7 + 120);
        v51 = (__int64 *)(v7 + 120);
        v52 = *(__int64 ***)(v7 + 128);
        if ( v50[1] != v7 + 120 || *v52 != v51 )
          __fastfail(3u);
        *v52 = v50;
        v50[1] = (__int64)v52;
        v53 = (__int64 **)qword_14034DE38;
        *v51 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
        *(_QWORD *)(v7 + 128) = v53;
        if ( *v53 != &CcDirtySharedCacheMapWithLogHandleList )
          __fastfail(3u);
        *v53 = v51;
        qword_14034DE38 = v7 + 120;
      }
      v35 = (__int64 *)(v7 + 136);
      v36 = *(__int64 **)(v7 + 136);
      v37 = *(__int64 ***)(v7 + 144);
      if ( v36[1] != v7 + 136 || *v37 != v35 )
        __fastfail(3u);
      *v37 = v36;
      v36[1] = (__int64)v37;
      v38 = (__int64 **)qword_14034DE68;
      *v35 = (__int64)&CcLazyWriterCursor;
      *(_QWORD *)(v7 + 144) = v38;
      if ( *v38 != &CcLazyWriterCursor )
        __fastfail(3u);
      *v38 = v35;
      qword_14034DE68 = v7 + 136;
      *(_QWORD *)(v22 + 32) = v10;
    }
    v30 = (_DWORD *)(*(_QWORD *)(v28 + 40) + 4 * ((unsigned __int64)(unsigned int)(v10 - *(_DWORD *)(v28 + 16)) >> 5));
    v31 = 1 << (v10 & 0x1F);
    if ( v10 <= v12 )
    {
      v32 = v12 - v10 + 1;
      v10 = v12 + 1;
      do
      {
        if ( (*v30 & v31) == 0 )
        {
          *v30 |= v31;
          ++v8;
        }
        v31 *= 2;
        if ( !v31 )
        {
          ++v30;
          v31 = 1;
        }
        --v32;
      }
      while ( v32 );
    }
    CcGlobalDirtyPageStatistics += v8;
    if ( v22 )
      *(_DWORD *)(v22 + 8) += v8;
    *(_DWORD *)(v28 + 32) += v8;
    *(_DWORD *)(v7 + 112) += v8;
    *(_QWORD *)(*(_QWORD *)(v7 + 504) + 32LL) += v8;
    if ( (*(_DWORD *)(v7 + 152) & 0x1000000) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(v7 + 240) + 24LL) += v8;
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
    if ( CcCoalescingState && (unsigned __int64)CcGlobalDirtyPageStatistics >= 0x2000 )
      CcScheduleLazyWriteScan(1LL, 0LL);
    if ( CcForcedDisableLazywriteScan )
    {
      CcScheduleLazyWriteScan(0LL, 0LL);
      CcForcedDisableLazywriteScan = 0;
    }
    CcAdjustWriteBehindThreadPoolIfNeeded(0LL);
    KeReleaseQueuedSpinLock(5uLL, v57);
    if ( (*(_DWORD *)(v7 + 152) & 0x10000000) == 0 || !v8 )
      goto LABEL_58;
    v33 = a4;
    if ( !a4 )
    {
      v33 = KeGetCurrentThread();
      a4 = v33;
    }
    AbEntrySummary = v8 << 12;
    a1 = v33->Process[2].ActiveProcessors.Bitmap[5];
    if ( a1 )
    {
      if ( v8 << 12 )
        AbEntrySummary = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), AbEntrySummary);
      v14 = 1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 1uLL);
    }
    else
    {
LABEL_58:
      v14 = 1LL;
    }
    if ( v31 )
    {
      *(_QWORD *)(v22 + 40) = v12;
LABEL_22:
      v23 = *a2 + v56;
      if ( v23 > *(_QWORD *)(v7 + 48) )
        *(_QWORD *)(v7 + 48) = v23;
LABEL_24:
      v24 = v7 + 280;
      v25 = *(_BYTE *)(v7 + 328);
      *(_QWORD *)(v24 + 8) = 0LL;
      v26 = _InterlockedCompareExchange((volatile signed __int32 *)v24, 1, 0);
      if ( v26 )
        ExpReleaseFastMutexContended(v24, v26);
      __writecr8(v25);
      KeAbPostRelease(v24);
      goto LABEL_27;
    }
    v13 = 1;
    v5 = 0LL;
  }
  InitializeMbcb = CcAllocateInitializeMbcb(a1, AbEntrySummary, v14, v15);
  v22 = InitializeMbcb;
  if ( InitializeMbcb )
  {
    *(_QWORD *)(v7 + 160) = InitializeMbcb;
    goto LABEL_20;
  }
LABEL_102:
  v13 = 1;
LABEL_103:
  if ( (*(_DWORD *)(v7 + 152) & 0x20000) == 0 )
  {
    v54 = KeAcquireQueuedSpinLock(5uLL);
    *(_DWORD *)(v7 + 152) |= 0x20000u;
    KeReleaseQueuedSpinLock(5uLL, v54);
  }
  if ( v13 )
    goto LABEL_24;
LABEL_27:
  if ( Entry )
    ExFreeToNPagedLookasideList(&CcBitmapLookasideList, Entry);
}
