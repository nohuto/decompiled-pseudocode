/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x1400D02D0
 * Callers:
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CFE18 (KiDeferGroupSchedulingPreemption.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400CFFB0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D20C0 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     <none>
 */

char __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1 )
    return 1;
  return result;
}
