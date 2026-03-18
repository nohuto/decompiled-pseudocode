/*
 * XREFs of KeReadStateSemaphore @ 0x14010D730
 * Callers:
 *     VerifierKeReadStateEvent @ 0x140748564 (VerifierKeReadStateEvent.c)
 *     VerifierKeReadStateMutex @ 0x14074856C (VerifierKeReadStateMutex.c)
 *     VerifierKeReadStateSemaphore @ 0x140748574 (VerifierKeReadStateSemaphore.c)
 *     VerifierKeReadStateTimer @ 0x14074857C (VerifierKeReadStateTimer.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateSemaphore(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
