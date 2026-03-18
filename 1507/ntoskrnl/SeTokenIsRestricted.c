/*
 * XREFs of SeTokenIsRestricted @ 0x140007C40
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckEx @ 0x1401620E4 (SepAccessCheckEx.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x14040FC40 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsAdmin @ 0x14040FEA8 (SeTokenIsAdmin.c)
 *     NtCompareTokens @ 0x1404107DC (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406D0DBC (SepNewTokenAsRestrictedAsProcessToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
