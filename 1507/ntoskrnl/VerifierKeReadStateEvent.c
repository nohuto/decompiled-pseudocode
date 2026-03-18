/*
 * XREFs of VerifierKeReadStateEvent @ 0x140748564
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
