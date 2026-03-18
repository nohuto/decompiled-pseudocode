/*
 * XREFs of VerifierPsReferencePrimaryToken @ 0x140742464
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PACCESS_TOKEN __stdcall VerifierPsReferencePrimaryToken(PEPROCESS Process)
{
  return pXdvPsReferencePrimaryToken(Process);
}
