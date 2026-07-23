/*
 * XREFs of PiAuCheckTokenMembership @ 0x140630E2C
 * Callers:
 *     PiAuCheckClientInteractive @ 0x140630D6C (PiAuCheckClientInteractive.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14048DBFC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall PiAuCheckTokenMembership(PSID Sid, BOOLEAN *a2)
{
  ULONG v4; // ebx
  ACL *PoolWithTag; // rax
  ACL *v6; // rdi
  NTSTATUS Acl; // ebx
  GENERIC_MAPPING GenericMapping; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-38h] BYREF
  NTSTATUS AccessStatus; // [rsp+A8h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B0h] [rbp+18h] BYREF

  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericAll = 2031617;
  *a2 = 0;
  v4 = 3 * (RtlLengthSid(Sid) + 20);
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v4, 0x20207050u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    RtlCreateSecurityDescriptor(v6, 1u);
    RtlSetOwnerSecurityDescriptor(v6, Sid, 0);
    RtlSetGroupSecurityDescriptor(v6, Sid, 0);
    Acl = RtlCreateAcl(v6 + 5, v4 - 40, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v6 + 5, 2u, 1u, Sid);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(v6, 1u, v6 + 5, 0);
        if ( Acl >= 0 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          *a2 = SeAccessCheck(
                  v6,
                  &SubjectContext,
                  0,
                  1u,
                  0,
                  0LL,
                  &GenericMapping,
                  KeGetCurrentThread()->PreviousMode,
                  &GrantedAccess,
                  &AccessStatus);
          SeReleaseSubjectContext(&SubjectContext);
          Acl = 0;
        }
      }
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
