/*
 * XREFs of SeTokenIsRestricted @ 0x14007F7C0
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckEx @ 0x140136360 (SepAccessCheckEx.c)
 *     NtCompareTokens @ 0x1404748F0 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x140474BB4 (SeTokenIsAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x140474C2C (NtImpersonateAnonymousToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140474EDC (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1404E6774 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenCanImpersonate @ 0x1404F28B0 (SeTokenCanImpersonate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
