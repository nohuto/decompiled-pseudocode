/*
 * XREFs of VerifierPsAssignImpersonationToken @ 0x140742424
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
