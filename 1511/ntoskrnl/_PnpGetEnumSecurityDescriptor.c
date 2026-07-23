/*
 * XREFs of _PnpGetEnumSecurityDescriptor @ 0x1405471F8
 * Callers:
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1403C01DC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x140435370 (RtlValidSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x1404AA898 (RtlInitializeSid.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404B9670 (RtlAbsoluteToSelfRelativeSD.c)
 */

void *PnpGetEnumSecurityDescriptor()
{
  void *v0; // r14
  ULONG v1; // ebx
  ULONG v2; // ebx
  ULONG v3; // ebx
  ACL *PoolWithTag; // rax
  ACL *v5; // rdi
  ULONG v6; // eax
  ULONG v7; // esi
  PVOID v8; // rax
  void *v9; // rbx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-39h] BYREF
  _SID_IDENTIFIER_AUTHORITY v12; // [rsp+40h] [rbp-31h] BYREF
  _SID_IDENTIFIER_AUTHORITY v13; // [rsp+48h] [rbp-29h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+50h] [rbp-21h] BYREF
  __int16 v15; // [rsp+52h] [rbp-1Fh]
  unsigned __int8 Sid[12]; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int8 Src[12]; // [rsp+84h] [rbp+13h] BYREF
  unsigned __int8 v18[12]; // [rsp+90h] [rbp+1Fh] BYREF
  _BYTE Owner[20]; // [rsp+9Ch] [rbp+2Bh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v12.Value = 0;
  *(_DWORD *)v13.Value = 0;
  v0 = 0LL;
  *(_WORD *)&v12.Value[4] = 768;
  *(_WORD *)&v13.Value[4] = 256;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( RtlValidSid(Sid) )
    {
      if ( RtlInitializeSid(Src, &v12, 1u) >= 0 )
      {
        *RtlSubAuthoritySid(Src, 0) = 4;
        if ( RtlValidSid(Src) )
        {
          if ( RtlInitializeSid(v18, &v13, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v18, 0) = 0;
            if ( RtlValidSid(v18) )
            {
              if ( RtlInitializeSid(Owner, &IdentifierAuthority, 2u) >= 0 )
              {
                *RtlSubAuthoritySid(Owner, 0) = 32;
                *RtlSubAuthoritySid(Owner, 1u) = 544;
                if ( RtlValidSid(Owner) )
                {
                  v1 = RtlLengthSid(v18);
                  v2 = RtlLengthSid(Src) + v1;
                  v3 = RtlLengthSid(Sid) + 32 + v2;
                  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v3, 0x52504E50u);
                  v5 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    if ( RtlCreateAcl(PoolWithTag, v3, 2u) >= 0
                      && (int)RtlpAddKnownAce(v5, 2u, 2, 983103, Sid, 0) >= 0
                      && (int)RtlpAddKnownAce(v5, 2u, 2, 0x20000, Src, 0) >= 0
                      && (int)RtlpAddKnownAce(v5, 2u, 2, 131097, v18, 0) >= 0
                      && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                      && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0) >= 0
                      && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u) >= 0
                      && RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 1u) >= 0 )
                    {
                      v15 |= 0x1400u;
                      if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                      {
                        v6 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                        *(_DWORD *)IdentifierAuthority.Value = v6;
                        if ( v6 >= 0x28 )
                        {
                          v7 = v6;
                          v8 = ExAllocatePoolWithTag(PagedPool, v6, 0x52504E50u);
                          v9 = v8;
                          if ( v8 )
                          {
                            memset(v8, 0, v7);
                            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v9, (PULONG)IdentifierAuthority.Value) >= 0 )
                            {
                              v0 = v9;
                              v9 = 0LL;
                            }
                            if ( v9 )
                              ExFreePoolWithTag(v9, 0);
                          }
                        }
                      }
                    }
                    ExFreePoolWithTag(v5, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v0;
}
