/*
 * XREFs of VerifierRtlHashUnicodeString @ 0x140752D14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierRtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  return pXdvRtlHashUnicodeString(String, CaseInSensitive, HashAlgorithm, HashValue);
}
