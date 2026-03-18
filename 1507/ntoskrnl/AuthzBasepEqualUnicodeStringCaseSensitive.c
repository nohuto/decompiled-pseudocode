/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14026A770
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140015C80 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepEqualUnicodeString @ 0x14002CD80 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140044FA0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14004E5A0 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14026A3C0 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x140172AE0 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
