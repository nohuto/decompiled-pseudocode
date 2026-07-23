/*
 * XREFs of NtOpenPartition @ 0x1406A47E8
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // r8
  _QWORD *v7; // rdx
  NTSTATUS result; // eax
  void *v9; // [rsp+50h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = PartitionHandle;
    if ( (unsigned __int64)PartitionHandle >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
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
