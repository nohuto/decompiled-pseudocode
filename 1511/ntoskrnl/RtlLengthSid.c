/*
 * XREFs of RtlLengthSid @ 0x140003E60
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1403BFF58 (PiUEventInitClientRegistrationContext.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     RtlpCopyEffectiveAce @ 0x140471F40 (RtlpCopyEffectiveAce.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     CmpBuildAdminInformation @ 0x140497598 (CmpBuildAdminInformation.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404AA488 (ObpCaptureBoundaryDescriptor.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1404EB988 (RtlpSysVolCreateSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1404FD2BC (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140515DF8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 *     WdipSemSqmInit @ 0x140532950 (WdipSemSqmInit.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PfpCreateEvent @ 0x14054149C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140543400 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1405F7360 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1405F9B18 (IoCheckQuotaBufferValidity.c)
 *     PiAuCheckTokenMembership @ 0x140606960 (PiAuCheckTokenMembership.c)
 *     RtlReplaceSidInSd @ 0x140646B1C (RtlReplaceSidInSd.c)
 *     RtlpCreateServerAcl @ 0x1406473B4 (RtlpCreateServerAcl.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406552F4 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14065B8CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406696D0 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     LocalGetAceCondition @ 0x1406856FC (LocalGetAceCondition.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1406872B8 (LookupSidInTable.c)
 *     SddlAddMandatoryAce @ 0x14068757C (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406876D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140687828 (SddlAddScopedPolicyIDAce.c)
 *     GetOperandValue @ 0x1406886A0 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x14068A048 (LocalGetRelativeAttributeForString.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1406B78B8 (ViInitializeLocalSystemDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSid(PSID Sid)
{
  return 4 * *((unsigned __int8 *)Sid + 1) + 8;
}
