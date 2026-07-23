/*
 * XREFs of RtlCopySid @ 0x14041154C
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     SepGetSidValuesDump @ 0x14021B060 (SepGetSidValuesDump.c)
 *     SeQueryUserSidToken @ 0x1403FEB00 (SeQueryUserSidToken.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     SepGetLowBoxHandlesEntry @ 0x140474800 (SepGetLowBoxHandlesEntry.c)
 *     SepSetTokenPackage @ 0x140475884 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     SepAdjustGroups @ 0x1404763C0 (SepAdjustGroups.c)
 *     SepDuplicateSid @ 0x1404B4434 (SepDuplicateSid.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553FF8 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 *     RtlAddResourceAttributeAce @ 0x1406847E4 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140684B08 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140692E2C (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140695E5C (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddMandatoryAce @ 0x1406CBF98 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CC0F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC240 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
