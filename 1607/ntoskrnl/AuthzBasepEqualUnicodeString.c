/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x1400A045C
 * Callers:
 *     SeSecurityAttributePresent @ 0x14000E300 (SeSecurityAttributePresent.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14000E570 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14000E740 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x14007C604 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1404C9794 (AuthzBasepFindSystemSecurityAttribute.c)
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
