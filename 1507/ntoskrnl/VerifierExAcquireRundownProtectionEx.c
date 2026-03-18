/*
 * XREFs of VerifierExAcquireRundownProtectionEx @ 0x140741B54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  return pXdvExAcquireRundownProtectionEx(RunRef, Count);
}
