/*
 * XREFs of CcSetDirtyInMask @ 0x14006F1E0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1400B1818 (CcMdlWriteComplete2.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400CCCD0 (CcReleaseByteRangeFromWrite.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcChargeDirtyPages @ 0x14006F774 (CcChargeDirtyPages.c)
 *     CcFindBitmapRangeToDirty @ 0x14006F8C4 (CcFindBitmapRangeToDirty.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140070520 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcAllocateInitializeMbcb @ 0x1400705CC (CcAllocateInitializeMbcb.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rbp
  __int64 v6; // rcx
  unsigned int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 AbEntrySummary; // rdx
  signed __int64 v12; // r15
  int i; // ebx
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  char *v18; // rsi
  int v19; // eax
  __int16 v20; // ax
  unsigned __int8 CurrentIrql; // bl
  __int64 v22; // rsi
  __int64 v23; // rcx
  bool v24; // zf
  ULONG_PTR v25; // rbx
  unsigned __int8 v26; // di
  signed __int32 v27; // eax
  __int64 BitmapRangeToDirty; // rax
  __int64 v29; // r14
  __int64 v30; // rdx
  _DWORD *v31; // rdx
  int v32; // ebx
  __int64 v33; // rcx
  struct _KTHREAD *v34; // r9
  unsigned __int64 v35; // rcx
  PVOID v36; // rax
  _OWORD *v37; // rbx
  _OWORD *v38; // rax
  __int64 v39; // rax
  __int64 **v40; // rdx
  __int64 *v41; // rcx
  __int64 *v42; // rcx
  __int64 **v43; // rdx
  __int64 InitializeMbcb; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  KIRQL v46; // al
  KIRQL v47; // al
  int v48; // ecx
  KIRQL v49; // bl
  PVOID Entry; // [rsp+38h] [rbp-50h] BYREF
  __int64 v51; // [rsp+40h] [rbp-48h]
  KIRQL v52; // [rsp+A0h] [rbp+18h]

  v4 = *a2;
  v6 = 0LL;
  v51 = a3;
  Entry = 0LL;
  v8 = 0;
  v9 = v4 + a3 - 1LL;
  if ( ((v4 ^ v9) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC30uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = v4 >> 12;
  AbEntrySummary = (*(__int64 *)(a1 + 32) >> 63) & 0xFFF;
  v12 = v9 >> 12;
  if ( *(_QWORD *)(a1 + 32) / 4096LL <= v12 )
    KeBugCheckEx(0x34u, 0xC42uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_3:
  for ( i = 0; ; i = 1 )
  {
    v14 = 0x8000000000LL;
    if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
    {
      v36 = ExAllocateFromNPagedLookasideList(&CcBitmapLookasideList);
      if ( !v36 )
      {
        ++CcDbgNumberOfFailedBitmapAllocations;
        goto LABEL_80;
      }
      Entry = v36;
      v6 = 0LL;
      v14 = 0x8000000000LL;
    }
    CurrentThread = KeGetCurrentThread();
    v16 = a1 + 280;
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 280, KeGetCurrentIrql(), 0LL);
    --CurrentThread->SpecialApcDisable;
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v18 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 280);
LABEL_74:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
        goto LABEL_11;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v17, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
    v6 = 96 * v17;
    v18 = (char *)CurrentThread->LockEntries + v6;
    if ( !v18 )
      goto LABEL_74;
    v19 = v16 < qword_140326950 || v16 >= qword_140326950 + 0x8000000000LL
        ? -1
        : MmGetSessionIdEx(CurrentThread->ApcState.Process);
    *((_DWORD *)v18 + 10) = v19;
    v6 = 0x7FFFFFFFFFFFFFFCLL;
    *((_QWORD *)v18 + 4) = v16 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
    v20 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v20;
    if ( !v20
      && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v6);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v16, 0) )
      ExpAcquireFastMutexContended(a1 + 280);
    if ( v18 )
      v18[26] |= 1u;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = CurrentIrql;
    v22 = *(_QWORD *)(a1 + 160);
    if ( !v22 )
    {
      InitializeMbcb = CcAllocateInitializeMbcb(v6, AbEntrySummary, v14);
      v22 = InitializeMbcb;
      if ( !InitializeMbcb )
        break;
      *(_QWORD *)(a1 + 160) = InitializeMbcb;
    }
    if ( v10 == v12 && v10 == *(_QWORD *)(v22 + 40) || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
      goto LABEL_21;
    if ( (unsigned __int64)v12 >= 0x300 && *(_WORD *)v22 != 761 )
    {
      v37 = Entry;
      memset(Entry, 0, 0x400uLL);
      if ( *(_DWORD *)(v22 + 80) )
      {
        v38 = *(_OWORD **)(v22 + 88);
        *v37 = *v38;
        v37[1] = v38[1];
        v37[2] = v38[2];
        v37[3] = v38[3];
        v37[4] = v38[4];
        v37[5] = v38[5];
        memset(*(void **)(v22 + 88), 0, 0x60uLL);
      }
      v39 = v22 + 16;
      *(_QWORD *)(v22 + 88) = v37;
      v40 = *(__int64 ***)(v22 + 24);
      v41 = (__int64 *)(v22 + 96);
      Entry = 0LL;
      if ( *v40 != (__int64 *)(v22 + 16) )
        __fastfail(3u);
      *v41 = v39;
      *(_QWORD *)(v22 + 104) = v40;
      *v40 = v41;
      *(_QWORD *)(v22 + 24) = v41;
      v42 = (__int64 *)(v22 + 144);
      *(_QWORD *)(v22 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v22 + 120) = -1;
      v43 = *(__int64 ***)(v22 + 24);
      if ( *v43 != (__int64 *)v39 )
        __fastfail(3u);
      *v42 = v39;
      *(_QWORD *)(v22 + 152) = v43;
      *v43 = v42;
      *(_QWORD *)(v22 + 24) = v42;
      *(_WORD *)v22 = 761;
      *(_QWORD *)(v22 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v22 + 168) = -1;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      v6 = 0LL;
      goto LABEL_3;
    }
    BitmapRangeToDirty = CcFindBitmapRangeToDirty(v22, v10, &Entry);
    v29 = BitmapRangeToDirty;
    if ( !BitmapRangeToDirty )
      break;
    v30 = *(_QWORD *)(BitmapRangeToDirty + 16);
    if ( v10 < v30 + *(unsigned int *)(BitmapRangeToDirty + 24) )
      *(_DWORD *)(BitmapRangeToDirty + 24) = v10 - v30;
    if ( v12 > v30 + *(unsigned int *)(BitmapRangeToDirty + 28) )
      *(_DWORD *)(BitmapRangeToDirty + 28) = v12 - v30;
    v52 = KeAcquireQueuedSpinLock(5uLL);
    if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
    {
      CcScheduleLazyWriteScan(0LL, 0LL);
      CcInsertIntoDirtySharedCacheMapList(a1);
      *(_QWORD *)(v22 + 32) = v10;
    }
    v31 = (_DWORD *)(*(_QWORD *)(v29 + 40) + 4 * ((unsigned __int64)(unsigned int)(v10 - *(_DWORD *)(v29 + 16)) >> 5));
    v32 = 1 << (v10 & 0x1F);
    if ( v10 <= v12 )
    {
      v33 = v12 - v10 + 1;
      v10 = v12 + 1;
      do
      {
        if ( (*v31 & v32) == 0 )
        {
          *v31 |= v32;
          ++v8;
        }
        v32 *= 2;
        if ( !v32 )
        {
          ++v31;
          v32 = 1;
        }
        --v33;
      }
      while ( v33 );
    }
    CcChargeDirtyPages(a1, v22, v29, v8);
    KeReleaseQueuedSpinLock(5uLL, v52);
    if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v8 )
    {
      v34 = a4;
      if ( !a4 )
      {
        v34 = KeGetCurrentThread();
        a4 = v34;
      }
      AbEntrySummary = v8 << 12;
      v35 = v34->Process[2].ActiveProcessors.Bitmap[8];
      if ( v35 )
      {
        if ( v8 << 12 )
          AbEntrySummary = _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 8), AbEntrySummary);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 24), 1uLL);
      }
    }
    if ( v32 )
    {
      *(_QWORD *)(v22 + 40) = v12;
LABEL_21:
      v23 = *a2 + v51;
      if ( v23 > *(_QWORD *)(a1 + 48) )
      {
        v24 = (*(_DWORD *)(a1 + 152) & 0x40000000) == 0;
        *(_QWORD *)(a1 + 48) = v23;
        if ( !v24 )
        {
          v47 = KeAcquireQueuedSpinLock(5uLL);
          v48 = *(_DWORD *)(a1 + 152);
          v49 = v47;
          if ( (v48 & 0x400) == 0 )
            *(_DWORD *)(a1 + 152) = v48 | 0x400;
          CcInsertIntoDirtySharedCacheMapList(a1);
          CcScheduleLazyWriteScan(0LL, 0LL);
          KeReleaseQueuedSpinLock(5uLL, v49);
        }
      }
      goto LABEL_23;
    }
    v6 = 0LL;
  }
  i = 1;
LABEL_80:
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    v46 = KeAcquireQueuedSpinLock(5uLL);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    KeReleaseQueuedSpinLock(5uLL, v46);
  }
  if ( i )
  {
LABEL_23:
    v25 = a1 + 280;
    v26 = *(_BYTE *)(a1 + 328);
    *(_QWORD *)(v25 + 8) = 0LL;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)v25, 1, 0);
    if ( v27 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v25, v27);
    __writecr8(v26);
    KeAbPostRelease(v25);
  }
  if ( Entry )
    ExFreeToNPagedLookasideList(&CcBitmapLookasideList, Entry);
}
