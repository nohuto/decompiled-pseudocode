/*
 * XREFs of ZwWriteFile @ 0x140159D80
 * Callers:
 *     CmpDoFileWrite @ 0x1403F9028 (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x14049146C (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1404F1370 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x14052C690 (EtwpRealtimeSaveBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x14054346C (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x14057A480 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14061C5AC (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14061C6FC (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140620E48 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140627560 (IopLiveDumpWriteBuffer.c)
 *     SmKmStoreFileWriteHeader @ 0x1406998CC (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1406AA264 (EtwpSavePersistedLogger.c)
 *     CMFFlushHitsFile @ 0x1406B8EA0 (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x1406BB1F8 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x1406F2368 (KdPullRemoteFile.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
