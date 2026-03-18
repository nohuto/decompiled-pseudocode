/*
 * XREFs of VerifierPsImpersonateClient @ 0x140742454
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return pXdvPsImpersonateClient(Thread, Token, CopyOnOpen, EffectiveOnly, ImpersonationLevel);
}
