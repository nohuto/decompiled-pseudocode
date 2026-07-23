/*
 * XREFs of NtOpenPartition @ 0x1406614FC
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  NTSTATUS result; // eax
  void *v9; // [rsp+50h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (__int64)PartitionHandle;
    if ( (unsigned __int64)PartitionHandle >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)MmPartitionObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             &v9);
  if ( result >= 0 )
    *PartitionHandle = v9;
  return result;
}
