/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x14002CD80
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140015C80 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14002BEC0 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14002CCFC (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140044FA0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14004E5A0 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x14053A2D8 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, a2);
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
