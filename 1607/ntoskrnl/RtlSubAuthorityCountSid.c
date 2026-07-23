/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14002CDC8
 * Callers:
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x140478178 (RtlpValidateSidBuffer.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x14047AA30 (RtlGetAppContainerSidType.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14047B964 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     LookupSidInTable @ 0x1404BA8E4 (LookupSidInTable.c)
 *     SeQueryMandatoryLabel @ 0x1404BC628 (SeQueryMandatoryLabel.c)
 *     RtlReplaceSidInSd @ 0x140683B4C (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
