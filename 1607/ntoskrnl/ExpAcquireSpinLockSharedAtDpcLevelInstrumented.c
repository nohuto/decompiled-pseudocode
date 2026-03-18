/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DDDC
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     ExpAddTagForBigPages @ 0x1400124D0 (ExpAddTagForBigPages.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiEndingOffsetWithLock @ 0x140023560 (MiEndingOffsetWithLock.c)
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     MiOffsetToProtos @ 0x140033070 (MiOffsetToProtos.c)
 *     MiQueryAddressState @ 0x140043000 (MiQueryAddressState.c)
 *     RtlpWalkFrameChain @ 0x14004F520 (RtlpWalkFrameChain.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400ECA30 (KiAbEntryGetLockedHeadEntry.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089C20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x140228678 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // r9d
  char v5; // si
  unsigned __int64 v6; // rax
  int InterruptCount; // r14d
  int v8; // ebp
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rax
  int v13; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
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
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  _m_prefetchw(a1);
  v10 = *a1 & 0x7FFFFFFF;
  v9 = _InterlockedCompareExchange(a1, v10 + 1, v10);
  if ( v10 != v9 )
  {
    v9 = ExpWaitForSpinLockSharedAndAcquire(a1, a2);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v3 = v9;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v9;
  }
  if ( v5 )
  {
    v11 = __rdtsc();
    LOBYTE(v9) = PerfLogSpinLockAcquire((__int64)a1, v11, v11 - v8, v3, InterruptCount, 2);
  }
  return v9;
}
