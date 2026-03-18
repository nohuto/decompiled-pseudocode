/*
 * XREFs of RtlCopySid @ 0x1404793FC
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     SepGetSidValuesDump @ 0x1402016E8 (SepGetSidValuesDump.c)
 *     PspAssignProcessQuotaBlock @ 0x1403BD170 (PspAssignProcessQuotaBlock.c)
 *     SepGetLowBoxHandlesEntry @ 0x1403BDF84 (SepGetLowBoxHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x1403BEF4C (SepGetLowBoxNumberEntry.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     SepSetTokenPackage @ 0x1404792B0 (SepSetTokenPackage.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 *     SepDuplicateSid @ 0x140479564 (SepDuplicateSid.c)
 *     SepAdjustGroups @ 0x1404ADC94 (SepAdjustGroups.c)
 *     RtlAddProcessTrustLabelAce @ 0x140528188 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 *     RtlAddResourceAttributeAce @ 0x140644DCC (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406450F4 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1406539C4 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140656408 (SepInsertOrReferenceSharedSidEntries.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     SddlAddMandatoryAce @ 0x14068757C (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406876D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140687828 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
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
