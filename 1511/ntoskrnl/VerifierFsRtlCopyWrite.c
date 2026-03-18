/*
 * XREFs of VerifierFsRtlCopyWrite @ 0x1406C04A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  return pXdvFsRtlCopyWrite(FileObject, FileOffset, Length, Wait, LockKey, Buffer, IoStatus, DeviceObject);
}
