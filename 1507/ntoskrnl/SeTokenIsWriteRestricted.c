/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140125C48
 * Callers:
 *     NtCompareTokens @ 0x1404107DC (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406D0DBC (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((unsigned __int8 *)Token + 200) >> 3) & 1;
}
