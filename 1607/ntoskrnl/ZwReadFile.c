/*
 * XREFs of ZwReadFile @ 0x140159D40
 * Callers:
 *     CmpFileReadEx @ 0x1400848A0 (CmpFileReadEx.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreBuffer @ 0x14052ABB8 (EtwpRealtimeRestoreBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x14054346C (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x14057A480 (EtwpRealtimeRestoreState.c)
 *     CmpTouchFile @ 0x1406043E4 (CmpTouchFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
