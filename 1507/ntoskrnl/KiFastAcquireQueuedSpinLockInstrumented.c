/*
 * XREFs of KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140052F60 (ExAcquireSharedStarveExclusive.c)
 *     ExpLockResource @ 0x14009D730 (ExpLockResource.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400D6534 (ExSetResourceOwnerPointerEx.c)
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140263AD8 (ExTryConvertSharedToExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x140263C1C (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x14025FBDC (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiFastAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, unsigned __int8 *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r9d
  int v5; // ebp
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned int InterruptCount; // r15d
  unsigned int v9; // r14d
  _QWORD *v10; // rdx
  char v11; // si
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned int v15; // [rsp+68h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v9 = v7;
  }
  else
  {
    v9 = v15;
    v6 = 0;
    InterruptCount = v15;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = (_QWORD *)_InterlockedExchange64(a2, a1);
  v11 = 0;
  if ( v10 )
  {
    v12 = KxWaitForLockOwnerShipWithIrql(a1, v10, a3);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v12;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v12;
    v11 = 1;
  }
  if ( v6 )
  {
    v13 = __rdtsc();
    PerfLogSpinLockAcquire(v5, v13, v13 - v9, v4, InterruptCount, 1);
  }
  return v11;
}
