/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400ACA60
 * Callers:
 *     SeSecurityAttributePresent @ 0x14000E300 (SeSecurityAttributePresent.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E570 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14000E740 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x1400A045C (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140234B30 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x14014DE90 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
