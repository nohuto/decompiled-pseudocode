/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x14015A5A0
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x140481F90 (CmpGetVolumeClusterSize.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1404EC5F0 (CmpGetVolumeLogFileSizeCap.c)
 *     PopValidateHiberFileSize @ 0x14052EFE0 (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x140698108 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x140698AE8 (SmKmStoreFileCreate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock, FsInformation);
}
