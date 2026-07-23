/*
 * XREFs of ZwSetInformationFile @ 0x14015A6D0
 * Callers:
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140494FA8 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1404D1584 (CmpOpenFileWithExtremePrejudice.c)
 *     EtwpRealtimeSaveState @ 0x1404D3464 (EtwpRealtimeSaveState.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14052E400 (EtwpRealtimeZeroTruncateLogfile.c)
 *     PopResizeHiberFile @ 0x14052F3EC (PopResizeHiberFile.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     PopCreateHiberFile @ 0x14056D474 (PopCreateHiberFile.c)
 *     CmpCmdRenameHive @ 0x140603608 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140604F5C (CmpWriteOffsetArrayToFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14062D268 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14064C06C (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x140698BCC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1406992C0 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x1407B9164 (IopFileUtilRename.c)
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
