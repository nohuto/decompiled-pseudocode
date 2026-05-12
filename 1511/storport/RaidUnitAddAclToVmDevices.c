/*
 * XREFs of RaidUnitAddAclToVmDevices @ 0x1C0058590
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C000C594 (RaidUnitRegisterInterfaces.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
 */

NTSTATUS __fastcall RaidUnitAddAclToVmDevices(__int64 a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax
  NTSTATUS Acl; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  struct _ACL *PoolWithTag; // rax
  struct _ACL *v7; // rdi
  _BYTE SecurityDescriptor[56]; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  memset(SecurityDescriptor, 0, 40);
  v1 = *(void **)(a1 + 8);
  Handle = 0LL;
  result = ObOpenObjectByPointer(v1, 0x200u, 0LL, 0x40000u, 0LL, 0, &Handle);
  if ( result >= 0 )
  {
    Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( Acl >= 0 )
    {
      v4 = RtlLengthSid(SeExports->SeAliasAdminsSid);
      v5 = RtlLengthSid(SeExports->SeLocalSystemSid) + 32 + v4;
      PoolWithTag = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x6C636144u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        Acl = RtlCreateAcl(PoolWithTag, v5, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v7, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v7, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
              if ( Acl >= 0 )
                Acl = ZwSetSecurityObject(Handle, 4u, SecurityDescriptor);
            }
          }
        }
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ZwClose(Handle);
    return Acl;
  }
  return result;
}
