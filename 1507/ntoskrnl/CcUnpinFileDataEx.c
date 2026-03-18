/*
 * XREFs of CcUnpinFileDataEx @ 0x1400F2430
 * Callers:
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcAcquireByteRangeForWrite @ 0x140075D20 (CcAcquireByteRangeForWrite.c)
 *     CcZeroDataInCache @ 0x140079230 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400F1EC4 (CcReleaseByteRangeFromWrite.c)
 *     CcGetDirtyPages @ 0x1400F1FE0 (CcGetDirtyPages.c)
 *     CcMapDataForOverwrite @ 0x140118944 (CcMapDataForOverwrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 *     CcMapData @ 0x14049CBA0 (CcMapData.c)
 *     CcUnpinData @ 0x140511420 (CcUnpinData.c)
 *     CcUnpinDataForThread @ 0x14064FCC4 (CcUnpinDataForThread.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     CcDeallocateBcb @ 0x1400F29AC (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400F2B04 (CcAdjustVacbLevelLockCount.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall CcUnpinFileDataEx(__int64 a1, char a2, int a3, __int64 a4)
{
  ULONG_PTR v4; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct _KEVENT *v8; // rcx
  __int64 v9; // r13
  volatile signed __int32 *v10; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int AbEntrySummary; // edx
  __int64 v13; // rcx
  char *v14; // r15
  int SessionId; // eax
  __int16 v16; // ax
  unsigned __int8 CurrentIrql; // si
  int v18; // eax
  __int64 v19; // rcx
  struct _KEVENT *v20; // rcx
  unsigned __int8 v21; // bl
  unsigned __int32 v22; // eax
  unsigned int v23; // esi
  KIRQL v24; // r8
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  __int64 v33; // rtt
  unsigned __int8 v34; // si
  unsigned __int32 v35; // eax
  __int64 *v36; // rdx
  __int64 *v37; // rax
  __int64 **v38; // rcx
  __int64 **v39; // rcx
  __int64 *v40; // rax
  __int64 *v41; // rdx
  __int64 **v42; // rcx
  __int64 **v43; // rcx
  __int64 v44; // rcx
  struct _KEVENT *v45; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  v4 = a3;
  v6 = a1;
  if ( *(_WORD *)a1 != 765 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v6 + 16)) )
    {
      v8 = *(struct _KEVENT **)(v7 + 184);
      if ( v8 )
        KeSetEvent(v8, 0, 0);
    }
    return;
  }
  v9 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(v9 + 152) & 0x200) == 0 || a3 == 1 )
    a2 = 1;
  v10 = (volatile signed __int32 *)(v9 + 280);
  if ( !KiAbEnabled )
  {
    v14 = 0LL;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v9 + 280, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v14 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v9 + 280);
      goto LABEL_84;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v13, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
  a1 = 96 * v13;
  v14 = (char *)CurrentThread->LockEntries + a1;
  if ( !v14 )
  {
LABEL_84:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_14;
  }
  if ( (unsigned __int64)(v9 + 0x70000000118LL) <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *((_DWORD *)v14 + 10) = SessionId;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v14 + 4) = (unsigned __int64)v10 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_14:
  v16 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v16;
  if ( !v16 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_17:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v10, 0) )
    ExpAcquireFastMutexContended(v9 + 280);
  if ( v14 )
    v14[26] |= 1u;
  *(_QWORD *)(v9 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v9 + 328) = CurrentIrql;
  if ( (unsigned int)v4 > 1 )
  {
    if ( (_DWORD)v4 != 2 )
      KeBugCheckEx(0x34u, 0x20464uLL, v4, 0LL, 0LL);
    if ( *(_BYTE *)(v6 + 2) )
    {
      v23 = *(_DWORD *)(v6 + 4) >> 12;
      *(_BYTE *)(v6 + 2) = 0;
      *(_QWORD *)(v6 + 40) = 0LL;
      *(_QWORD *)(v6 + 48) = 0LL;
      v24 = KeAcquireQueuedSpinLock(5uLL);
      CcGlobalDirtyPageStatistics -= v23;
      if ( v23 == -1 )
        KeBugCheckEx(0x34u, 0x1064uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      *(_DWORD *)(v9 + 112) -= v23;
      *(_QWORD *)(*(_QWORD *)(v9 + 504) + 32LL) -= v23;
      if ( (*(_DWORD *)(v9 + 152) & 0x1000000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v9 + 240) + 24LL) -= v23;
      v25 = 0;
      if ( CcPagesYetToWrite > v23 )
        v25 = CcPagesYetToWrite - v23;
      v26 = *(_DWORD *)(v9 + 112) == 0;
      CcPagesYetToWrite = v25;
      if ( v26 && *(_DWORD *)(v9 + 4) )
      {
        if ( (*(_DWORD *)(v9 + 152) & 0x3000000) != 0 )
        {
          v36 = *(__int64 **)(v9 + 120);
          v37 = (__int64 *)(v9 + 120);
          v38 = *(__int64 ***)(v9 + 128);
          if ( v36[1] != v9 + 120 || *v38 != v37 )
            __fastfail(3u);
          *v38 = v36;
          v36[1] = (__int64)v38;
          v39 = (__int64 **)qword_14034DE18;
          *v37 = (__int64)&CcCleanSharedCacheMapWithLogHandleList;
          *(_QWORD *)(v9 + 128) = v39;
          if ( *v39 != &CcCleanSharedCacheMapWithLogHandleList )
            __fastfail(3u);
          *v39 = v37;
          qword_14034DE18 = v9 + 120;
        }
        v40 = (__int64 *)(v9 + 136);
        v41 = *(__int64 **)(v9 + 136);
        v42 = *(__int64 ***)(v9 + 144);
        if ( v41[1] != v9 + 136 || *v42 != v40 )
          __fastfail(3u);
        *v42 = v41;
        v41[1] = (__int64)v42;
        v43 = (__int64 **)qword_14034DE28;
        *v40 = (__int64)&CcCleanSharedCacheMapList;
        *(_QWORD *)(v9 + 144) = v43;
        if ( *v43 != &CcCleanSharedCacheMapList )
          __fastfail(3u);
        *v43 = v40;
        qword_14034DE28 = v9 + 136;
      }
      KeReleaseQueuedSpinLock(5uLL, v24);
    }
  }
  else
  {
    v18 = *(_DWORD *)(v6 + 64);
    if ( !v18 )
      KeBugCheckEx(0x34u, 0x42DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v6 + 64) = v18 - 1;
  }
  if ( *(_DWORD *)(v6 + 64) )
    goto LABEL_31;
  if ( *(_BYTE *)(v6 + 2) )
  {
    if ( *(_QWORD *)(v6 + 184) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 56) + 16LL)) )
      {
        v20 = *(struct _KEVENT **)(v19 + 184);
        if ( v20 )
          KeSetEvent(v20, 0, 0);
      }
      *(_QWORD *)(v6 + 184) = 0LL;
      *(_QWORD *)(v6 + 56) = 0LL;
    }
LABEL_31:
    if ( !a2 )
      ExpReleaseResourceForThreadLite(v6 + 72, (ULONG_PTR)KeGetCurrentThread());
    *(_QWORD *)(v9 + 288) = 0LL;
    v21 = *(_BYTE *)(v9 + 328);
    v22 = _InterlockedCompareExchange(v10, 1, 0);
    if ( v22 )
      ExpReleaseFastMutexContended(v9 + 280, v22);
    __writecr8(v21);
    KeAbPostRelease(v9 + 280);
    return;
  }
  v27 = KeAbPreAcquire(v9 + 104, 0LL, 0LL, a4);
  v28 = v27;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx(v9 + 104, v27, v9 + 104);
  if ( v28 )
    *(_BYTE *)(v28 + 26) |= 1u;
  v29 = *(_QWORD *)(v6 + 16);
  v30 = *(_QWORD **)(v6 + 24);
  if ( *(_QWORD *)(v29 + 8) != v6 + 16 || *v30 != v6 + 16 )
    __fastfail(3u);
  *v30 = v29;
  *(_QWORD *)(v29 + 8) = v30;
  if ( *(__int64 *)(v9 + 32) > 0x2000000 && (*(_DWORD *)(v9 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v9, *(_QWORD *)(v6 + 8), 0xFFFFFFFFLL);
  _m_prefetchw((const void *)(v9 + 104));
  v31 = *(_QWORD *)(v9 + 104);
  if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v32 = v31 - 16;
  else
    v32 = 0LL;
  if ( (v31 & 2) != 0
    || (v33 = *(_QWORD *)(v9 + 104),
        v33 != _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 104), v32, v31)) )
  {
    ExfReleasePushLock(v9 + 104);
  }
  KeAbPostRelease(v9 + 104);
  if ( *(_QWORD *)(v6 + 184) )
  {
    v44 = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 56) + 16LL)) )
    {
      v45 = *(struct _KEVENT **)(v44 + 184);
      if ( v45 )
        KeSetEvent(v45, 0, 0);
    }
  }
  v34 = *(_BYTE *)(v9 + 328);
  *(_QWORD *)(v9 + 288) = 0LL;
  v35 = _InterlockedCompareExchange(v10, 1, 0);
  if ( v35 )
    ExpReleaseFastMutexContended(v9 + 280, v35);
  __writecr8(v34);
  KeAbPostRelease(v9 + 280);
  CcDeallocateBcb(v6);
}
