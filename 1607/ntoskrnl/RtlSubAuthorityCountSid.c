/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14002D248
 * Callers:
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x1404792A8 (RtlpValidateSidBuffer.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x14047BB60 (RtlGetAppContainerSidType.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14047CA94 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     LookupSidInTable @ 0x1404D72E0 (LookupSidInTable.c)
 *     SeQueryMandatoryLabel @ 0x1404D9024 (SeQueryMandatoryLabel.c)
 *     RtlReplaceSidInSd @ 0x140683A68 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
