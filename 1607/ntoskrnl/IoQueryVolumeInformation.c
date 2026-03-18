/*
 * XREFs of IoQueryVolumeInformation @ 0x14052AED4
 * Callers:
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     MiAttemptPageFileExtension @ 0x14065ACD8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
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
