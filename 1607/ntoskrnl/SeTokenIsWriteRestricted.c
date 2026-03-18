/*
 * XREFs of SeTokenIsWriteRestricted @ 0x14007F750
 * Callers:
 *     NtCompareTokens @ 0x140475A20 (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14047600C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x14050F920 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((unsigned __int8 *)Token + 200) >> 3) & 1;
}
