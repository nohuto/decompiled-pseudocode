/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x14048D16C
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400852B0 (RtlCheckTokenMembershipEx.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4EE0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404D67F8 (LocalConvertStringSDToSD_Rev1.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140570E50 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B14C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1406021A4 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFC6C (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
 *     SepInitSystemDacls @ 0x140791230 (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x14079C7B4 (WmipInitializeSecurity.c)
 *     SeMakeSystemToken @ 0x1407A2B10 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407A3058 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407A328C (SeMakeAnonymousLogonToken.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407B33F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407B375C (PiAuCreateStandardSecurityObject.c)
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
