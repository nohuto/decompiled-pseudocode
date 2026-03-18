/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140044DF4
 * Callers:
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14040F8F8 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     RtlGetAppContainerSidType @ 0x1404129AC (RtlGetAppContainerSidType.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x140470CDC (RtlpValidateSidBuffer.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     RtlReplaceSidInSd @ 0x1406C9B90 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
