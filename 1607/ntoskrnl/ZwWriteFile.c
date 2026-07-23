/*
 * XREFs of ZwWriteFile @ 0x14015A2F0
 * Callers:
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x140491EFC (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1404D3464 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x14052CBD0 (EtwpRealtimeSaveBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x1405439AC (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x14057A9C0 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14061C660 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14061C7B0 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140620EFC (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140627614 (IopLiveDumpWriteBuffer.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 *     CMFFlushHitsFile @ 0x1406B8FD8 (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x1406BB330 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x1406F2000 (KdPullRemoteFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
