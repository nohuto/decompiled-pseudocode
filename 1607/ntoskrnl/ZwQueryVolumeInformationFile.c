/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x14015AB10
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x140480CE4 (CmpGetVolumeClusterSize.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1404CE678 (CmpGetVolumeLogFileSizeCap.c)
 *     PopValidateHiberFileSize @ 0x14052F520 (PopValidateHiberFileSize.c)
 *     PfpQueryFileExtentsRequest @ 0x1406691FC (PfpQueryFileExtentsRequest.c)
 *     SmKmIsVolumeIoPossible @ 0x1406981EC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x140698BCC (SmKmStoreFileCreate.c)
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
  return KiServiceInternal(FileHandle);
}
