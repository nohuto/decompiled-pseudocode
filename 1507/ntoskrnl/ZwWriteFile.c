/*
 * XREFs of ZwWriteFile @ 0x14017F0F0
 * Callers:
 *     CmpDoFileWrite @ 0x14044ACA4 (CmpDoFileWrite.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x14054B75C (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveState @ 0x14055CE70 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x140560F70 (EtwpRealtimeSaveBuffer.c)
 *     RtlGetSetBootStatusData @ 0x140583084 (RtlGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1405BC764 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14066B078 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14066B1C8 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140670F04 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x140678230 (IopLiveDumpWriteBuffer.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x1406FD2E4 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14072E134 (KdPullRemoteFile.c)
 *     VfZwWriteFile @ 0x1407585C0 (VfZwWriteFile.c)
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
