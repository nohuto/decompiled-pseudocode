/*
 * XREFs of VerifierZwClose @ 0x14074255C
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
