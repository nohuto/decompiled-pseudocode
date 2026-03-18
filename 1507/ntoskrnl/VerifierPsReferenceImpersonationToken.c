/*
 * XREFs of VerifierPsReferenceImpersonationToken @ 0x14074245C
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
