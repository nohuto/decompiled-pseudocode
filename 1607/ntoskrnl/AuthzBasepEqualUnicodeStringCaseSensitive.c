/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400AAFC8
 * Callers:
 *     SeSecurityAttributePresent @ 0x14000DE80 (SeSecurityAttributePresent.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E0F0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14000E2C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x14009ED84 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
