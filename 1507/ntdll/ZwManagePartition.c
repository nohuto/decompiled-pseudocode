/*
 * XREFs of ZwManagePartition @ 0x1800948F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  NTSTATUS result; // eax

  result = 255;
  __asm { syscall; Low latency system call }
  return result;
}
