/*
 * XREFs of ZwSetInformationFile @ 0x14017F4D0
 * Callers:
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpCmdHiveClose @ 0x1404EE6E8 (CmpCmdHiveClose.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14055B714 (CmpOpenFileWithExtremePrejudice.c)
 *     EtwpRealtimeSaveState @ 0x14055CE70 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x140564418 (EtwpRealtimeZeroTruncateLogfile.c)
 *     PopResizeHiberFile @ 0x140564F6C (PopResizeHiberFile.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     CmpCmdRenameHive @ 0x14065AD80 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14065CA3C (CmpWriteOffsetArrayToFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14067DC88 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x140696088 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x1406DD710 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1406DDE04 (SmKmStoreFileDelete.c)
 *     AslpFileHasActiveMarkWrapper @ 0x140707630 (AslpFileHasActiveMarkWrapper.c)
 *     VfZwSetInformationFile @ 0x140757F44 (VfZwSetInformationFile.c)
 *     IopFileUtilRename @ 0x1407E4464 (IopFileUtilRename.c)
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
