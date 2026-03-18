/*
 * XREFs of ZwSetInformationFile @ 0x14015A160
 * Callers:
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x14047E8FC (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140494518 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     CmpCmdHiveClose @ 0x14049FCA0 (CmpCmdHiveClose.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1404EF4C0 (CmpOpenFileWithExtremePrejudice.c)
 *     EtwpRealtimeSaveState @ 0x1404F1370 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14052DEC0 (EtwpRealtimeZeroTruncateLogfile.c)
 *     PopResizeHiberFile @ 0x14052EEAC (PopResizeHiberFile.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     CmpCmdRenameHive @ 0x140603554 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x1406044B0 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140604EA8 (CmpWriteOffsetArrayToFile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14062D1B4 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14064BF88 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x140698AE8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1406991DC (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1406AA264 (EtwpSavePersistedLogger.c)
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
  return KiServiceInternal(FileHandle, IoStatusBlock, FileInformation);
}
