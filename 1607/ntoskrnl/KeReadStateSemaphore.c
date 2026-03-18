/*
 * XREFs of KeReadStateSemaphore @ 0x140096E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateSemaphore(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
