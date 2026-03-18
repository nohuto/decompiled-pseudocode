/*
 * XREFs of CcSetDirtyPinnedData @ 0x14001FFA0
 * Callers:
 *     CcZeroDataInCache @ 0x140015F4C (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E4134 (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1401A9140 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x1404A8D18 (CcPreparePinWrite.c)
 *     HvViewMapFlush @ 0x1405EB080 (HvViewMapFlush.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400AFA68 (CcInsertIntoDirtySharedCacheMapList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x1400B2C7C (CcChargeDirtyPages.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v2; // ax
  __int64 AbEntrySummary; // rdx
  char *v6; // r14
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
  unsigned int v27; // esi
  unsigned __int64 v28; // rdx
  __int64 AbOrphanedEntrySummary; // rax
  _QWORD v30[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_WORD *)BcbVoid;
  AbEntrySummary = 762LL;
  if ( *(_WORD *)BcbVoid != 765 && v2 != 762 )
    KeBugCheckEx(0x34u, 0xDC4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (char *)v30;
  v30[0] = BcbVoid;
  v30[1] = 0LL;
  if ( v2 == 762 )
    v6 = (char *)BcbVoid + 16;
  v7 = *(_QWORD *)(*(_QWORD *)v6 + 176LL);
  if ( (*(_DWORD *)(v7 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) == -1LL )
  {
    AbEntrySummary = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
  }
  if ( (*(_DWORD *)(v7 + 152) & 0x200) != 0 )
  {
    v8 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 )
    {
      while ( 1 )
      {
        v30[0] = v8;
        v6 += 8;
        v9 = 0x70000000000LL;
        if ( (v8 & 1) != 0 )
          KeBugCheckEx(0x34u, 0xE23uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
        v19 = v30[0];
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
            CcInsertIntoDirtySharedCacheMapList(v10);
          }
          CcChargeDirtyPages(v10, 0LL, 0LL, v25);
          KeReleaseQueuedSpinLock(5uLL, v26);
          if ( (v10[19].LowPart & 0x10000000) != 0 )
          {
            v27 = v25 << 12;
            v28 = KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[6];
            if ( v28 )
            {
              if ( v27 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8), v27);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 24), 1uLL);
              v19 = v30[0];
            }
            else
            {
              v19 = v30[0];
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
        v8 = *(_QWORD *)v6;
        if ( !*(_QWORD *)v6 )
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
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, &v10[35]);
          goto LABEL_59;
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
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *((_DWORD *)v14 + 10) = SessionId;
        v7 = 0x7FFFFFFFFFFFFFFCLL;
        *((_QWORD *)v14 + 4) = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
        v16 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v16;
        if ( !v16
          && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v7, AbEntrySummary, v9);
        }
        goto LABEL_20;
      }
LABEL_59:
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
      goto LABEL_17;
    }
  }
  else
  {
    CcSetDirtyInMask(v7, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
