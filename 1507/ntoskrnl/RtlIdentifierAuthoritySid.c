/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x140470AC0
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
