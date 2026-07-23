/*
 * XREFs of CcSetDirtyPinnedData @ 0x14006EDF0
 * Callers:
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400CCCD0 (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140457144 (CcPreparePinWrite.c)
 *     HvViewMapFlush @ 0x14060FBD8 (HvViewMapFlush.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcChargeDirtyPages @ 0x14006F774 (CcChargeDirtyPages.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140070520 (CcInsertIntoDirtySharedCacheMapList.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v2; // ax
  char *v5; // r14
  __int64 v6; // rcx
  __int64 i; // rax
  LARGE_INTEGER *v8; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v10; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v12; // rcx
  char *v13; // rsi
  int SessionId; // eax
  __int16 v15; // ax
  unsigned __int8 CurrentIrql; // di
  ULONG v17; // eax
  __int64 v18; // rdi
  LONGLONG v19; // rax
  LONGLONG v20; // rax
  LARGE_INTEGER v21; // rax
  unsigned __int8 LowPart; // di
  signed __int32 v23; // eax
  unsigned int v24; // esi
  KIRQL v25; // r12
  unsigned int v26; // esi
  unsigned __int64 v27; // rdx
  __int64 AbOrphanedEntrySummary; // rax
  _QWORD v29[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_WORD *)BcbVoid;
  if ( *(_WORD *)BcbVoid != 765 && v2 != 762 )
    KeBugCheckEx(0x34u, 0xE3AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = (char *)v29;
  v29[0] = BcbVoid;
  v29[1] = 0LL;
  if ( v2 == 762 )
    v5 = (char *)BcbVoid + 16;
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 176LL);
  if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v6 + 240) + 136LL) == -1LL )
    *(_QWORD *)(*(_QWORD *)(v6 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
  {
    for ( i = *(_QWORD *)v5; *(_QWORD *)v5; i = *(_QWORD *)v5 )
    {
      v29[0] = i;
      v5 += 8;
      if ( (i & 1) != 0 )
        KeBugCheckEx(0x34u, 0xE99uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v8 = *(LARGE_INTEGER **)(i + 176);
      CurrentThread = KeGetCurrentThread();
      v10 = (unsigned __int64)&v8[35];
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&v8[35], KeGetCurrentIrql(), 0LL);
      --CurrentThread->SpecialApcDisable;
      if ( !CurrentThread->AbEntrySummary )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v13 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, &v8[35]);
          goto LABEL_59;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      }
      AbEntrySummary = CurrentThread->AbEntrySummary;
      _BitScanForward((unsigned int *)&v12, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v12);
      v6 = 96 * v12;
      v13 = (char *)CurrentThread->LockEntries + v6;
      if ( v13 )
      {
        if ( v10 < qword_140326950 || v10 >= qword_140326950 + 0x8000000000LL )
          SessionId = -1;
        else
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        *((_DWORD *)v13 + 10) = SessionId;
        v6 = 0x7FFFFFFFFFFFFFFCLL;
        *((_QWORD *)v13 + 4) = v10 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_16;
      }
LABEL_59:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
LABEL_16:
      v15 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v15;
      if ( !v15
        && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v6);
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v10, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&v8[35]);
      if ( v13 )
        v13[26] |= 1u;
      v8[36].QuadPart = (LONGLONG)KeGetCurrentThread();
      v17 = CurrentIrql;
      v18 = v29[0];
      v8[41].LowPart = v17;
      if ( !*(_BYTE *)(v18 + 2) )
      {
        v24 = *(_DWORD *)(v18 + 4) >> 12;
        *(_BYTE *)(v18 + 2) = 1;
        if ( Lsn )
        {
          *(LARGE_INTEGER *)(v18 + 40) = *Lsn;
          *(LARGE_INTEGER *)(v18 + 48) = *Lsn;
        }
        v25 = KeAcquireQueuedSpinLock(5uLL);
        if ( !v8[14].LowPart && (v8[19].LowPart & 2) == 0 )
        {
          CcScheduleLazyWriteScan(0LL, 0LL);
          CcInsertIntoDirtySharedCacheMapList(v8);
        }
        CcChargeDirtyPages(v8, 0LL, 0LL, v24);
        KeReleaseQueuedSpinLock(5uLL, v25);
        if ( (v8[19].LowPart & 0x10000000) != 0 )
        {
          v26 = v24 << 12;
          v27 = KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[8];
          if ( v27 )
          {
            if ( v26 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 8), v26);
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 24), 1uLL);
            v18 = v29[0];
          }
          else
          {
            v18 = v29[0];
          }
        }
      }
      if ( Lsn )
      {
        v19 = *(_QWORD *)(v18 + 40);
        if ( !v19 || Lsn->QuadPart < v19 )
          *(LARGE_INTEGER *)(v18 + 40) = *Lsn;
        v20 = *(_QWORD *)(v18 + 48);
        if ( !v20 || Lsn->QuadPart > v20 )
          *(LARGE_INTEGER *)(v18 + 48) = *Lsn;
        if ( Lsn->QuadPart > v8[32].QuadPart )
          v8[32] = *Lsn;
      }
      v21 = *(LARGE_INTEGER *)(v18 + 32);
      if ( v21.QuadPart > v8[6].QuadPart )
        v8[6] = v21;
      LowPart = v8[41].LowPart;
      v8[36].QuadPart = 0LL;
      v23 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
      if ( v23 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&v8[35], v23);
      __writecr8(LowPart);
      KeAbPostRelease((ULONG_PTR)&v8[35]);
    }
  }
  else
  {
    CcSetDirtyInMask(v6, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
