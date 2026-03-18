/*
 * XREFs of VerifierPsRestoreImpersonation @ 0x140742474
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierPsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  pXdvPsRestoreImpersonation(Thread, ImpersonationState);
}
