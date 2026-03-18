/*
 * XREFs of SeTokenIsRestricted @ 0x14007F740
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckEx @ 0x140135DF0 (SepAccessCheckEx.c)
 *     NtCompareTokens @ 0x140475A20 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x140475CE4 (SeTokenIsAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14047600C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405037E4 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenCanImpersonate @ 0x14050F920 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
