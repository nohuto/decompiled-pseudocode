/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x14009ED84
 * Callers:
 *     SeSecurityAttributePresent @ 0x14000DE80 (SeSecurityAttributePresent.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E0F0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14000E2C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14007C684 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1404AF514 (AuthzBasepFindSystemSecurityAttribute.c)
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
