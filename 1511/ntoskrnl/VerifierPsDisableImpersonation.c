/*
 * XREFs of VerifierPsDisableImpersonation @ 0x1406C0C04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierPsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  return pXdvPsDisableImpersonation(Thread, ImpersonationState);
}
