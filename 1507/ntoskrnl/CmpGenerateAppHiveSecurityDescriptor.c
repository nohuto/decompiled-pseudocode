/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C
 * Callers:
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140413954 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140415C48 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140416F98 (RtlSetOwnerSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     RtlAddMandatoryAce @ 0x1404C90D0 (RtlAddMandatoryAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140561D28 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x1405B5938 (RtlAddAccessAllowedAceEx.c)
 */

PVOID CmpGenerateAppHiveSecurityDescriptor()
{
  PVOID v0; // rbx
  PACCESS_TOKEN v1; // rsi
  void *v2; // rbx
  void *v3; // rdi
  ULONG v4; // edx
  PVOID PoolWithTag; // rax
  UCHAR Sid; // [rsp+28h] [rbp-E0h]
  PSID LabelSid; // [rsp+30h] [rbp-D8h]
  ULONG BufferLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-B8h] BYREF
  ACL Sacl; // [rsp+78h] [rbp-90h] BYREF
  ACL Acl; // [rsp+D8h] [rbp-30h] BYREF

  P = 0LL;
  v0 = 0LL;
  TokenInformation = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v1 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( SeQueryInformationToken(v1, TokenOwner, &TokenInformation) >= 0
    && SeQueryInformationToken(v1, TokenPrimaryGroup, &P) >= 0 )
  {
    v2 = *(void **)TokenInformation;
    v3 = *(void **)P;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v2, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, v3, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeWorldSid);
    RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeAllAppPackagesSid);
    RtlAddAccessAllowedAceEx(&Acl, 2u, 2u, 0xF003Fu, SeRestrictedSid);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    RtlCreateAcl(&Sacl, 0x54u, 2u);
    LODWORD(LabelSid) = 1;
    RtlAddMandatoryAce(&Sacl, v4, 0, SeLowMandatorySid, Sid, LabelSid);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
    BufferLength[0] = 0;
    RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, BufferLength);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength[0], 0x65536D43u);
    v0 = PoolWithTag;
    if ( PoolWithTag )
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, PoolWithTag, BufferLength);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  return v0;
}
