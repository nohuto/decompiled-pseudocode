/*
 * XREFs of AuthzBasepSecurityAttributePresent @ 0x14023442C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000E3E0 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14000E740 (AuthzBasepFindSecurityAttribute.c)
 */

bool __fastcall AuthzBasepSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  return AuthzBasepFindSecurityAttribute(a1, a2) != 0LL;
}
