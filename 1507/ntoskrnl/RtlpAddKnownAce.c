/*
 * XREFs of RtlpAddKnownAce @ 0x1404C94D0
 * Callers:
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404C9270 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1405601D8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x1405B5938 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x1405B59C0 (RtlAddAccessDeniedAceEx.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1406C7CF0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1406C7D4C (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1406C7DA8 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1406C7DCC (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1406C7DF0 (RtlAddAuditAccessObjectAce.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406D71A0 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlValidAcl @ 0x1404C9610 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(ACL *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // bp
  unsigned __int8 AclRevision; // si
  unsigned int v10; // eax
  ACL *v11; // rax
  ACL *v12; // r9
  unsigned int v13; // edx
  ACL *v14; // rdx
  USHORT v15; // cx
  __int64 result; // rax

  v7 = a3;
  if ( (unsigned __int64)Src <= MmUserProbeAddress || !Src || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = a1->AclRevision;
  if ( a1->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  if ( AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  v10 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
      v10 = a3 & 0xFFFFFF20;
    if ( v10 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(a1) )
    return 3221225591LL;
  v11 = a1 + 1;
  v12 = 0LL;
  v13 = 0;
  if ( a1->AceCount )
  {
    while ( v11 < (ACL *)((char *)a1 + a1->AclSize) )
    {
      ++v13;
      v11 = (ACL *)((char *)v11 + v11->AclSize);
      if ( v13 >= a1->AceCount )
        goto LABEL_14;
    }
    return 3221225591LL;
  }
LABEL_14:
  v14 = (ACL *)((char *)a1 + a1->AclSize);
  if ( v11 <= v14 )
    v12 = v11;
  v15 = 4 * (Src[1] + 4);
  if ( !v12 || (ACL *)((char *)v12 + v15) > v14 )
    return 3221225625LL;
  v12->AclSize = v15;
  v12->Sbz1 = v7;
  v12->AclRevision = a6;
  *(_DWORD *)&v12->AceCount = a4;
  memmove(&v12[1], Src, 4 * (unsigned int)Src[1] + 8);
  ++a1->AceCount;
  result = 0LL;
  a1->AclRevision = AclRevision;
  return result;
}
