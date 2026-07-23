/*
 * XREFs of ZwWriteFile @ 0x140150720
 * Callers:
 *     CmpDoFileWrite @ 0x1403DD10C (CmpDoFileWrite.c)
 *     EtwpRealtimeSaveState @ 0x1404C65B4 (EtwpRealtimeSaveState.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x1404CB248 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x1404E7AA4 (EtwpRealtimeSaveBuffer.c)
 *     RtlGetSetBootStatusData @ 0x14050BC64 (RtlGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1405457B0 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x1405F234C (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x1405F249C (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1405F7140 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x1405FD8EC (IopLiveDumpWriteBuffer.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 *     CMFFlushHitsFile @ 0x140676460 (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x140678AC8 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x1406AE0E0 (KdPullRemoteFile.c)
 *     VfZwWriteFile @ 0x1406D49F8 (VfZwWriteFile.c)
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
