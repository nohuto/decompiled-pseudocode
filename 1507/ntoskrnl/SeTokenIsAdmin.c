/*
 * XREFs of SeTokenIsAdmin @ 0x14040FEA8
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     PspSystemThreadStartup @ 0x1400DAAD4 (PspSystemThreadStartup.c)
 *     IoComputeRedirectionTrustLevel @ 0x1401F7B18 (IoComputeRedirectionTrustLevel.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     PopUserIsAdmin @ 0x14055D1DC (PopUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x1400078CC (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  PSID v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, (__int64)SeAliasAdminsSid, 0LL, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, (__int64)v2, 0LL, 1);
  }
  return v3;
}
