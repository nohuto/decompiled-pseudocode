/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140264370
 * Callers:
 *     ExpAddTagForBigPages @ 0x140046960 (ExpAddTagForBigPages.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14025B3F8 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140263FC4 (ExTryConvertSharedSpinLockExclusive.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     PerfLogSpinLockAcquire @ 0x14025FBDC (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x14025FC50 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v5; // bp
  unsigned __int64 v6; // rax
  int InterruptCount; // r15d
  int v8; // r14d
  signed __int32 v9; // edx
  unsigned int v10; // esi
  __int64 v11; // rax
  int v13; // [rsp+70h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v8 = v6;
  }
  else
  {
    v8 = v13;
    v5 = 0;
    InterruptCount = v13;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v9 = *a1;
  v10 = 0;
  while ( (v9 & 0xBFFFFFFF) != 0x80000001 )
  {
    if ( (v9 & 0x40000000) == 0 )
      _InterlockedCompareExchange(a1, v9 | 0x40000000, v9);
    if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v10);
    v9 = *a1;
  }
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v10;
  if ( v5 )
  {
    PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
    v11 = __rdtsc();
    PerfLogSpinLockAcquire((__int64)a1, v11, v11 - v8, v10, InterruptCount, 4);
  }
  return 1LL;
}
