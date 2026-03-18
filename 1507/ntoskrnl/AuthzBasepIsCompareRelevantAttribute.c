/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x14041056C
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404104AC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_140290038, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
