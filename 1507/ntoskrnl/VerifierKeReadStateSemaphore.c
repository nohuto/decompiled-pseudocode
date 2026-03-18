/*
 * XREFs of VerifierKeReadStateSemaphore @ 0x140748574
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
