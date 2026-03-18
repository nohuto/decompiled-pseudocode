/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x1404D0440
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400083BC (RtlCheckTokenMembershipEx.c)
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitProcessAuditSd @ 0x14015EE30 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024F4BC (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14025BE34 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140413138 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14041374C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14041382C (IopCreateSecurityDescriptorPerType.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     PopCreateNotificationName @ 0x1404EB758 (PopCreateNotificationName.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1405601D8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A4EAC (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405C0314 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 *     RtlpSysVolTakeOwnership @ 0x1406CC854 (RtlpSysVolTakeOwnership.c)
 *     SepBuildObjectSecurityDescriptor @ 0x1406D7344 (SepBuildObjectSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406DE120 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406ECC64 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140737BD4 (ViInitializeLocalSystemDescriptor.c)
 *     WmipInitializeSecurity @ 0x1407B9F00 (WmipInitializeSecurity.c)
 *     SeMakeSystemToken @ 0x1407BC9E0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407BCF14 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407BD148 (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x1407BD39C (BuildKnownDlls.c)
 *     SepInitSystemDacls @ 0x1407BEE60 (SepInitSystemDacls.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     MiSystemPartitionObjectCreate @ 0x1407C4068 (MiSystemPartitionObjectCreate.c)
 *     MiCreateMemoryEvent @ 0x1407CAF9C (MiCreateMemoryEvent.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407DDE74 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
 *     DbgkpCreateNotificationEvent @ 0x1407DE814 (DbgkpCreateNotificationEvent.c)
 *     ObpGetDosDevicesProtection @ 0x1407E27EC (ObpGetDosDevicesProtection.c)
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
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
