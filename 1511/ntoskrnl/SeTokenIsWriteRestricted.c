/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140003900
 * Callers:
 *     NtCompareTokens @ 0x1403BE070 (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1403BE8B8 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((unsigned __int8 *)Token + 200) >> 3) & 1;
}
