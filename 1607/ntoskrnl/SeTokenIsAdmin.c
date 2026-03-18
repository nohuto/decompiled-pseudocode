/*
 * XREFs of SeTokenIsAdmin @ 0x140475CE4
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14007C05C (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x1401CA2FC (IoComputeRedirectionTrustLevel.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x140459688 (PspDisablePrimaryTokenExchange.c)
 *     PopUserIsAdmin @ 0x14051D2C4 (PopUserIsAdmin.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x14007F740 (SeTokenIsRestricted.c)
 *     SepSidInToken @ 0x1400C45A4 (SepSidInToken.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  PSID v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, SeAliasAdminsSid, 0, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, v2, 0, 1, 0);
  }
  return v3;
}
