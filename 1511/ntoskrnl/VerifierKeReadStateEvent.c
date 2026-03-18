/*
 * XREFs of VerifierKeReadStateEvent @ 0x1406C61B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeReadStateEvent(PKTIMER Timer)
{
  return pXdvKeReadStateEvent(Timer);
}
