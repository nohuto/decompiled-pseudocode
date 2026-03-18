/*
 * XREFs of RtlLengthSid @ 0x1400CE984
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     RtlpCopyEffectiveAce @ 0x140435120 (RtlpCopyEffectiveAce.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14046FBA0 (ObpCaptureBoundaryDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1405601D8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     WdipSemSqmInit @ 0x1405ADE34 (WdipSemSqmInit.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     CmpBuildAdminInformation @ 0x140657B40 (CmpBuildAdminInformation.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140671158 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140673DA4 (IoCheckQuotaBufferValidity.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1406C9B90 (RtlReplaceSidInSd.c)
 *     RtlpCreateServerAcl @ 0x1406CA428 (RtlpCreateServerAcl.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406D71A0 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406DE120 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406ECC64 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     LocalGetAceCondition @ 0x140709E98 (LocalGetAceCondition.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140737BD4 (ViInitializeLocalSystemDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSid(PSID Sid)
{
  return 4 * *((unsigned __int8 *)Sid + 1) + 8;
}
