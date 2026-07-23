/*
 * XREFs of ZwSetInformationFile @ 0x140150B00
 * Callers:
 *     CmpOpenFileWithExtremePrejudice @ 0x1403B5538 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeSaveState @ 0x1404C65B4 (EtwpRealtimeSaveState.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpCreateLogFile @ 0x1404CA224 (EtwpCreateLogFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1404EC00C (EtwpRealtimeZeroTruncateLogfile.c)
 *     PopResizeHiberFile @ 0x1404F5DF0 (PopResizeHiberFile.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     PopValidateExistingHiberFile @ 0x14054B958 (PopValidateExistingHiberFile.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 *     CmpCmdRenameHive @ 0x1405E3C50 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1405E5958 (CmpWriteOffsetArrayToFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140602E1C (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1406177C4 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x14065AEBC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14065B5B0 (SmKmStoreFileDelete.c)
 *     AslpFileHasActiveMarkWrapper @ 0x14068298C (AslpFileHasActiveMarkWrapper.c)
 *     VfZwSetInformationFile @ 0x1406D437C (VfZwSetInformationFile.c)
 *     IopFileUtilRename @ 0x14076ECBC (IopFileUtilRename.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
