/*
 * XREFs of RtlLengthSid @ 0x14000C2AC
 * Callers:
 *     SepAppendAceToTokenObjectAcl @ 0x140406AA0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpCopyEffectiveAce @ 0x140421A80 (RtlpCopyEffectiveAce.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140478794 (ObpCaptureBoundaryDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478C40 (SeCaptureSidAndAttributesArray.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048CE88 (PiUEventInitClientRegistrationContext.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1404D72E0 (LookupSidInTable.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140529EC8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E018 (BiCreateKeySecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14055272C (ObpCreateDefaultObjectTypeSD.c)
 *     WdipSemSqmInit @ 0x140564898 (WdipSemSqmInit.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140570E50 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PfpCreateEvent @ 0x140572860 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140577398 (NtSetUuidSeed.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpGetDosDevicesProtection @ 0x140579E48 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B14C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpBuildAdminInformation @ 0x14060049C (CmpBuildAdminInformation.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140621068 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140623490 (IoCheckQuotaBufferValidity.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14063918C (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x140683A68 (RtlReplaceSidInSd.c)
 *     RtlpCreateServerAcl @ 0x140684304 (RtlpCreateServerAcl.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x14069492C (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406994F8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     LocalGetAceCondition @ 0x1406CB4C8 (LocalGetAceCondition.c)
 *     SddlAddMandatoryAce @ 0x1406CBE60 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406CBFB8 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406CC108 (SddlAddScopedPolicyIDAce.c)
 *     GetOperandValue @ 0x1406CCF20 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE88C (LocalGetRelativeAttributeForString.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFC6C (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1406E63A0 (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030B0 (ViInitializeLocalSystemDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSid(PSID Sid)
{
  return 4 * *((unsigned __int8 *)Sid + 1) + 8;
}
