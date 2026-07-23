/*
 * XREFs of NtCreatePartition @ 0x140624D1C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  PHANDLE v7; // r14
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v9; // edi
  _QWORD *v10; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF

  v7 = PartitionHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)PartitionHandle >= MmUserProbeAddress )
      PartitionHandle = (PHANDLE)MmUserProbeAddress;
    *PartitionHandle = *PartitionHandle;
  }
  v9 = 0;
  v10 = 0LL;
  if ( ParentPartitionHandle )
  {
    result = ObReferenceObjectByHandle(ParentPartitionHandle, 2u, MmPartitionObjectType, PreviousMode, &Object, 0LL);
    v9 = result;
    v10 = Object;
    if ( result < 0 )
      return result;
    if ( *(int **)Object == MiSystemPartition )
    {
      ObfDereferenceObject(Object);
      v10 = 0LL;
    }
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    v9 = -1073741727;
  if ( v9 >= 0 )
  {
    v9 = MiCreatePartition(v10, DesiredAccess, (__int64)ObjectAttributes, PreviousMode, &v13);
    if ( v9 >= 0 )
      *v7 = (HANDLE)v13;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return v9;
}
