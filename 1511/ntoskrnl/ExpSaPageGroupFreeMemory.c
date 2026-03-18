/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x14012E86C
 * Callers:
 *     ExpSaAllocatorFree @ 0x14012E754 (ExpSaAllocatorFree.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r15
  ULONG_PTR v4; // rsi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // eax
  __int16 v11; // ax
  bool v12; // di
  struct _KPROCESS *Process; // rax
  unsigned __int64 v15; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  v3 = a3;
  v4 = a1 + 24;
  v5 = a1;
  if ( !KiAbEnabled )
  {
    v9 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 24);
      goto LABEL_25;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  a1 = 96 * v8;
  v9 = (__int64)CurrentThread->LockEntries + a1;
  if ( !v9 )
  {
LABEL_25:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v4 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = CurrentThread->ApcState.Process, (v15 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v10 = -1;
  }
  else
  {
    v10 = *(_DWORD *)(v15 + 8);
  }
  *(_DWORD *)(v9 + 40) = v10;
  a1 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v9 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v11 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v11;
  if ( !v11 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v9, v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  RtlClearBitsEx(v5 + 48, (a2 >> 4) & 0x1FF, v3);
  *(_DWORD *)(v5 + 36) += v3;
  v12 = *(_DWORD *)(v5 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease(v4);
  return v12;
}
