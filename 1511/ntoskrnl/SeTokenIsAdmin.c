/*
 * XREFs of SeTokenIsAdmin @ 0x1403BE378
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140092DB0 (SepMandatorySubProcessToken.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x140445F6C (PspDisablePrimaryTokenExchange.c)
 *     PopUserIsAdmin @ 0x1404C6840 (PopUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x1400038F0 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  PSID v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, (__int64)SeAliasAdminsSid, 0LL, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, (__int64)v2, 0LL, 1, 0);
  }
  return v3;
}
