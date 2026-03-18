/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x140413ED0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14007C05C (SepMandatorySubProcessToken.c)
 *     RtlCheckTokenMembershipEx @ 0x1400852B0 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x14013C60C (SepInitProcessAuditSd.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4EE0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x140219AA4 (SepBuildCapeSecurityDescriptor.c)
 *     SepVerifyDesktopAppxImage @ 0x140219CAC (SepVerifyDesktopAppxImage.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140406AA0 (SepAppendAceToTokenObjectAcl.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14047391C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404739FC (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1404793C8 (ObpVerifyAccessToBoundaryEntry.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14047ADB4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048CE88 (PiUEventInitClientRegistrationContext.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404D67F8 (LocalConvertStringSDToSD_Rev1.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140529EC8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E018 (BiCreateKeySecurityDescriptor.c)
 *     PopCreateNotificationName @ 0x140545198 (PopCreateNotificationName.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055E548 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055E73C (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056E550 (PopCreateHiberFileSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140570E50 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PfpCreateEvent @ 0x140572860 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140577398 (NtSetUuidSeed.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpGetDosDevicesProtection @ 0x140579E48 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B14C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1406021A4 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 *     RtlpSysVolTakeOwnership @ 0x140688D98 (RtlpSysVolTakeOwnership.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140694AD0 (SepBuildObjectSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406994F8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B889C (CMFCreateSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFC6C (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1406E63A0 (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030B0 (ViInitializeLocalSystemDescriptor.c)
 *     SepInitSystemDacls @ 0x140791230 (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x14079C7B4 (WmipInitializeSecurity.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     MiSystemPartitionObjectCreate @ 0x1407A13BC (MiSystemPartitionObjectCreate.c)
 *     DbgkpCreateNotificationEvent @ 0x1407A1950 (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x1407A1B44 (ExpKeyedEventInitialization.c)
 *     SeMakeSystemToken @ 0x1407A2B10 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407A3058 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407A328C (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 *     MiCreateMemoryEvent @ 0x1407A45F0 (MiCreateMemoryEvent.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407B33F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407B375C (PiAuCreateStandardSecurityObject.c)
 *     PopUmpoInitializeChannel @ 0x1407B93C4 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

NTSTATUS __stdcall RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  memset(SecurityDescriptor, 0, 0x28uLL);
  result = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
