/*
 * XREFs of IoBuildSynchronousFsdRequest_0 @ 0x1C0011440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PIRP __stdcall IoBuildSynchronousFsdRequest_0(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoBuildSynchronousFsdRequest(MajorFunction, DeviceObject, Buffer, Length, StartingOffset, Event, IoStatusBlock);
}
