/*
 * XREFs of VerifierZwRecoverEnlistment @ 0x1406C0DB4
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
