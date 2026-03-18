/*
 * XREFs of CcUnpinFileDataEx @ 0x14003A5E0
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14000DA70 (CcAcquireByteRangeForWrite.c)
 *     CcZeroDataInCache @ 0x140015F4C (CcZeroDataInCache.c)
 *     CcGetDirtyPages @ 0x14003B4D0 (CcGetDirtyPages.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcMapDataForOverwrite @ 0x1400E3728 (CcMapDataForOverwrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E4134 (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401A9140 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x1403F7D90 (CcUnpinData.c)
 *     CcMapData @ 0x14047A8B0 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x1405DB67C (CcUnpinDataForThread.c)
 * Callees:
 *     CcDeallocateBcb @ 0x14000D7C8 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14000E4E0 (CcDeductDirtyPages.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400B0CB0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400E0BB8 (CcAdjustVacbLevelLockCount.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall CcUnpinFileDataEx(__int64 a1, char a2, int a3)
{
  ULONG_PTR v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  struct _KEVENT *v7; // rcx
  __int64 v8; // r12
  volatile signed __int32 *v9; // r14
  signed __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // r15
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
  __int64 v27; // rax
  __int64 v28; // rdi
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
  v9 = (volatile signed __int32 *)(v8 + 280);
  v10 = 0LL;
  if ( KiAbEnabled )
  {
    CurrentThread = KeGetCurrentThread();
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
        goto LABEL_73;
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
      if ( (unsigned __int64)(v8 + 0x70000000118LL) <= 0x7FFFFFFFFFLL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v14 + 40) = SessionId;
      a1 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v14 + 32) = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_15:
      v16 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v16;
      if ( !v16
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(a1);
      }
      goto LABEL_18;
    }
LABEL_73:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_15;
  }
  v14 = 0LL;
LABEL_18:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v9, 0) )
    ExpAcquireFastMutexContended(v8 + 280, v14);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  *(_QWORD *)(v8 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v8 + 328) = CurrentIrql;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x2045FuLL, v3, 0LL, 0LL);
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
      KeBugCheckEx(0x34u, 0x428uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v5 + 64) = v18 - 1;
  }
  if ( *(_DWORD *)(v5 + 64) )
  {
    if ( !a2 )
      ExReleaseResourceLite((PERESOURCE)(v5 + 72));
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
    v22 = _InterlockedCompareExchange(v9, 1, 0);
    if ( v22 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v8 + 280), v22);
    __writecr8(v21);
    KeAbPostRelease(v8 + 280);
  }
  else
  {
    v27 = KeAbPreAcquire(v8 + 104);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 104), v27, v8 + 104);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v29 = *(_QWORD *)(v5 + 16);
    v30 = *(_QWORD **)(v5 + 24);
    if ( *(_QWORD *)(v29 + 8) != v5 + 16 || *v30 != v5 + 16 )
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v8, *(_QWORD *)(v5 + 8), 0xFFFFFFFFLL);
    _m_prefetchw((const void *)(v8 + 104));
    v31 = *(_QWORD *)(v8 + 104);
    if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v10 = v31 - 16;
    if ( (v31 & 2) != 0
      || (v32 = *(_QWORD *)(v8 + 104),
          v32 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 104), v10, v31)) )
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
    CcDeallocateBcb((char *)v5);
  }
}
