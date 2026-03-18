/*
 * XREFs of AuthzBasepSecurityAttributePresent @ 0x14009C438
 * Callers:
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     SeSecurityAttributePresent @ 0x140470FCC (SeSecurityAttributePresent.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14009C450 (AuthzBasepFindSecurityAttribute.c)
 */

bool __fastcall AuthzBasepSecurityAttributePresent(__int64 a1, __int64 a2)
{
  return AuthzBasepFindSecurityAttribute(a1, a2) != 0;
}
