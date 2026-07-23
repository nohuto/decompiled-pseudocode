/*
 * XREFs of RtlLengthSid @ 0x14000BE2C
 * Callers:
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpCopyEffectiveAce @ 0x140420940 (RtlpCopyEffectiveAce.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140477664 (ObpCaptureBoundaryDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048D918 (PiUEventInitClientRegistrationContext.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1404BA8E4 (LookupSidInTable.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14052A408 (RtlpSysVolCreateSecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140535FE4 (MiSessionObjectCreate.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E558 (BiCreateKeySecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140552C6C (ObpCreateDefaultObjectTypeSD.c)
 *     WdipSemSqmInit @ 0x140564DD8 (WdipSemSqmInit.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PfpCreateEvent @ 0x140572DA0 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1405778D8 (NtSetUuidSeed.c)
 *     ObpInitializeRootNamespace @ 0x140579EB4 (ObpInitializeRootNamespace.c)
 *     ObpGetDosDevicesProtection @ 0x14057A388 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 *     CmpBuildAdminInformation @ 0x140600550 (CmpBuildAdminInformation.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14062111C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140623544 (IoCheckQuotaBufferValidity.c)
 *     PiAuCheckTokenMembership @ 0x140630E2C (PiAuCheckTokenMembership.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140639240 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x140683B4C (RtlReplaceSidInSd.c)
 *     RtlpCreateServerAcl @ 0x1406843E8 (RtlpCreateServerAcl.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x140694A10 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406995DC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AEE8C (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     LocalGetAceCondition @ 0x1406CB600 (LocalGetAceCondition.c)
 *     SddlAddMandatoryAce @ 0x1406CBF98 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CC0F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC240 (SddlAddScopedPolicyIDAce.c)
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE9C4 (LocalGetRelativeAttributeForString.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1406E64D8 (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030E0 (ViInitializeLocalSystemDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSid(PSID Sid)
{
  return 4 * *((unsigned __int8 *)Sid + 1) + 8;
}
