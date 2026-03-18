/*
 * XREFs of VerifierRtlEqualUnicodeString @ 0x140752CF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierRtlEqualUnicodeString(
        PCUNICODE_STRING String1,
        PCUNICODE_STRING String2,
        BOOLEAN CaseInSensitive)
{
  return pXdvRtlEqualUnicodeString(String1, String2, CaseInSensitive);
}
