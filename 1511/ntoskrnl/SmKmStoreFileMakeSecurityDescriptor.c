/*
 * XREFs of SmKmStoreFileMakeSecurityDescriptor @ 0x14065B8CC
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x14065B33C (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x1404AA898 (RtlInitializeSid.c)
 */

__int64 __fastcall SmKmStoreFileMakeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ACL **a2)
{
  void *v3; // r14
  void *v4; // rsi
  ACL *v5; // rdi
  SIZE_T v6; // r12
  PVOID PoolWithTag; // rax
  void *v8; // r15
  NTSTATUS Acl; // ebx
  PVOID v10; // rax
  ULONG v11; // eax
  PVOID v12; // rax
  ULONG v13; // ebx
  ULONG v14; // ebx
  ULONG v15; // ebx
  ACL *v16; // rax
  _SID_IDENTIFIER_AUTHORITY v19; // [rsp+70h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+78h] [rbp+58h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v19.Value = 0;
  v3 = 0LL;
  *(_WORD *)&v19.Value[4] = 1280;
  v4 = 0LL;
  v5 = 0LL;
  v6 = RtlLengthRequiredSid(1u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x53446D73u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  Acl = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
  if ( Acl >= 0 )
  {
    v10 = ExAllocatePoolWithTag(PagedPool, v6, 0x53446D73u);
    v3 = v10;
    if ( !v10 )
      goto LABEL_9;
    Acl = RtlInitializeSid(v10, &v19, 1u);
    if ( Acl < 0 )
      goto LABEL_17;
    v11 = RtlLengthRequiredSid(2u);
    v12 = ExAllocatePoolWithTag(PagedPool, v11, 0x53446D73u);
    v4 = v12;
    if ( !v12 )
    {
LABEL_9:
      Acl = -1073741670;
      goto LABEL_17;
    }
    Acl = RtlInitializeSid(v12, &v19, 2u);
    if ( Acl >= 0 )
    {
      *RtlSubAuthoritySid(v8, 0) = 0;
      *RtlSubAuthoritySid(v3, 0) = 18;
      *RtlSubAuthoritySid(v4, 0) = 32;
      *RtlSubAuthoritySid(v4, 1u) = 544;
      v13 = RtlLengthSid(v4);
      v14 = RtlLengthSid(v3) + v13;
      v15 = RtlLengthSid(v8) + 32 + v14;
      v16 = (ACL *)ExAllocatePoolWithTag(PagedPool, v15, 0x61446D73u);
      v5 = v16;
      if ( v16 )
      {
        Acl = RtlCreateAcl(v16, v15, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v5, 2u, 0x1F01FFu, v4);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v5, 2u, 0x1F01FFu, v3);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v5, 2u, 0x10000u, v8);
              if ( Acl >= 0 )
              {
                Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
                  if ( Acl >= 0 )
                  {
                    *a2 = v5;
                    v5 = 0LL;
                    Acl = 0;
                  }
                }
              }
            }
          }
        }
        goto LABEL_17;
      }
      goto LABEL_9;
    }
  }
LABEL_17:
  ExFreePoolWithTag(v8, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)Acl;
}
