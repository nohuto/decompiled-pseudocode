/*
 * XREFs of VerifierIoSetPartitionInformationEx @ 0x140742058
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoSetPartitionInformationEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG PartitionNumber,
        struct _SET_PARTITION_INFORMATION_EX *PartitionInfo)
{
  return pXdvIoSetPartitionInformationEx(DeviceObject, PartitionNumber, PartitionInfo);
}
