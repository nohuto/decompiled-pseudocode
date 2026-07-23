/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14022DE28
 * Callers:
 *     ExTryConvertSharedSpinLockExclusive @ 0x140099D60 (ExTryConvertSharedSpinLockExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     PerfLogSpinLockAcquire @ 0x1402284A4 (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x140228518 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v5; // bp
  unsigned __int64 v6; // rax
  int InterruptCount; // r15d
  int v8; // r14d
  signed __int32 v9; // edx
  volatile signed __int32 v10; // eax
  bool v11; // zf
  signed __int32 v12; // eax
  int v13; // esi
  __int64 v14; // rax
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

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
    v8 = v16;
    v5 = 0;
    InterruptCount = v16;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v9 = *a1;
  v10 = *a1;
  LODWORD(v16) = 0;
  if ( (v10 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v9 & 0x40000000) == 0 )
      {
        v12 = _InterlockedCompareExchange(a1, v9 | 0x40000000, v9);
        v11 = v9 == v12;
        v9 = v12;
        if ( !v11 )
          continue;
      }
      KeYieldProcessorEx(&v16);
      v9 = *a1;
    }
    while ( (v9 & 0xBFFFFFFF) != 0x80000001 );
  }
  v13 = v16;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v16;
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  if ( v5 )
  {
    PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
    v14 = __rdtsc();
    PerfLogSpinLockAcquire((__int64)a1, v14, v14 - v8, v13, InterruptCount, 4);
  }
  return 1LL;
}
