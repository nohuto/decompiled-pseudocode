/*
 * XREFs of PopCreateHiberFileSecurityDescriptor @ 0x14056EA90
 * Callers:
 *     PopCreateHiberFile @ 0x14056D474 (PopCreateHiberFile.c)
 * Callees:
 *     RtlGetAce @ 0x14000BDCC (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

ACL *PopCreateHiberFileSecurityDescriptor()
{
  ACL *v0; // rbx
  ACL *v1; // rdi
  ULONG v2; // eax
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v4; // rsi
  __int64 v5; // rbp
  ACL *v6; // rax
  ACL *v7; // rax
  NTSTATUS SecurityDescriptor; // eax
  ACL *v9; // rcx
  _BYTE *IdentifierAuthority; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  WORD2(IdentifierAuthority) = 256;
  v1 = 0LL;
  LODWORD(IdentifierAuthority) = 0;
  v2 = RtlLengthRequiredSid(1u);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v2, 0x72626968u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return v0;
  if ( RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(v4, 0) = 0;
    v5 = 4 * (unsigned int)v4[1] + 24;
    if ( (unsigned int)v5 >= 4 * (unsigned int)v4[1] + 16 )
    {
      v6 = (ACL *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v5, 0x72626968u);
      v1 = v6;
      if ( v6 )
      {
        if ( RtlCreateAcl(v6, v5, 2u) >= 0 && RtlAddAccessAllowedAce(v1, 2u, 0x10000u, v4) >= 0 )
        {
          IdentifierAuthority = 0LL;
          RtlGetAce(v1, 0, (PVOID *)&IdentifierAuthority);
          IdentifierAuthority[1] |= 2u;
          v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v5 + 40, 0x72626968u);
          v0 = v7;
          if ( v7 )
          {
            memmove(&v7[5], v1, (unsigned int)v5);
            SecurityDescriptor = RtlCreateSecurityDescriptor(v0, 1u);
            v9 = v0;
            if ( SecurityDescriptor >= 0 )
            {
              if ( RtlSetDaclSecurityDescriptor(v0, 1u, v0 + 5, 0) >= 0 )
                goto LABEL_10;
              v9 = v0;
            }
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
    }
  }
LABEL_10:
  ExFreePoolWithTag(v4, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v0;
}
