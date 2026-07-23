/*
 * XREFs of ZwReadFile @ 0x1401506E0
 * Callers:
 *     CmpFileReadEx @ 0x14001B248 (CmpFileReadEx.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1404E7954 (EtwpRealtimeRestoreBuffer.c)
 *     RtlGetSetBootStatusData @ 0x14050BC64 (RtlGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1405457B0 (EtwpRealtimeRestoreState.c)
 *     CmpTouchFile @ 0x1405E4E8C (CmpTouchFile.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     AslpFileHasActiveMarkWrapper @ 0x14068298C (AslpFileHasActiveMarkWrapper.c)
 *     VfZwReadFile @ 0x1406D3EDC (VfZwReadFile.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
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
