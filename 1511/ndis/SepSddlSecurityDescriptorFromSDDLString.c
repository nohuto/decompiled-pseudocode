/*
 * XREFs of SepSddlSecurityDescriptorFromSDDLString @ 0x1C00AD2FC
 * Callers:
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00AD2A0 (SeSddlSecurityDescriptorFromSDDL.c)
 * Callees:
 *     SepSddlDaclFromSDDLString @ 0x1C00AD3C8 (SepSddlDaclFromSDDLString.c)
 */

__int64 __fastcall SepSddlSecurityDescriptorFromSDDLString(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v4; // rdi
  NTSTATUS v5; // ebx
  PVOID PoolWithTag; // rax
  _BYTE SecurityDescriptor[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v9; // [rsp+22h] [rbp-2Eh]
  ULONG BufferLength; // [rsp+78h] [rbp+28h] BYREF
  __int16 v11; // [rsp+80h] [rbp+30h] BYREF
  PACL Dacl; // [rsp+88h] [rbp+38h] BYREF

  BufferLength = a2;
  Dacl = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = SepSddlDaclFromSDDLString(a1, a2, &v11, &Dacl);
  if ( v5 >= 0 )
  {
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
    v9 |= v11;
    BufferLength = 0;
    RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x64536553u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, PoolWithTag, &BufferLength);
      if ( v5 >= 0 )
      {
        ExFreePoolWithTag(Dacl, 0);
        *a3 = v4;
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( Dacl )
    ExFreePoolWithTag(Dacl, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v5;
}
