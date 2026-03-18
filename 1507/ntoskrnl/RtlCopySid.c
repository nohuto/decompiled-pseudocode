/*
 * XREFs of RtlCopySid @ 0x140438C64
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     SepGetSidValuesDump @ 0x1402506C0 (SepGetSidValuesDump.c)
 *     SepGetLowBoxHandlesEntry @ 0x1404106F0 (SepGetLowBoxHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepSetTokenPackage @ 0x1404370F0 (SepSetTokenPackage.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     SepAdjustGroups @ 0x14053FCC8 (SepAdjustGroups.c)
 *     PspAssignProcessQuotaBlock @ 0x140543A18 (PspAssignProcessQuotaBlock.c)
 *     SepDuplicateSid @ 0x1405448BC (SepDuplicateSid.c)
 *     RtlAddProcessTrustLabelAce @ 0x14059509C (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     RtlAddResourceAttributeAce @ 0x1406C7E58 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406C8180 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1406D5870 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406D8520 (SepInsertOrReferenceSharedSidEntries.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
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
