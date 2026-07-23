/*
 * XREFs of CMFCreateSecurityDescriptor @ 0x1406FA710
 * Callers:
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140416F98 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlMapGenericMask @ 0x140435530 (RtlMapGenericMask.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     RtlValidSecurityDescriptor @ 0x1404C8FB0 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C94D0 (RtlpAddKnownAce.c)
 *     RtlValidAcl @ 0x1404C9610 (RtlValidAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140561D28 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall CMFCreateSecurityDescriptor(PVOID *a1, GENERIC_MAPPING *a2)
{
  unsigned __int8 *v4; // r14
  unsigned __int8 *Src; // r15
  unsigned __int8 *v6; // r12
  int Acl; // ebx
  ULONG v8; // eax
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v10; // rdi
  int v11; // ebx
  ULONG v12; // eax
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rax
  PULONG v15; // rax
  int v16; // ecx
  unsigned __int8 *v17; // rax
  PULONG v18; // rax
  int v19; // ecx
  ULONG v20; // ebx
  ACL *v21; // rax
  ACL *v22; // rdi
  int v23; // r9d
  int v24; // r9d
  int v25; // r9d
  int v26; // r9d
  PVOID v27; // rax
  unsigned __int8 *v29; // [rsp+30h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-38h]
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-30h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+40h] BYREF
  _SID_IDENTIFIER_AUTHORITY v33; // [rsp+C0h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v34; // [rsp+C8h] [rbp+58h] BYREF

  *(_WORD *)&v33.Value[4] = 1280;
  *(_DWORD *)v33.Value = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  v4 = 0LL;
  *(_DWORD *)v34.Value = 0;
  Src = 0LL;
  *(_WORD *)&v34.Value[4] = 3840;
  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  *a1 = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (Acl & 0xC0000000) == 0xC0000000 )
    goto LABEL_46;
  v8 = RtlLengthRequiredSid(1u);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v8, 0x636D6650u);
  v29 = PoolWithTag;
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
    if ( (Acl & 0xC0000000) != 0xC0000000 )
    {
      *RtlSubAuthoritySid(v10, 0) = 0;
      v11 = 4 * v10[1] + 28;
      v12 = RtlLengthRequiredSid(6u);
      v13 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v12, 0x636D6650u);
      Src = v13;
      if ( v13 )
      {
        RtlInitializeSid(v13, &v33, 6u);
        *RtlSubAuthoritySid(Src, 0) = 80;
        *RtlSubAuthoritySid(Src, 1u) = 956008885;
        *RtlSubAuthoritySid(Src, 2u) = -876444647;
        *RtlSubAuthoritySid(Src, 3u) = 1831038044;
        *RtlSubAuthoritySid(Src, 4u) = 1853292631;
        *RtlSubAuthoritySid(Src, 5u) = -2023488832;
        *(_DWORD *)IdentifierAuthority.Value = v11 + 4 * (Src[1] + 5);
        NumberOfBytes = RtlLengthRequiredSid(2u);
        v14 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x636D6650u);
        v6 = v14;
        if ( v14 )
        {
          Acl = RtlInitializeSid(v14, &v34, 2u);
          if ( (Acl & 0xC0000000) == 0xC0000000 )
            goto LABEL_40;
          *RtlSubAuthoritySid(v6, 0) = 2;
          v15 = RtlSubAuthoritySid(v6, 1u);
          v16 = *(_DWORD *)IdentifierAuthority.Value + 20;
          *v15 = 1;
          *(_DWORD *)IdentifierAuthority.Value = v16 + 4 * v6[1];
          v17 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x636D6650u);
          v4 = v17;
          if ( v17 )
          {
            Acl = RtlInitializeSid(v17, &v33, 2u);
            if ( (Acl & 0xC0000000) != 0xC0000000 )
            {
              *RtlSubAuthoritySid(v4, 0) = 32;
              v18 = RtlSubAuthoritySid(v4, 1u);
              v19 = *(_DWORD *)IdentifierAuthority.Value + 20;
              *v18 = 544;
              v20 = v19 + 4 * v4[1];
              v21 = (ACL *)ExAllocatePoolWithTag(PagedPool, v20, 0x636D6650u);
              v22 = v21;
              if ( v21 )
              {
                Acl = RtlCreateAcl(v21, v20, 2u);
                if ( (Acl & 0xC0000000) != 0xC0000000 )
                {
                  v23 = 0x10000000;
                  *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
                  if ( a2 )
                  {
                    RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                    v23 = *(_DWORD *)IdentifierAuthority.Value;
                  }
                  Acl = RtlpAddKnownAce(v22, 2u, 3, v23, Src, 0);
                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                  {
                    v24 = 0x10000000;
                    *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
                    if ( a2 )
                    {
                      RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                      v24 = *(_DWORD *)IdentifierAuthority.Value;
                    }
                    Acl = RtlpAddKnownAce(v22, 2u, 3, v24, v4, 0);
                    if ( (Acl & 0xC0000000) != 0xC0000000 )
                    {
                      v25 = 0x80000000;
                      *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                      if ( a2 )
                      {
                        RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                        v25 = *(_DWORD *)IdentifierAuthority.Value;
                      }
                      Acl = RtlpAddKnownAce(v22, 2u, 3, v25, v29, 0);
                      if ( (Acl & 0xC0000000) != 0xC0000000 )
                      {
                        v26 = 0x80000000;
                        *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                        if ( a2 )
                        {
                          RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                          v26 = *(_DWORD *)IdentifierAuthority.Value;
                        }
                        Acl = RtlpAddKnownAce(v22, 2u, 3, v26, v6, 0);
                        if ( (Acl & 0xC0000000) != 0xC0000000 )
                        {
                          if ( RtlValidAcl(v22) )
                          {
                            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v22, 0);
                            if ( (Acl & 0xC0000000) != 0xC0000000 )
                            {
                              Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Src, 0);
                              if ( (Acl & 0xC0000000) != 0xC0000000 )
                              {
                                if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                                {
                                  *(_DWORD *)IdentifierAuthority.Value = 0;
                                  Acl = RtlAbsoluteToSelfRelativeSD(
                                          SecurityDescriptor,
                                          0LL,
                                          (PULONG)IdentifierAuthority.Value);
                                  if ( *(_DWORD *)IdentifierAuthority.Value )
                                  {
                                    v27 = ExAllocatePoolWithTag(
                                            PagedPool,
                                            *(unsigned int *)IdentifierAuthority.Value,
                                            0x636D6650u);
                                    *a1 = v27;
                                    if ( v27 )
                                      Acl = RtlAbsoluteToSelfRelativeSD(
                                              SecurityDescriptor,
                                              v27,
                                              (PULONG)IdentifierAuthority.Value);
                                    else
                                      Acl = -1073741801;
                                  }
                                }
                                else
                                {
                                  Acl = -1073741703;
                                }
                              }
                            }
                          }
                          else
                          {
                            Acl = -1073741705;
                          }
                        }
                      }
                    }
                  }
                }
                ExFreePoolWithTag(v22, 0);
              }
              else
              {
                Acl = -1073741801;
              }
              v10 = v29;
            }
            goto LABEL_40;
          }
        }
      }
      Acl = -1073741801;
    }
LABEL_40:
    ExFreePoolWithTag(v10, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
LABEL_46:
    if ( Acl >= 0 )
      return (unsigned int)Acl;
    goto LABEL_47;
  }
  Acl = -1073741801;
LABEL_47:
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)Acl;
}
