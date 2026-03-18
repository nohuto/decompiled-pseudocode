/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14021AC1C
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x1400067F0 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A3A0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14009C450 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14021A86C (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x140144AB0 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
