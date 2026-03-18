/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x1403C01DC
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x140003E78 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1401F6378 (RtlCheckTokenCapability.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1405E2E88 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x140606960 (PiAuCheckTokenMembership.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14068530C (LocalConvertStringSDToSD_Rev1.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 *     WmipInitializeSecurity @ 0x140752D78 (WmipInitializeSecurity.c)
 *     SeMakeSystemToken @ 0x14075BF7C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14075C4B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14075C6E4 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x14075E344 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140769C5C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Group,
        BOOLEAN GroupDefaulted)
{
  __int16 v4; // cx
  PSID v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 < 0 )
    return -1073741703;
  *((_QWORD *)SecurityDescriptor + 2) = 0LL;
  v5 = (PSID)*((_QWORD *)SecurityDescriptor + 2);
  if ( Group )
    v5 = Group;
  *((_QWORD *)SecurityDescriptor + 2) = v5;
  v6 = v4 & 0xFFFD;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( GroupDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 2;
  return 0;
}
