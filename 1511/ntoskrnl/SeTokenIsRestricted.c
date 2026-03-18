/*
 * XREFs of SeTokenIsRestricted @ 0x1400038F0
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckEx @ 0x1401359B4 (SepAccessCheckEx.c)
 *     NtCompareTokens @ 0x1403BE070 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x1403BE378 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1403BE3F0 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1403BE8B8 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
