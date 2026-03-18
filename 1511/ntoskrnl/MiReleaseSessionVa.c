/*
 * XREFs of MiReleaseSessionVa @ 0x1400EF034
 * Callers:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseSessionVa(__int64 a1, ULONG a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r15
  __int64 Process; // rcx
  ULONG_PTR v7; // r14
  struct _KTHREAD *v8; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int16 v13; // ax
  unsigned __int64 v14; // rdi
  struct _KPROCESS *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64)(a1 - qword_1402FE600) >> 21;
  v5 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  --CurrentThread->SpecialApcDisable;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  v7 = *(_QWORD *)(Process + 1024) + 7688LL;
  if ( !KiAbEnabled )
  {
    v11 = 0LL;
    goto LABEL_11;
  }
  v8 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v8, v7, KeGetCurrentIrql(), 0LL);
  --v8->SpecialApcDisable;
  if ( !v8->AbEntrySummary )
  {
    if ( !v8->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v8, v7);
      goto LABEL_26;
    }
    AbOrphanedEntrySummary = v8->AbOrphanedEntrySummary;
    v8->AbOrphanedEntrySummary = 0;
    v8->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v8->AbEntrySummary;
  _BitScanForward((unsigned int *)&v10, AbEntrySummary);
  v8->AbEntrySummary = AbEntrySummary & ~(1 << v10);
  Process = 96 * v10;
  v11 = (__int64)v8->LockEntries + Process;
  if ( !v11 )
  {
LABEL_26:
    _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v7 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (v16 = v8->ApcState.Process, (v17 = v16[1].ActiveProcessors.Bitmap[2]) == 0)
    || v16 == PsInitialSystemProcess )
  {
    v12 = -1;
  }
  else
  {
    v12 = *(_DWORD *)(v17 + 8);
  }
  *(_DWORD *)(v11 + 40) = v12;
  Process = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v11 + 32) = v7 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v13 = v8->SpecialApcDisable + 1;
  v8->SpecialApcDisable = v13;
  if ( !v13 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery(Process);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7, v11, v7);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  RtlClearBits((PRTL_BITMAP)(v5 + 7696), v4, a2);
  if ( (unsigned int)v4 < *(_DWORD *)(v5 + 7712) )
    *(_DWORD *)(v5 + 7712) = v4;
  *(_DWORD *)(v5 + 7820) -= a2;
  v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 7688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 7688));
  KeAbPostRelease(v14 + 7688);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
