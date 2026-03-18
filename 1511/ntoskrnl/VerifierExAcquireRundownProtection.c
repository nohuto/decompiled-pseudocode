/*
 * XREFs of VerifierExAcquireRundownProtection @ 0x1406C0348
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierExAcquireRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  return pXdvExAcquireRundownProtection(RunRef);
}
