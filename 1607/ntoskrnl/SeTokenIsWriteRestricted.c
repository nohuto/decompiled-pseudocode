/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14007F7D0
 * Callers:
 *     NtCompareTokens @ 0x1404748F0 (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x140474C2C (NtImpersonateAnonymousToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140474EDC (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1404F28B0 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((unsigned __int8 *)Token + 200) >> 3) & 1;
}
