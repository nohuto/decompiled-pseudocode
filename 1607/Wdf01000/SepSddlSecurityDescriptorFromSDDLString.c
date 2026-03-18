/*
 * XREFs of SepSddlSecurityDescriptorFromSDDLString @ 0x1C00CB4F8
 * Callers:
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00CB44C (SeSddlSecurityDescriptorFromSDDL.c)
 * Callees:
 *     SepSddlDaclFromSDDLString @ 0x1C00CB5C4 (SepSddlDaclFromSDDLString.c)
 */

__int64 __fastcall SepSddlSecurityDescriptorFromSDDLString(
        const wchar_t *SecurityDescriptorString,
        unsigned int SecurityDescriptor,
        void **a3)
{
  void *v4; // rdi
  NTSTATUS v5; // ebx
  PVOID PoolWithTag; // rax
  _SECURITY_DESCRIPTOR LocalSecurityDescriptor; // [rsp+20h] [rbp-30h] BYREF
  unsigned int BufferLength; // [rsp+78h] [rbp+28h] BYREF
  unsigned int SecurityDescriptorControlFlags; // [rsp+80h] [rbp+30h] BYREF
  _ACL *DiscretionaryAcl; // [rsp+88h] [rbp+38h] BYREF

  BufferLength = SecurityDescriptor;
  DiscretionaryAcl = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = SepSddlDaclFromSDDLString(
         SecurityDescriptorString,
         SecurityDescriptor,
         &SecurityDescriptorControlFlags,
         &DiscretionaryAcl);
  if ( v5 >= 0 )
  {
    RtlCreateSecurityDescriptor(&LocalSecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(&LocalSecurityDescriptor, 1u, DiscretionaryAcl, 0);
    LocalSecurityDescriptor.Control |= SecurityDescriptorControlFlags;
    BufferLength = 0;
    RtlAbsoluteToSelfRelativeSD(&LocalSecurityDescriptor, 0LL, &BufferLength);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x64536553u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = RtlAbsoluteToSelfRelativeSD(&LocalSecurityDescriptor, PoolWithTag, &BufferLength);
      if ( v5 >= 0 )
      {
        ExFreePoolWithTag(DiscretionaryAcl, 0);
        *a3 = v4;
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( DiscretionaryAcl )
    ExFreePoolWithTag(DiscretionaryAcl, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v5;
}
