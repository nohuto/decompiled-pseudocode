/*
 * XREFs of AuthzBasepSecurityAttributePresent @ 0x140234258
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14000E2C0 (AuthzBasepFindSecurityAttribute.c)
 */

bool __fastcall AuthzBasepSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  return AuthzBasepFindSecurityAttribute(a1, a2) != 0LL;
}
