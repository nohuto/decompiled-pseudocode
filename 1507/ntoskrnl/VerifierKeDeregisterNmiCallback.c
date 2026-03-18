/*
 * XREFs of VerifierKeDeregisterNmiCallback @ 0x140742164
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
