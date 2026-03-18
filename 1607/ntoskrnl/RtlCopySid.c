/*
 * XREFs of RtlCopySid @ 0x14041268C
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     SepGetSidValuesDump @ 0x14021B234 (SepGetSidValuesDump.c)
 *     SeQueryUserSidToken @ 0x1403FFC40 (SeQueryUserSidToken.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     SepGetLowBoxHandlesEntry @ 0x140475930 (SepGetLowBoxHandlesEntry.c)
 *     SepSetTokenPackage @ 0x1404769B4 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x140476BFC (SepGetLowBoxNumberEntry.c)
 *     SepAdjustGroups @ 0x1404774F0 (SepAdjustGroups.c)
 *     SepDuplicateSid @ 0x1404D0994 (SepDuplicateSid.c)
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 *     PspAssignProcessQuotaBlock @ 0x1404D7894 (PspAssignProcessQuotaBlock.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553AB8 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x14056EDCC (SeAuditProcessCreation.c)
 *     RtlAddResourceAttributeAce @ 0x140684700 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140684A24 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140692D48 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140695D78 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddMandatoryAce @ 0x1406CBE60 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CBFB8 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC108 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
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
