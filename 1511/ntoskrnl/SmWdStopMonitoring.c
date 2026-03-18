/*
 * XREFs of SmWdStopMonitoring @ 0x1402096E0
 * Callers:
 *     SmKmStoreDelete @ 0x1404D1364 (SmKmStoreDelete.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall SmWdStopMonitoring(PKTIMER a1)
{
  return KeCancelTimer(a1);
}
