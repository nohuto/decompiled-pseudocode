/*
 * XREFs of VerifierZwRecoverEnlistment @ 0x1407425F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  return pXdvZwRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
}
