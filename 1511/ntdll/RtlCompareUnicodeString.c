/*
 * XREFs of RtlCompareUnicodeString @ 0x18002EFD0
 * Callers:
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 */

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  return RtlCompareUnicodeStrings(
           String1->Buffer,
           (unsigned __int64)String1->Length >> 1,
           String2->Buffer,
           (unsigned __int64)String2->Length >> 1,
           CaseInSensitive);
}
