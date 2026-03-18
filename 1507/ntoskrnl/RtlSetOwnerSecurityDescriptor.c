/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x140416F98
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400083BC (RtlCheckTokenMembershipEx.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056032C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 *     RtlpSysVolTakeOwnership @ 0x1406CC854 (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     WmipInitializeSecurity @ 0x1407B9F00 (WmipInitializeSecurity.c)
 *     SeMakeSystemToken @ 0x1407BC9E0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407BCF14 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407BD148 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x1407BEE60 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407DDE74 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Owner,
        BOOLEAN OwnerDefaulted)
{
  __int16 v4; // cx
  PSID v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 < 0 )
    return -1073741703;
  *((_QWORD *)SecurityDescriptor + 1) = 0LL;
  v5 = (PSID)*((_QWORD *)SecurityDescriptor + 1);
  if ( Owner )
    v5 = Owner;
  *((_QWORD *)SecurityDescriptor + 1) = v5;
  v6 = v4 & 0xFFFE;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( OwnerDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 1;
  return 0;
}
