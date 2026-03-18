/*
 * XREFs of VerifierKeReadStateMutex @ 0x1406C61B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeReadStateMutex(PKTIMER Timer)
{
  return pXdvKeReadStateMutex(Timer);
}
