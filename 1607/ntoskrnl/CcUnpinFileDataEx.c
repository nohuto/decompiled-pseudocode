/*
 * XREFs of CcUnpinFileDataEx @ 0x1400CD700
 * Callers:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcMapDataForOverwrite @ 0x14006CF94 (CcMapDataForOverwrite.c)
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     CcAcquireByteRangeForWrite @ 0x1400C9C60 (CcAcquireByteRangeForWrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400CCCD0 (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPages @ 0x1400CD440 (CcGetDirtyPages.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 *     CcMapData @ 0x1404464C0 (CcMapData.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 *     CcUnpinDataForThread @ 0x1405F90A4 (CcUnpinDataForThread.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcAdjustVacbLevelLockCount @ 0x14006C6CC (CcAdjustVacbLevelLockCount.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400C9B88 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcDeductDirtyPages @ 0x1400CA704 (CcDeductDirtyPages.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcDeallocateBcb @ 0x14010C768 (CcDeallocateBcb.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall CcUnpinFileDataEx(__int64 a1, char a2, int a3)
{
  ULONG_PTR v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  struct _KEVENT *v7; // rcx
  __int64 v8; // r12
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v10; // r14
  signed __int64 v11; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v13; // rcx
  __int64 v14; // r13
  int SessionId; // eax
  __int16 v16; // ax
  unsigned __int8 CurrentIrql; // r15
  int v18; // eax
  __int64 v19; // rcx
  struct _KEVENT *v20; // rcx
  unsigned __int8 v21; // bl
  signed __int32 v22; // eax
  unsigned int v23; // edi
  KIRQL v24; // r15
  int v25; // edx
  bool v26; // zf
  _BYTE *v27; // rax
  _BYTE *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  signed __int64 v31; // rax
  __int64 v32; // rtt
  __int64 v33; // rcx
  struct _KEVENT *v34; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  v3 = a3;
  v5 = a1;
  if ( *(_WORD *)a1 != 765 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(a1 + 16)) )
    {
      v7 = *(struct _KEVENT **)(v6 + 184);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
    }
    return;
  }
  v8 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  CurrentThread = KeGetCurrentThread();
  v10 = v8 + 280;
  v11 = 0LL;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 280, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v14 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v8 + 280);
      goto LABEL_74;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v13, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
  a1 = 96 * v13;
  v14 = (__int64)CurrentThread->LockEntries + a1;
  if ( v14 )
  {
    if ( v10 < qword_140326950 || v10 >= qword_140326950 + 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    *(_DWORD *)(v14 + 40) = SessionId;
    a1 = 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)(v14 + 32) = v10 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_14;
  }
LABEL_74:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
LABEL_14:
  v16 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v16;
  if ( !v16 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v10, 0) )
    ExpAcquireFastMutexContended(v8 + 280, v14);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  *(_QWORD *)(v8 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v8 + 328) = CurrentIrql;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20464uLL, v3, 0LL, 0LL);
    if ( *(_BYTE *)(v5 + 2) )
    {
      v23 = *(_DWORD *)(v5 + 4) >> 12;
      *(_BYTE *)(v5 + 2) = 0;
      *(_QWORD *)(v5 + 40) = 0LL;
      *(_QWORD *)(v5 + 48) = 0LL;
      v24 = KeAcquireQueuedSpinLock(5uLL);
      CcDeductDirtyPages(v8, v23);
      v25 = 0;
      if ( CcPagesYetToWrite > v23 )
        v25 = CcPagesYetToWrite - v23;
      v26 = *(_DWORD *)(v8 + 112) == 0;
      CcPagesYetToWrite = v25;
      if ( v26 && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      KeReleaseQueuedSpinLock(5uLL, v24);
    }
  }
  else
  {
    v18 = *(_DWORD *)(v5 + 64);
    if ( !v18 )
      KeBugCheckEx(0x34u, 0x42DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v5 + 64) = v18 - 1;
  }
  if ( *(_DWORD *)(v5 + 64) )
  {
    if ( !a2 )
      ExpReleaseResourceForThreadLite(v5 + 72, (ULONG_PTR)KeGetCurrentThread());
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 280));
  }
  else if ( *(_BYTE *)(v5 + 2) )
  {
    if ( *(_QWORD *)(v5 + 184) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 56) + 16LL)) )
      {
        v20 = *(struct _KEVENT **)(v19 + 184);
        if ( v20 )
          KeSetEvent(v20, 0, 0);
      }
      *(_QWORD *)(v5 + 184) = 0LL;
      *(_QWORD *)(v5 + 56) = 0LL;
    }
    if ( !a2 )
      ExpReleaseResourceForThreadLite(v5 + 72, (ULONG_PTR)KeGetCurrentThread());
    *(_QWORD *)(v8 + 288) = 0LL;
    v21 = *(_BYTE *)(v8 + 328);
    v22 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
    if ( v22 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v8 + 280), v22);
    __writecr8(v21);
    KeAbPostRelease(v8 + 280);
  }
  else
  {
    v27 = (_BYTE *)KeAbPreAcquire(v8 + 104, 0LL, 0);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 104), v27, v8 + 104);
    if ( v28 )
      v28[26] |= 1u;
    v29 = *(_QWORD *)(v5 + 16);
    v30 = *(_QWORD **)(v5 + 24);
    if ( *(_QWORD *)(v29 + 8) != v5 + 16 || *v30 != v5 + 16 )
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v8, *(_QWORD *)(v5 + 8), -1);
    _m_prefetchw((const void *)(v8 + 104));
    v31 = *(_QWORD *)(v8 + 104);
    if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v11 = v31 - 16;
    if ( (v31 & 2) != 0
      || (v32 = *(_QWORD *)(v8 + 104),
          v32 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 104), v11, v31)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 104));
    }
    KeAbPostRelease(v8 + 104);
    if ( *(_QWORD *)(v5 + 184) )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 56) + 16LL)) )
      {
        v34 = *(struct _KEVENT **)(v33 + 184);
        if ( v34 )
          KeSetEvent(v34, 0, 0);
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 280));
    CcDeallocateBcb(v5);
  }
}
