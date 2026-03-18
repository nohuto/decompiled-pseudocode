/*
 * XREFs of VerifierKeReadStateSemaphore @ 0x1406C61C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeReadStateSemaphore(PKTIMER Timer)
{
  return pXdvKeReadStateSemaphore(Timer);
}
