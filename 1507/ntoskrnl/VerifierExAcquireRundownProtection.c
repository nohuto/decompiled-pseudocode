/*
 * XREFs of VerifierExAcquireRundownProtection @ 0x140741B3C
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
