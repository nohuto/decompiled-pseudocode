/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x1404784D0
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
