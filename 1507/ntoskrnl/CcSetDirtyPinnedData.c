/*
 * XREFs of CcSetDirtyPinnedData @ 0x14002F920
 * Callers:
 *     CcZeroDataInCache @ 0x140079230 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400F1EC4 (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x14052FE34 (CcPreparePinWrite.c)
 *     HvViewMapFlush @ 0x140662CF0 (HvViewMapFlush.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400304C4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v2; // ax
  char *v5; // r14
  unsigned __int64 AbEntrySummary; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  LARGE_INTEGER *v10; // rbp
  LARGE_INTEGER *v11; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rcx
  char *v14; // rsi
  int SessionId; // eax
  __int16 v16; // ax
  unsigned __int8 CurrentIrql; // di
  ULONG v18; // eax
  __int64 v19; // rdi
  LONGLONG v20; // rax
  LONGLONG v21; // rax
  LARGE_INTEGER v22; // rax
  unsigned __int8 LowPart; // di
  unsigned __int32 v24; // eax
  unsigned int v25; // esi
  KIRQL v26; // r12
  __int64 v27; // rcx
  unsigned int v28; // esi
  unsigned __int64 v29; // rdx
  LARGE_INTEGER v30; // rdx
  LARGE_INTEGER *v31; // rax
  LARGE_INTEGER *QuadPart; // rcx
  __int64 **v33; // rcx
  LARGE_INTEGER *v34; // rax
  LARGE_INTEGER v35; // rdx
  LARGE_INTEGER *v36; // rcx
  __int64 **v37; // rcx
  __int64 AbOrphanedEntrySummary; // rax
  _QWORD v39[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_WORD *)BcbVoid;
  if ( *(_WORD *)BcbVoid != 765 && v2 != 762 )
    KeBugCheckEx(0x34u, 0xDC9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = (char *)v39;
  v39[0] = BcbVoid;
  v39[1] = 0LL;
  if ( v2 == 762 )
    v5 = (char *)BcbVoid + 16;
  AbEntrySummary = 0xFFFFF78000000320uLL;
  v7 = *(_QWORD *)(*(_QWORD *)v5 + 176LL);
  if ( (*(_DWORD *)(v7 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) == -1LL )
  {
    AbEntrySummary = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
  }
  if ( (*(_DWORD *)(v7 + 152) & 0x200) != 0 )
  {
    v8 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 )
    {
      while ( 1 )
      {
        v39[0] = v8;
        v5 += 8;
        v9 = 0x70000000000LL;
        if ( (v8 & 1) != 0 )
          KeBugCheckEx(0x34u, 0xE28uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v10 = *(LARGE_INTEGER **)(v8 + 176);
        v11 = v10 + 35;
        if ( KiAbEnabled )
          break;
        v14 = 0LL;
LABEL_20:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v11, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&v10[35]);
        if ( v14 )
          v14[26] |= 1u;
        v10[36].QuadPart = (LONGLONG)KeGetCurrentThread();
        v18 = CurrentIrql;
        v19 = v39[0];
        v10[41].LowPart = v18;
        if ( !*(_BYTE *)(v19 + 2) )
        {
          v25 = *(_DWORD *)(v19 + 4) >> 12;
          *(_BYTE *)(v19 + 2) = 1;
          if ( Lsn )
          {
            *(LARGE_INTEGER *)(v19 + 40) = *Lsn;
            *(LARGE_INTEGER *)(v19 + 48) = *Lsn;
          }
          v26 = KeAcquireQueuedSpinLock(5uLL);
          if ( !v10[14].LowPart && (v10[19].LowPart & 2) == 0 )
          {
            CcScheduleLazyWriteScan(0LL, 0LL);
            if ( (v10[19].LowPart & 0x3000000) != 0 )
            {
              v30 = v10[15];
              v31 = v10 + 15;
              QuadPart = (LARGE_INTEGER *)v10[16].QuadPart;
              if ( *(LARGE_INTEGER **)(v30.QuadPart + 8) != &v10[15] || (LARGE_INTEGER *)QuadPart->QuadPart != v31 )
                __fastfail(3u);
              *QuadPart = v30;
              *(_QWORD *)(v30.QuadPart + 8) = QuadPart;
              v33 = (__int64 **)qword_14034DE38;
              v31->QuadPart = (LONGLONG)&CcDirtySharedCacheMapWithLogHandleList;
              v10[16].QuadPart = (LONGLONG)v33;
              if ( *v33 != &CcDirtySharedCacheMapWithLogHandleList )
                __fastfail(3u);
              *v33 = (__int64 *)v31;
              qword_14034DE38 = (__int64)&v10[15];
            }
            v34 = v10 + 17;
            v35 = v10[17];
            v36 = (LARGE_INTEGER *)v10[18].QuadPart;
            if ( *(LARGE_INTEGER **)(v35.QuadPart + 8) != &v10[17] || (LARGE_INTEGER *)v36->QuadPart != v34 )
              __fastfail(3u);
            *v36 = v35;
            *(_QWORD *)(v35.QuadPart + 8) = v36;
            v37 = (__int64 **)qword_14034DE68;
            v34->QuadPart = (LONGLONG)&CcLazyWriterCursor;
            v10[18].QuadPart = (LONGLONG)v37;
            if ( *v37 != &CcLazyWriterCursor )
              __fastfail(3u);
            *v37 = (__int64 *)v34;
            qword_14034DE68 = (__int64)&v10[17];
          }
          v27 = v25;
          CcGlobalDirtyPageStatistics += v25;
          v10[14].LowPart += v25;
          *(_QWORD *)(v10[63].QuadPart + 32) += v25;
          if ( (v10[19].LowPart & 0x1000000) != 0 )
          {
            *(_QWORD *)(v10[30].QuadPart + 24) += v25;
            if ( *(_QWORD *)(v10[30].QuadPart + 136) == -1LL )
            {
              v27 = MEMORY[0xFFFFF78000000320];
              v19 = v39[0];
              *(_QWORD *)(v10[30].QuadPart + 136) = MEMORY[0xFFFFF78000000320];
            }
          }
          if ( CcCoalescingState && (unsigned __int64)CcGlobalDirtyPageStatistics >= 0x2000 )
          {
            LOBYTE(v27) = 1;
            CcScheduleLazyWriteScan(v27, 0LL);
          }
          if ( CcForcedDisableLazywriteScan )
          {
            CcScheduleLazyWriteScan(0LL, 0LL);
            CcForcedDisableLazywriteScan = 0;
          }
          CcAdjustWriteBehindThreadPoolIfNeeded(0LL);
          KeReleaseQueuedSpinLock(5uLL, v26);
          if ( (v10[19].LowPart & 0x10000000) != 0 )
          {
            v28 = v25 << 12;
            v29 = KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[5];
            if ( v29 )
            {
              if ( v28 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8), v28);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 24), 1uLL);
              v19 = v39[0];
            }
            else
            {
              v19 = v39[0];
            }
          }
        }
        if ( Lsn )
        {
          v20 = *(_QWORD *)(v19 + 40);
          if ( !v20 || Lsn->QuadPart < v20 )
            *(LARGE_INTEGER *)(v19 + 40) = *Lsn;
          v21 = *(_QWORD *)(v19 + 48);
          if ( !v21 || Lsn->QuadPart > v21 )
            *(LARGE_INTEGER *)(v19 + 48) = *Lsn;
          if ( Lsn->QuadPart > v10[32].QuadPart )
            v10[32] = *Lsn;
        }
        v22 = *(LARGE_INTEGER *)(v19 + 32);
        if ( v22.QuadPart > v10[6].QuadPart )
          v10[6] = v22;
        LowPart = v10[41].LowPart;
        v10[36].QuadPart = 0LL;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
        if ( v24 )
          ExpReleaseFastMutexContended(&v10[35], v24);
        __writecr8(LowPart);
        KeAbPostRelease((ULONG_PTR)&v10[35]);
        v8 = *(_QWORD *)v5;
        if ( !*(_QWORD *)v5 )
          return;
      }
      CurrentThread = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&v10[35], KeGetCurrentIrql(), 0LL);
      --CurrentThread->SpecialApcDisable;
      if ( !CurrentThread->AbEntrySummary )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v14 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, &v10[35], 0x70000000000LL, 0x7FFFFFFFFFLL);
          goto LABEL_73;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      }
      AbEntrySummary = CurrentThread->AbEntrySummary;
      _BitScanForward((unsigned int *)&v13, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v13);
      v7 = 96 * v13;
      v14 = (char *)CurrentThread->LockEntries + v7;
      if ( v14 )
      {
        if ( (unsigned __int64)&v10[0xE000000023LL] <= 0x7FFFFFFFFFLL )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process, AbEntrySummary);
        else
          SessionId = -1;
        *((_DWORD *)v14 + 10) = SessionId;
        v7 = 0x7FFFFFFFFFFFFFFCLL;
        *((_QWORD *)v14 + 4) = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
        v16 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v16;
        if ( !v16
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v7, AbEntrySummary, v9);
        }
        goto LABEL_20;
      }
LABEL_73:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
      goto LABEL_17;
    }
  }
  else
  {
    CcSetDirtyInMask(v7, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
