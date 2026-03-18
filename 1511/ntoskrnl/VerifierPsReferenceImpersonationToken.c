/*
 * XREFs of VerifierPsReferenceImpersonationToken @ 0x1406C0C1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PACCESS_TOKEN __stdcall VerifierPsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return pXdvPsReferenceImpersonationToken(Thread, CopyOnOpen, EffectiveOnly, ImpersonationLevel);
}
