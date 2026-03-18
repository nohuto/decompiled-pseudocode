/*
 * XREFs of IoQueryVolumeInformation @ 0x140558044
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiAttemptPageFileExtension @ 0x1406A4E8C (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
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
