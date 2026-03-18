/*
 * XREFs of PiAuCreateLocalSystemSecurityObject @ 0x140769C5C
 * Callers:
 *     PiAuCreateSecurityObjects @ 0x140769B88 (PiAuCreateSecurityObjects.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1403C01DC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140435370 (RtlValidSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1404B9670 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x1404C54E8 (RtlAddAccessAllowedAceEx.c)
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
