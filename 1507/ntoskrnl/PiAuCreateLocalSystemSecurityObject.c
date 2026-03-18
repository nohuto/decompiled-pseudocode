/*
 * XREFs of PiAuCreateLocalSystemSecurityObject @ 0x1407DDE74
 * Callers:
 *     PiAuCreateSecurityObjects @ 0x1407DDDA0 (PiAuCreateSecurityObjects.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140415C48 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140416F98 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x140486820 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1404C8FB0 (RtlValidSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140561D28 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x1405B5938 (RtlAddAccessAllowedAceEx.c)
 */

__int64 __fastcall PiAuCreateLocalSystemSecurityObject(PSID *a1)
{
  void *v2; // rdi
  SIZE_T v3; // rbx
  ACL *PoolWithTag; // rax
  ACL *v5; // rsi
  NTSTATUS Acl; // ebx
  ULONG v7; // eax
  ULONG v8; // ebx
  PVOID v9; // rax
  _BYTE SecurityDescriptor[48]; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 4 * (unsigned int)*((unsigned __int8 *)*a1 + 1) + 24;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v3, 0x47706E50u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v5, 2u, 0, 0xF0000u, *a1);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, *a1, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, *a1, 0);
              if ( Acl >= 0 )
              {
                if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                  && (v7 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v7, v7 >= 0x28) )
                {
                  v8 = v7;
                  v9 = ExAllocatePoolWithTag(PagedPool, v7, 0x47706E50u);
                  v2 = v9;
                  if ( v9 )
                  {
                    memset(v9, 0, v8);
                    Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, &BufferLength);
                    if ( Acl >= 0 )
                    {
                      PiAuLocalSystemSecurityObject = v2;
                      v2 = 0LL;
                    }
                  }
                  else
                  {
                    Acl = -1073741670;
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
      }
    }
    ExFreePoolWithTag(v5, 0x47706E50u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x47706E50u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
