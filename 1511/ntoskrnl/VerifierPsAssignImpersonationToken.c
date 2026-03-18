/*
 * XREFs of VerifierPsAssignImpersonationToken @ 0x1406C0BE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsAssignImpersonationToken(PETHREAD Thread, HANDLE Token)
{
  return pXdvPsAssignImpersonationToken(Thread, Token);
}
