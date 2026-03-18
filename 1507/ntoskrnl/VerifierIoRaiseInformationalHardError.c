/*
 * XREFs of VerifierIoRaiseInformationalHardError @ 0x140741FB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierIoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  return pXdvIoRaiseInformationalHardError(ErrorStatus, String, Thread);
}
