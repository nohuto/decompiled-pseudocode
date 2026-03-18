/*
 * XREFs of VerifierExAcquireRundownProtectionEx @ 0x1406C0360
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
