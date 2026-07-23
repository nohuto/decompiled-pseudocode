/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x140475768
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404756B0 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_1402572C0, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
