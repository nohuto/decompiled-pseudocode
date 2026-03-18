/*
 * XREFs of VerifierZwClose @ 0x1406C0D1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwClose(HANDLE Handle)
{
  return pXdvZwClose(Handle);
}
