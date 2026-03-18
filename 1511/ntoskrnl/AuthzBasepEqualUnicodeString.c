/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x1400067F0
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140005D48 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A3A0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14009C450 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1403C57D8 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive();
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
