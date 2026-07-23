/*
 * XREFs of RtlpAddKnownAce @ 0x1404206C0
 * Callers:
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x14041FB20 (SepCreateImpersonationTokenDacl.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048D918 (PiUEventInitClientRegistrationContext.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14052A408 (RtlpSysVolCreateSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E558 (BiCreateKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x14054D3E8 (RtlAddAccessAllowedAceEx.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     RtlAddAccessDeniedAceEx @ 0x140571E24 (RtlAddAccessDeniedAceEx.c)
 *     NtSetUuidSeed @ 0x1405778D8 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 *     RtlAddAccessAllowedObjectAce @ 0x14068467C (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1406846D8 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x140684734 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x140684758 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x14068477C (RtlAddAuditAccessObjectAce.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x140694A10 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B89D4 (CMFCreateSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
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
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
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
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
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
