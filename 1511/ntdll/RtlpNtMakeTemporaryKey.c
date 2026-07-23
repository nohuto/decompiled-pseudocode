/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x1800EE590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlpNtMakeTemporaryKey(HANDLE KeyHandle)
{
  return NtDeleteKey(KeyHandle);
}
