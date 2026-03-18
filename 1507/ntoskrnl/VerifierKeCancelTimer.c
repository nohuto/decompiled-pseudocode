/*
 * XREFs of VerifierKeCancelTimer @ 0x1407480D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeCancelTimer(PKTIMER a1)
{
  return pXdvKeCancelTimer(a1);
}
