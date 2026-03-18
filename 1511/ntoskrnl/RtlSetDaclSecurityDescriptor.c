/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x140478384
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x140003E78 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x140134478 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1401F6378 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402005BC (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14020CB70 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14021DBB4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1403BF560 (ObpVerifyAccessToBoundaryEntry.c)
 *     PiUEventInitClientRegistrationContext @ 0x1403BFF58 (PiUEventInitClientRegistrationContext.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1403C0714 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1403C07F4 (IopCreateSecurityDescriptorPerType.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PopCreateNotificationName @ 0x1404C3F44 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1404EB988 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1404EBADC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     BiCreateKeySecurityDescriptor @ 0x1404FD2BC (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14051E8D8 (CmpAdminSystemSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PfpCreateEvent @ 0x14054149C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140543400 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140549098 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1405E2E88 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x140606960 (PiAuCheckTokenMembership.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140655498 (SepBuildObjectSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14065B8CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406696D0 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     CMFCreateSecurityDescriptor @ 0x140675F40 (CMFCreateSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14068530C (LocalConvertStringSDToSD_Rev1.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1406B78B8 (ViInitializeLocalSystemDescriptor.c)
 *     MiCreateMemoryEvent @ 0x14074D1CC (MiCreateMemoryEvent.c)
 *     WmipInitializeSecurity @ 0x140752D78 (WmipInitializeSecurity.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     MiSystemPartitionObjectCreate @ 0x14075A6E8 (MiSystemPartitionObjectCreate.c)
 *     DbgkpCreateNotificationEvent @ 0x14075AC8C (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x14075AE80 (ExpKeyedEventInitialization.c)
 *     SeMakeSystemToken @ 0x14075BF7C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14075C4B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14075C6E4 (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x14075C938 (BuildKnownDlls.c)
 *     SepInitSystemDacls @ 0x14075E344 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140769C5C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
 *     ObpGetDosDevicesProtection @ 0x14076D55C (ObpGetDosDevicesProtection.c)
 *     PopUmpoInitializeChannel @ 0x14076F050 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN DaclPresent,
        PACL Dacl,
        BOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  PACL v7; // rax
  __int16 v8; // cx
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( DaclPresent )
    {
      *((_QWORD *)SecurityDescriptor + 4) = 0LL;
      v6 = v5 | 4;
      v7 = (PACL)*((_QWORD *)SecurityDescriptor + 4);
      if ( Dacl )
        v7 = Dacl;
      *((_QWORD *)SecurityDescriptor + 4) = v7;
      v8 = v6 & 0xFFF7;
      *((_WORD *)SecurityDescriptor + 1) = v8;
      if ( !DaclDefaulted )
        return 0;
      v10 = v8 | 8;
    }
    else
    {
      v10 = v5 & 0xFFFB;
    }
    *((_WORD *)SecurityDescriptor + 1) = v10;
    return 0;
  }
  return -1073741703;
}
