/*
 * XREFs of VerifierKeReadStateTimer @ 0x14074857C
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
