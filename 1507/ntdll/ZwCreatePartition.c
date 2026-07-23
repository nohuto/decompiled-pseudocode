/*
 * XREFs of ZwCreatePartition @ 0x1800943A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  NTSTATUS result; // eax

  result = 170;
  __asm { syscall; Low latency system call }
  return result;
}
