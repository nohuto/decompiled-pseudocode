/*
 * XREFs of IoBuildDeviceIoControlRequest_0 @ 0x1C00114C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PIRP __stdcall IoBuildDeviceIoControlRequest_0(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  return IoBuildDeviceIoControlRequest(
           IoControlCode,
           DeviceObject,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           InternalDeviceIoControl,
           Event,
           IoStatusBlock);
}
