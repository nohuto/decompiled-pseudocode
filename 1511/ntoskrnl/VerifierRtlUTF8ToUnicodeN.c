/*
 * XREFs of VerifierRtlUTF8ToUnicodeN @ 0x1406CF2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierRtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  return pXdvRtlUTF8ToUnicodeN(
           UnicodeStringDestination,
           UnicodeStringMaxByteCount,
           UnicodeStringActualByteCount,
           UTF8StringSource,
           UTF8StringByteCount);
}
