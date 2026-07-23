/*
 * XREFs of _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x1404E0410 (_CmOpenDeviceRegKeyWorker.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14041EEA0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     RtlpAddKnownAce @ 0x1404206C0 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14048DBFC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404A8A74 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404BA0D8 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall CmGetDeviceRegKeySecurityDescriptor(_DWORD **a1, int a2, _QWORD *a3)
{
  int Acl; // ebx
  bool v5; // r14
  _BYTE *v6; // r15
  ACL *v7; // rsi
  void *v8; // rdi
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  ACL *PoolWithTag; // rax
  ULONG v13; // eax
  PVOID v14; // rax
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-49h] BYREF
  _SID_IDENTIFIER_AUTHORITY v17; // [rsp+40h] [rbp-41h] BYREF
  _SID_IDENTIFIER_AUTHORITY v18; // [rsp+48h] [rbp-39h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+50h] [rbp-31h] BYREF
  __int16 v20; // [rsp+52h] [rbp-2Fh]
  unsigned __int8 Owner[16]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int8 Sid[12]; // [rsp+88h] [rbp+7h] BYREF
  unsigned __int8 Src[12]; // [rsp+94h] [rbp+13h] BYREF
  _BYTE v24[16]; // [rsp+A0h] [rbp+1Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v17.Value = 0;
  *(_WORD *)&v17.Value[4] = 256;
  Acl = 0;
  *(_DWORD *)v18.Value = 0;
  v5 = 0;
  *(_WORD *)&v18.Value[4] = 3840;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !a2 || (a2 & 0xFFFFFCE8) != 0 )
  {
    Acl = -1073741811;
    goto LABEL_46;
  }
  *a3 = 0LL;
  if ( (a2 & 0xF00) == 0 && (((unsigned __int8)a2 - 17) & 0xFFFFFFFC) == 0 && (unsigned __int8)a2 != 18 )
  {
    if ( **a1 >= 0xA000000u )
      v5 = (unsigned __int8)a2 == 17;
    Acl = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    if ( Acl >= 0 )
    {
      *RtlSubAuthoritySid(Sid, 0) = 18;
      if ( !RtlValidSid(Sid) )
        return (unsigned int)-1073741762;
      Acl = RtlInitializeSid(Src, &v17, 1u);
      if ( Acl < 0 )
        return (unsigned int)Acl;
      *RtlSubAuthoritySid(Src, 0) = 0;
      if ( !RtlValidSid(Src) )
        return (unsigned int)-1073741762;
      Acl = RtlInitializeSid(Owner, &IdentifierAuthority, 2u);
      if ( Acl < 0 )
        return (unsigned int)Acl;
      *RtlSubAuthoritySid(Owner, 0) = 32;
      *RtlSubAuthoritySid(Owner, 1u) = 544;
      if ( !RtlValidSid(Owner) )
        return (unsigned int)-1073741762;
      if ( v5 )
      {
        v6 = v24;
        Acl = RtlInitializeSid(v24, &v18, 2u);
        if ( Acl < 0 )
          return (unsigned int)Acl;
        *RtlSubAuthoritySid(v24, 0) = 2;
        *RtlSubAuthoritySid(v24, 1u) = 1;
        if ( !RtlValidSid(v24) )
          return (unsigned int)-1073741762;
      }
      v9 = RtlLengthSid(Owner);
      v10 = RtlLengthSid(Src) + v9;
      v11 = RtlLengthSid(Sid) + v10 + 32;
      if ( v5 )
        v11 += RtlLengthSid(v6) + 8;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v11, 0x52504E50u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      Acl = RtlCreateAcl(PoolWithTag, v11, 2u);
      if ( Acl < 0 )
        goto LABEL_32;
      Acl = RtlpAddKnownAce(v7, 2u, 2, 983103, Sid, 0);
      if ( Acl < 0 )
        goto LABEL_32;
      Acl = RtlpAddKnownAce(v7, 2u, 2, 131097, Src, 0);
      if ( Acl < 0 )
        goto LABEL_32;
      Acl = RtlpAddKnownAce(v7, 2u, 2, 983103, Owner, 0);
      if ( Acl < 0 )
        goto LABEL_32;
      if ( v5 )
      {
        Acl = RtlpAddKnownAce(v7, 2u, 2, 131097, v6, 0);
        if ( Acl < 0 )
          goto LABEL_32;
      }
      Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      if ( Acl < 0 )
        goto LABEL_32;
      Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
      if ( Acl < 0 )
        goto LABEL_32;
      Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
      if ( Acl < 0 )
        goto LABEL_32;
      Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 1u);
      if ( Acl < 0 )
        goto LABEL_32;
      v20 |= 0x1500u;
      if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
      {
        v13 = RtlLengthSecurityDescriptor(SecurityDescriptor);
        *(_DWORD *)IdentifierAuthority.Value = v13;
        if ( v13 < 0x28 )
        {
          Acl = -1073741762;
        }
        else
        {
          v14 = ExAllocatePoolWithTag(PagedPool, v13, 0x52504E50u);
          v8 = v14;
          if ( v14 )
          {
            Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v14, (PULONG)IdentifierAuthority.Value);
            if ( Acl >= 0 )
            {
              *a3 = v8;
              goto LABEL_32;
            }
LABEL_46:
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
            goto LABEL_32;
          }
          Acl = -1073741801;
        }
      }
      else
      {
        Acl = -1073741595;
      }
LABEL_32:
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
    }
  }
  return (unsigned int)Acl;
}
