/*
 * XREFs of CMFCreateSecurityDescriptor @ 0x1406B89D4
 * Callers:
 *     CMFCheckAccess @ 0x1406B87B8 (CMFCheckAccess.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlMapGenericMask @ 0x1403FF7D0 (RtlMapGenericMask.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404206C0 (RtlpAddKnownAce.c)
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404A8A74 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404BA0D8 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall CMFCreateSecurityDescriptor(PVOID *a1, GENERIC_MAPPING *a2)
{
  PVOID *v3; // r12
  unsigned __int8 *v4; // r14
  unsigned __int8 *Src; // r13
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r15
  int Acl; // ebx
  ULONG v9; // eax
  PVOID PoolWithTag; // rax
  unsigned __int8 *v11; // rbx
  int v12; // ebx
  ULONG v13; // eax
  unsigned __int8 *v14; // rax
  PVOID v15; // rax
  PULONG v16; // rax
  SIZE_T v17; // rdx
  int v18; // ecx
  unsigned __int8 *v19; // rax
  PULONG v20; // rax
  SIZE_T v21; // rdx
  int v22; // ecx
  unsigned __int8 *v23; // rax
  PULONG v24; // rax
  int v25; // ecx
  ULONG v26; // ebx
  ACL *v27; // rax
  ACL *v28; // rsi
  int v29; // r12d
  int v30; // r9d
  int v31; // r12d
  int v32; // r9d
  int v33; // r9d
  PVOID v35; // rax
  _SID_IDENTIFIER_AUTHORITY v36; // [rsp+30h] [rbp-50h] BYREF
  void *v37; // [rsp+38h] [rbp-48h]
  PSID Sid; // [rsp+40h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-38h]
  _BYTE SecurityDescriptor[48]; // [rsp+50h] [rbp-30h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+D0h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v43; // [rsp+D8h] [rbp+58h] BYREF

  *(_WORD *)&v36.Value[4] = 1280;
  *(_DWORD *)v36.Value = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v3 = a1;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  v4 = 0LL;
  *(_DWORD *)v43.Value = 0;
  Src = 0LL;
  *(_WORD *)&v43.Value[4] = 3840;
  v6 = 0LL;
  v7 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  *a1 = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (Acl & 0xC0000000) == 0xC0000000 )
    goto LABEL_46;
  v9 = RtlLengthRequiredSid(1u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x636D6650u);
  Sid = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
    if ( (Acl & 0xC0000000) != 0xC0000000 )
    {
      v11 = (unsigned __int8 *)Sid;
      *RtlSubAuthoritySid(Sid, 0) = 0;
      v12 = 4 * v11[1] + 28;
      v13 = RtlLengthRequiredSid(6u);
      v14 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v13, 0x636D6650u);
      Src = v14;
      if ( !v14 )
        goto LABEL_8;
      RtlInitializeSid(v14, &v36, 6u);
      *RtlSubAuthoritySid(Src, 0) = 80;
      *RtlSubAuthoritySid(Src, 1u) = 956008885;
      *RtlSubAuthoritySid(Src, 2u) = -876444647;
      *RtlSubAuthoritySid(Src, 3u) = 1831038044;
      *RtlSubAuthoritySid(Src, 4u) = 1853292631;
      *RtlSubAuthoritySid(Src, 5u) = -2023488832;
      *(_DWORD *)IdentifierAuthority.Value = v12 + 4 * (Src[1] + 5);
      NumberOfBytes = RtlLengthRequiredSid(2u);
      v15 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x636D6650u);
      v37 = v15;
      v6 = (unsigned __int8 *)v15;
      if ( !v15 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v15, &v43, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_38;
      *RtlSubAuthoritySid(v6, 0) = 2;
      v16 = RtlSubAuthoritySid(v6, 1u);
      v17 = NumberOfBytes;
      v18 = *(_DWORD *)IdentifierAuthority.Value + 20;
      *v16 = 1;
      *(_DWORD *)IdentifierAuthority.Value = v18 + 4 * v6[1];
      v19 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v17, 0x636D6650u);
      v7 = v19;
      if ( !v19 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v19, &v43, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_38;
      *RtlSubAuthoritySid(v7, 0) = 2;
      v20 = RtlSubAuthoritySid(v7, 1u);
      v21 = NumberOfBytes;
      v22 = *(_DWORD *)IdentifierAuthority.Value + 20;
      *v20 = 2;
      *(_DWORD *)IdentifierAuthority.Value = v22 + 4 * v7[1];
      v23 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v21, 0x636D6650u);
      v4 = v23;
      if ( v23 )
      {
        Acl = RtlInitializeSid(v23, &v36, 2u);
        if ( (Acl & 0xC0000000) != 0xC0000000 )
        {
          *RtlSubAuthoritySid(v4, 0) = 32;
          v24 = RtlSubAuthoritySid(v4, 1u);
          v25 = *(_DWORD *)IdentifierAuthority.Value + 20;
          *v24 = 544;
          v26 = v25 + 4 * v4[1];
          v27 = (ACL *)ExAllocatePoolWithTag(PagedPool, v26, 0x636D6650u);
          v28 = v27;
          if ( !v27 )
          {
            Acl = -1073741801;
LABEL_37:
            v6 = (unsigned __int8 *)v37;
            goto LABEL_38;
          }
          Acl = RtlCreateAcl(v27, v26, 2u);
          if ( (Acl & 0xC0000000) != 0xC0000000 )
          {
            v29 = 0x10000000;
            *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
            v30 = 0x10000000;
            if ( a2 )
            {
              RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
              v30 = *(_DWORD *)IdentifierAuthority.Value;
            }
            Acl = RtlpAddKnownAce(v28, 2u, 3, v30, Src, 0);
            if ( (Acl & 0xC0000000) != 0xC0000000 )
            {
              *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
              if ( a2 )
              {
                RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                v29 = *(_DWORD *)IdentifierAuthority.Value;
              }
              Acl = RtlpAddKnownAce(v28, 2u, 3, v29, v4, 0);
              if ( (Acl & 0xC0000000) != 0xC0000000 )
              {
                v31 = 0x80000000;
                *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                v32 = 0x80000000;
                if ( a2 )
                {
                  RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                  v32 = *(_DWORD *)IdentifierAuthority.Value;
                }
                Acl = RtlpAddKnownAce(v28, 2u, 3, v32, (unsigned __int8 *)Sid, 0);
                if ( (Acl & 0xC0000000) != 0xC0000000 )
                {
                  *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                  v33 = 0x80000000;
                  if ( a2 )
                  {
                    RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                    v33 = *(_DWORD *)IdentifierAuthority.Value;
                  }
                  Acl = RtlpAddKnownAce(v28, 2u, 3, v33, (unsigned __int8 *)v37, 0);
                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                  {
                    *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                    if ( a2 )
                    {
                      RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                      v31 = *(_DWORD *)IdentifierAuthority.Value;
                    }
                    Acl = RtlpAddKnownAce(v28, 2u, 3, v31, v7, 0);
                    if ( (Acl & 0xC0000000) != 0xC0000000 )
                    {
                      if ( RtlValidAcl(v28) )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v28, 0);
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
                                v35 = ExAllocatePoolWithTag(
                                        PagedPool,
                                        *(unsigned int *)IdentifierAuthority.Value,
                                        0x636D6650u);
                                v3 = a1;
                                *a1 = v35;
                                if ( v35 )
                                  Acl = RtlAbsoluteToSelfRelativeSD(
                                          SecurityDescriptor,
                                          v35,
                                          (PULONG)IdentifierAuthority.Value);
                                else
                                  Acl = -1073741801;
                                goto LABEL_36;
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
            v3 = a1;
          }
LABEL_36:
          ExFreePoolWithTag(v28, 0);
          goto LABEL_37;
        }
      }
      else
      {
LABEL_8:
        Acl = -1073741801;
      }
    }
LABEL_38:
    ExFreePoolWithTag(Sid, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
LABEL_46:
    if ( Acl >= 0 )
      return (unsigned int)Acl;
    goto LABEL_47;
  }
  Acl = -1073741801;
LABEL_47:
  if ( *v3 )
  {
    ExFreePoolWithTag(*v3, 0);
    *v3 = 0LL;
  }
  return (unsigned int)Acl;
}
