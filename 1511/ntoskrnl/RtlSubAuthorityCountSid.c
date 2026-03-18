/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14003D378
 * Callers:
 *     SepCheckCapabilities @ 0x1403B47E4 (SepCheckCapabilities.c)
 *     RtlGetAppContainerSidType @ 0x1403C09F4 (RtlGetAppContainerSidType.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x14046C368 (RtlpValidateSidBuffer.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1404B49E0 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     RtlReplaceSidInSd @ 0x140646B1C (RtlReplaceSidInSd.c)
 *     SeQueryObjectMandatoryLabel @ 0x14064DC70 (SeQueryObjectMandatoryLabel.c)
 *     LookupSidInTable @ 0x1406872B8 (LookupSidInTable.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
