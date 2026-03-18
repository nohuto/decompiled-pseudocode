/*
 * XREFs of VerifierRtlCompareUnicodeString @ 0x1406CF14C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall VerifierRtlCompareUnicodeString(
        PCUNICODE_STRING String1,
        PCUNICODE_STRING String2,
        BOOLEAN CaseInSensitive)
{
  return pXdvRtlCompareUnicodeString(String1, String2, CaseInSensitive);
}
