/*
 * XREFs of VerifierKeDeregisterNmiCallback @ 0x1406C096C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierKeDeregisterNmiCallback(PVOID Handle)
{
  return pXdvKeDeregisterNmiCallback(Handle);
}
