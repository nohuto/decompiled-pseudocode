/*
 * XREFs of KeReadStateSemaphore @ 0x1400D9260
 * Callers:
 *     VerifierKeReadStateEvent @ 0x1406C61B0 (VerifierKeReadStateEvent.c)
 *     VerifierKeReadStateMutex @ 0x1406C61B8 (VerifierKeReadStateMutex.c)
 *     VerifierKeReadStateSemaphore @ 0x1406C61C0 (VerifierKeReadStateSemaphore.c)
 *     VerifierKeReadStateTimer @ 0x1406C61C8 (VerifierKeReadStateTimer.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeReadStateSemaphore(PKTIMER Timer)
{
  return Timer->Header.SignalState;
}
