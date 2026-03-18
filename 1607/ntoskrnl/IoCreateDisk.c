/*
 * XREFs of IoCreateDisk @ 0x14061FF1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoCreateDisk(PDEVICE_OBJECT DeviceObject, struct _CREATE_DISK *Disk)
{
  __int64 v2; // r8
  unsigned int v3; // r9d

  return PcCreatePartitionTable(DeviceObject, Disk, v2, v3);
}
