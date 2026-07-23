/*
 * XREFs of ZwSetVolumeInformationFile @ 0x140153940
 * Callers:
 *     VfZwSetVolumeInformationFile @ 0x1406D47CC (VfZwSetVolumeInformationFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
