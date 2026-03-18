/*
 * XREFs of IoQueryVolumeInformation @ 0x1404E81E0
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MiAttemptPageFileExtension @ 0x14062543C (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x1404DB258 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(FileObject, FsInformationClass, Length, 0, (__int64)FsInformation, ReturnedLength, 0);
}
