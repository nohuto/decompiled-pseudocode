/*
 * XREFs of VerifierRtlUnicodeToUTF8N @ 0x1406CF3B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierRtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  return pXdvRtlUnicodeToUTF8N(
           UTF8StringDestination,
           UTF8StringMaxByteCount,
           UTF8StringActualByteCount,
           UnicodeStringSource,
           UnicodeStringByteCount);
}
