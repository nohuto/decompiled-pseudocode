/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x1404C2944
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404C288C (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_14023D6E0, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
