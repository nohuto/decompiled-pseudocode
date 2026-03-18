/*
 * XREFs of VerifierKeReadStateMutex @ 0x14074856C
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
