/*
 * XREFs of WdipAccessCheck @ 0x14025BE34
 * Callers:
 *     WdiUpdateSem @ 0x14025BE1C (WdiUpdateSem.c)
 * Callees:
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 */

__int64 WdipAccessCheck()
{
  ACL *v0; // rdi
  ULONG v1; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rsi
  NTSTATUS SecurityDescriptor; // ebx
  unsigned __int8 *v5; // rax
  unsigned int v6; // r15d
  ACL *v7; // rax
  ACL *v8; // r14
  GENERIC_MAPPING GenericMapping; // [rsp+50h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+B8h] [rbp+38h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericAll = 2031617;
  v1 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v1, 0x73494457u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    SecurityDescriptor = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u);
    if ( SecurityDescriptor >= 0 )
    {
      v5 = (unsigned __int8 *)SeLocalSystemSid;
      v3[2] = 80;
      v3[3] = -1324354722;
      v3[4] = 78537857;
      v3[5] = 698502321;
      v3[6] = 558674196;
      v3[7] = 1451644582;
      v6 = 4 * (*((unsigned __int8 *)v3 + 1) + *((unsigned __int8 *)SeAliasAdminsSid + 1) + v5[1]) + 108;
      v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x73494457u);
      v0 = v7;
      if ( v7 )
      {
        v8 = v7 + 5;
        SecurityDescriptor = RtlCreateSecurityDescriptor(v7, 1u);
        if ( SecurityDescriptor >= 0 )
        {
          SecurityDescriptor = RtlCreateAcl(v8, v6 - 40, 2u);
          if ( SecurityDescriptor >= 0 )
          {
            SecurityDescriptor = RtlAddAccessAllowedAce(v8, 2u, 1u, SeAliasAdminsSid);
            if ( SecurityDescriptor >= 0 )
            {
              SecurityDescriptor = RtlAddAccessAllowedAce(v8, 2u, 1u, SeLocalSystemSid);
              if ( SecurityDescriptor >= 0 )
              {
                SecurityDescriptor = RtlAddAccessAllowedAce(v8, 2u, 1u, v3);
                if ( SecurityDescriptor >= 0 )
                {
                  *(_DWORD *)IdentifierAuthority.Value = RtlSetDaclSecurityDescriptor(v0, 1u, v8, 0);
                  SecurityDescriptor = *(_DWORD *)IdentifierAuthority.Value;
                  if ( *(int *)IdentifierAuthority.Value >= 0 )
                  {
                    SeCaptureSubjectContext(&SubjectContext);
                    SeAccessCheck(
                      v0,
                      &SubjectContext,
                      0,
                      1u,
                      0,
                      0LL,
                      &GenericMapping,
                      1,
                      &GrantedAccess,
                      (PNTSTATUS)&IdentifierAuthority);
                    SeReleaseSubjectContext(&SubjectContext);
                    SecurityDescriptor = *(_DWORD *)IdentifierAuthority.Value;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        SecurityDescriptor = -1073741670;
      }
    }
    ExFreePoolWithTag(v3, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SecurityDescriptor;
}
