/*
 * XREFs of VerifierKeReadStateTimer @ 0x1406C61C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeReadStateTimer(PKTIMER Timer)
{
  return pXdvKeReadStateTimer(Timer);
}
