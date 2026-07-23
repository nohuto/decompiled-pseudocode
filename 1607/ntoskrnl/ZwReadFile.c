/*
 * XREFs of ZwReadFile @ 0x14015A2B0
 * Callers:
 *     CmpFileReadEx @ 0x140082A00 (CmpFileReadEx.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreBuffer @ 0x14052B808 (EtwpRealtimeRestoreBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x1405439AC (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x14057A9C0 (EtwpRealtimeRestoreState.c)
 *     CmpTouchFile @ 0x140604498 (CmpTouchFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
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
  return KiServiceInternal(FileHandle);
}
