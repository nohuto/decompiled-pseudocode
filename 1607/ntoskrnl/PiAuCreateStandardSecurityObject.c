/*
 * XREFs of PiAuCreateStandardSecurityObject @ 0x1407B375C
 * Callers:
 *     PiAuCreateSecurityObjects @ 0x1407B3320 (PiAuCreateSecurityObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14041EEA0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14048DBFC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404A8A74 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404BA0D8 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x14054D3E8 (RtlAddAccessAllowedAceEx.c)
 *     PiAuAllocateAndInitializeSid @ 0x140571DBC (PiAuAllocateAndInitializeSid.c)
 *     RtlAddAccessDeniedAceEx @ 0x140571E24 (RtlAddAccessDeniedAceEx.c)
 */

__int64 __fastcall PiAuCreateStandardSecurityObject(PSID *a1)
{
  ACL *v2; // rdi
  void *v3; // rsi
  unsigned int v4; // r13d
  PSID *v5; // r12
  ULONG *v6; // r15
  int Acl; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdx
  _DWORD *v10; // r8
  __int64 v11; // r13
  __int64 v12; // r8
  ULONG v13; // ebx
  PVOID *v14; // rdx
  __int64 v15; // rax
  ACL *PoolWithTag; // rax
  unsigned int v17; // r15d
  PSID *v18; // r12
  ULONG v19; // eax
  ULONG v20; // ebx
  PVOID v21; // rax
  PVOID *v22; // r14
  ULONG BufferLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h]
  _BYTE SecurityDescriptor[48]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v27[18]; // [rsp+78h] [rbp-90h] BYREF

  LOWORD(BufferLength[1]) = 1280;
  BufferLength[0] = 0;
  v2 = 0LL;
  v3 = 0LL;
  memset(v27, 0, 0x88uLL);
  v4 = 0;
  v25 = 0LL;
  v5 = v27;
  v6 = PiAuSwDeviceCreateSidSubAuthorities;
  do
  {
    Acl = PiAuAllocateAndInitializeSid(&v27[v4], (_SID_IDENTIFIER_AUTHORITY *)BufferLength, *v6);
    if ( Acl < 0 )
      goto LABEL_42;
    v8 = v25;
    v9 = 0LL;
    if ( *v6 )
    {
      v10 = *v5;
      do
      {
        v10[v9 + 2] = PiAuSwDeviceCreateSidSubAuthorities[v8 + 1 + v9];
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *v6 );
    }
    if ( !RtlValidSid(*v5) )
    {
      Acl = -1073741595;
LABEL_42:
      v11 = 17LL;
      goto LABEL_30;
    }
    ++v4;
    v6 += 7;
    v25 = v8 + 7;
    ++v5;
  }
  while ( v4 < 0x11 );
  v11 = 17LL;
  v12 = 17LL;
  v13 = 4
      * (*((unsigned __int8 *)a1[6] + 1)
       + *((unsigned __int8 *)*a1 + 1)
       + *((unsigned __int8 *)a1[4] + 1)
       + *((unsigned __int8 *)a1[5] + 1)
       + *((unsigned __int8 *)a1[3] + 1)
       + *((unsigned __int8 *)a1[2] + 1))
      + 104;
  v14 = v27;
  do
  {
    v15 = (__int64)*v14++;
    v13 += 4 * *(unsigned __int8 *)(v15 + 1) + 16;
    --v12;
  }
  while ( v12 );
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x20207050u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v13, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x201E7u, a1[2]);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessDeniedAceEx(v2, 2u, 0, 0xF01FFu, a1[3]);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0xF01FFu, *a1);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x20125u, a1[4]);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x40u, a1[5]);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x40u, a1[6]);
                if ( Acl >= 0 )
                {
                  v17 = 0;
                  v18 = v27;
                  while ( 1 )
                  {
                    Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x80u, *v18);
                    if ( Acl < 0 )
                      break;
                    ++v17;
                    ++v18;
                    if ( v17 >= 0x11 )
                    {
                      Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, *a1, 0);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, *a1, 0);
                            if ( Acl >= 0 )
                            {
                              if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                                && (v19 = RtlLengthSecurityDescriptor(SecurityDescriptor),
                                    BufferLength[0] = v19,
                                    v19 >= 0x28) )
                              {
                                v20 = v19;
                                v21 = ExAllocatePoolWithTag(PagedPool, v19, 0x20207050u);
                                v3 = v21;
                                if ( !v21 )
                                  goto LABEL_39;
                                memset(v21, 0, v20);
                                Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v3, BufferLength);
                                if ( Acl >= 0 )
                                {
                                  PiAuSecurityObject = v3;
                                  v3 = 0LL;
                                }
                              }
                              else
                              {
                                Acl = -1073741595;
                              }
                            }
                          }
                        }
                      }
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
LABEL_39:
    Acl = -1073741670;
  }
LABEL_30:
  v22 = v27;
  do
  {
    if ( *v22 )
      ExFreePoolWithTag(*v22, 0);
    ++v22;
    --v11;
  }
  while ( v11 );
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)Acl;
}
