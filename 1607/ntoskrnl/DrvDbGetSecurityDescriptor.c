/*
 * XREFs of DrvDbGetSecurityDescriptor @ 0x1406E3790
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x1404DD3F0 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14041EEA0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     RtlpAddKnownAce @ 0x1404206C0 (RtlpAddKnownAce.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14048DBFC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404A8A74 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404BA0D8 (RtlAbsoluteToSelfRelativeSD.c)
 */

void *DrvDbGetSecurityDescriptor()
{
  void *v0; // r13
  ULONG v1; // ebx
  PVOID PoolWithTag; // rax
  void *Src; // r15
  PVOID v4; // rax
  void *v5; // r14
  PVOID v6; // rax
  void *v7; // rsi
  ULONG v8; // eax
  PVOID v9; // rax
  void *v10; // rdi
  ULONG v11; // ebx
  ULONG v12; // ebx
  ULONG v13; // ebx
  ACL *v14; // rax
  ACL *v15; // r12
  ULONG v16; // eax
  ULONG v17; // r13d
  PVOID v18; // rax
  void *v19; // rbx
  _BYTE SecurityDescriptor[2]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v22; // [rsp+32h] [rbp-36h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+48h] BYREF
  _SID_IDENTIFIER_AUTHORITY v24; // [rsp+B8h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v25; // [rsp+C0h] [rbp+58h] BYREF
  void *v26; // [rsp+C8h] [rbp+60h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = 0LL;
  v26 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v24.Value = 0;
  *(_WORD *)&v24.Value[4] = 768;
  *(_DWORD *)v25.Value = 0;
  *(_WORD *)&v25.Value[4] = 256;
  v1 = RtlLengthRequiredSid(1u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v1, 0x42444450u);
  Src = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u) >= 0 )
    {
      *RtlSubAuthoritySid(Src, 0) = 18;
      if ( RtlValidSid(Src) )
      {
        v4 = ExAllocatePoolWithTag(PagedPool, v1, 0x42444450u);
        v5 = v4;
        if ( v4 )
        {
          if ( RtlInitializeSid(v4, &v24, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v5, 0) = 4;
            if ( RtlValidSid(v5) )
            {
              v6 = ExAllocatePoolWithTag(PagedPool, v1, 0x42444450u);
              v7 = v6;
              if ( v6 )
              {
                if ( RtlInitializeSid(v6, &v25, 1u) >= 0 )
                {
                  *RtlSubAuthoritySid(v7, 0) = 0;
                  if ( RtlValidSid(v7) )
                  {
                    v8 = RtlLengthRequiredSid(2u);
                    v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x42444450u);
                    v10 = v9;
                    if ( v9 )
                    {
                      if ( RtlInitializeSid(v9, &IdentifierAuthority, 2u) >= 0 )
                      {
                        *RtlSubAuthoritySid(v10, 0) = 32;
                        *RtlSubAuthoritySid(v10, 1u) = 544;
                        if ( RtlValidSid(v10) )
                        {
                          v11 = RtlLengthSid(v7);
                          v12 = RtlLengthSid(v5) + v11;
                          v13 = RtlLengthSid(Src) + 32 + v12;
                          v14 = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x42444450u);
                          v15 = v14;
                          if ( v14 )
                          {
                            if ( RtlCreateAcl(v14, v13, 2u) >= 0
                              && (int)RtlpAddKnownAce(v15, 2u, 2, 983103, (unsigned __int8 *)Src, 0) >= 0
                              && (int)RtlpAddKnownAce(v15, 2u, 2, 0x20000, (unsigned __int8 *)v5, 0) >= 0
                              && (int)RtlpAddKnownAce(v15, 2u, 2, 131097, (unsigned __int8 *)v7, 0) >= 0
                              && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                              && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0) >= 0
                              && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v10, 1u) >= 0
                              && RtlSetGroupSecurityDescriptor(SecurityDescriptor, v10, 1u) >= 0 )
                            {
                              v22 |= 0x1400u;
                              if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                              {
                                v16 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                                *(_DWORD *)IdentifierAuthority.Value = v16;
                                if ( v16 >= 0x28 )
                                {
                                  v17 = v16;
                                  v18 = ExAllocatePoolWithTag(PagedPool, v16, 0x42444450u);
                                  v19 = v18;
                                  if ( v18 )
                                  {
                                    memset(v18, 0, v17);
                                    if ( RtlAbsoluteToSelfRelativeSD(
                                           SecurityDescriptor,
                                           v19,
                                           (PULONG)IdentifierAuthority.Value) < 0 )
                                    {
                                      v0 = v26;
                                    }
                                    else
                                    {
                                      v0 = v19;
                                      v19 = 0LL;
                                    }
                                    if ( v19 )
                                      ExFreePoolWithTag(v19, 0);
                                  }
                                  else
                                  {
                                    v0 = v26;
                                  }
                                }
                              }
                            }
                            ExFreePoolWithTag(v15, 0);
                          }
                        }
                      }
                      ExFreePoolWithTag(v10, 0);
                    }
                  }
                }
                ExFreePoolWithTag(v7, 0);
              }
            }
          }
          ExFreePoolWithTag(v5, 0);
        }
      }
    }
    ExFreePoolWithTag(Src, 0);
  }
  return v0;
}
