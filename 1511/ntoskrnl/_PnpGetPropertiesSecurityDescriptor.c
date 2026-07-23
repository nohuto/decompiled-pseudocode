/*
 * XREFs of _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
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

void *PnpGetPropertiesSecurityDescriptor()
{
  void *v0; // rsi
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  ULONG v4; // eax
  ULONG v5; // r14d
  PVOID v6; // rax
  void *v7; // rbx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-50h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+38h] [rbp-48h] BYREF
  __int16 v11; // [rsp+3Ah] [rbp-46h]
  unsigned __int8 Sid[16]; // [rsp+60h] [rbp-20h] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( RtlValidSid(Sid) )
    {
      v1 = RtlLengthSid(Sid) + 16;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v1, 0x52504E50u);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( RtlCreateAcl(PoolWithTag, v1, 2u) >= 0
          && (int)RtlpAddKnownAce(v3, 2u, 2, 983103, Sid, 0) >= 0
          && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0) >= 0
          && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Sid, 1u) >= 0
          && RtlSetGroupSecurityDescriptor(SecurityDescriptor, Sid, 1u) >= 0 )
        {
          v11 |= 0x1400u;
          if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
          {
            v4 = RtlLengthSecurityDescriptor(SecurityDescriptor);
            *(_DWORD *)IdentifierAuthority.Value = v4;
            if ( v4 >= 0x28 )
            {
              v5 = v4;
              v6 = ExAllocatePoolWithTag(PagedPool, v4, 0x52504E50u);
              v7 = v6;
              if ( v6 )
              {
                memset(v6, 0, v5);
                if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v7, (PULONG)IdentifierAuthority.Value) >= 0 )
                {
                  v0 = v7;
                  v7 = 0LL;
                }
                if ( v7 )
                  ExFreePoolWithTag(v7, 0);
              }
            }
          }
        }
        ExFreePoolWithTag(v3, 0);
      }
    }
  }
  return v0;
}
