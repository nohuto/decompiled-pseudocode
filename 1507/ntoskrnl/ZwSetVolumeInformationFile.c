/*
 * XREFs of ZwSetVolumeInformationFile @ 0x1401822B0
 * Callers:
 *     VfZwSetVolumeInformationFile @ 0x140758394 (VfZwSetVolumeInformationFile.c)
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
