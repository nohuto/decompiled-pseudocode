/*
 * XREFs of SmWdStopMonitoring @ 0x140258870
 * Callers:
 *     SmKmStoreDelete @ 0x1404FA05C (SmKmStoreDelete.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall SmWdStopMonitoring(PKTIMER a1)
{
  return KeCancelTimer(a1);
}
