/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x140001854
 * Callers:
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1403C01DC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1403C0948 (RtlSetSaclSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     RtlAddMandatoryAce @ 0x1404342D0 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404B9670 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x1404C54E8 (RtlAddAccessAllowedAceEx.c)
 */

PVOID CmpGenerateAppHiveSecurityDescriptor()
{
  PVOID v0; // rbx
  PACCESS_TOKEN v1; // rsi
  NTSTATUS v2; // eax
  void **v3; // r15
  NTSTATUS v4; // eax
  PVOID v5; // r14
  void *v6; // rbx
  void *v7; // rdi
  ULONG v8; // edx
  PVOID PoolWithTag; // rax
  UCHAR Sid; // [rsp+28h] [rbp-E0h]
  PSID LabelSid; // [rsp+30h] [rbp-D8h]
  ULONG BufferLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-B8h] BYREF
  ACL Sacl; // [rsp+78h] [rbp-90h] BYREF
  ACL Acl; // [rsp+D8h] [rbp-30h] BYREF

  P = 0LL;
  v0 = 0LL;
  TokenInformation = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v1 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  v2 = SeQueryInformationToken(v1, TokenOwner, &TokenInformation);
  v3 = (void **)TokenInformation;
  if ( v2 >= 0 )
  {
    v4 = SeQueryInformationToken(v1, TokenPrimaryGroup, &P);
    v5 = P;
    if ( v4 >= 0 )
    {
      v6 = *v3;
      v7 = *(void **)P;
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v6, 0);
      RtlSetGroupSecurityDescriptor(SecurityDescriptor, v7, 0);
      RtlCreateAcl(&Acl, 0xECu, 2u);
      RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeWorldSid);
      RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeAllAppPackagesSid);
      RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeRestrictedSid);
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      RtlCreateAcl(&Sacl, 0x54u, 2u);
      LODWORD(LabelSid) = 1;
      RtlAddMandatoryAce(&Sacl, v8, 0, SeLowMandatorySid, Sid, LabelSid);
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
      BufferLength[0] = 0;
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, BufferLength);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength[0], 0x65536D43u);
      v0 = PoolWithTag;
      if ( PoolWithTag )
        RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, PoolWithTag, BufferLength);
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  return v0;
}
