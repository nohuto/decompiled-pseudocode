/*
 * XREFs of VerifierPsReferencePrimaryToken @ 0x1406C0C24
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
