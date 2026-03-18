/*
 * XREFs of KiCaptureTotalCyclesCurrentThread @ 0x1400D0C00
 * Callers:
 *     KeRemoveQueueEx @ 0x14006A3B0 (KeRemoveQueueEx.c)
 *     KiReadyOutSwappedThreads @ 0x140091140 (KiReadyOutSwappedThreads.c)
 *     NtYieldExecution @ 0x140091AF0 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x1400CB720 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1400F2960 (KiCheckForThreadDispatch.c)
 *     KeRemovePriorityBoost @ 0x1401D2D10 (KeRemovePriorityBoost.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D2750 (KiEndThreadAccountingPeriod.c)
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
    result = KiEndThreadAccountingPeriod(a1, a2, v4, a2);
  _enable();
  return result;
}
