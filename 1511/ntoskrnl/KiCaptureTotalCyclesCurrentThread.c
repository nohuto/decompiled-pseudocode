/*
 * XREFs of KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0
 * Callers:
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KeRemovePriorityBoost @ 0x1401C2FDC (KeRemovePriorityBoost.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 */

__int64 __fastcall KiCaptureTotalCyclesCurrentThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  bool v7; // zf

  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  result = __rdtsc();
  v4 = result - *(_QWORD *)(a1 + 23352);
  v5 = *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) += v4;
  v6 = v4 + v5;
  if ( v6 > 0xFFFFFFFF )
    LODWORD(v6) = -1;
  *(_QWORD *)(a1 + 23352) = result;
  v7 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v6;
  if ( !v7 )
    result = KiEndThreadAccountingPeriod(a1, a2);
  _enable();
  return result;
}
