/*
 * XREFs of ZwReadFile @ 0x14017F0B0
 * Callers:
 *     CmpFileReadEx @ 0x140075564 (CmpFileReadEx.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140560DB0 (EtwpRealtimeRestoreBuffer.c)
 *     RtlGetSetBootStatusData @ 0x140583084 (RtlGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1405BC764 (EtwpRealtimeRestoreState.c)
 *     CmpTouchFile @ 0x14065BDA0 (CmpTouchFile.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     AslpFileHasActiveMarkWrapper @ 0x140707630 (AslpFileHasActiveMarkWrapper.c)
 *     VfZwReadFile @ 0x140757AA4 (VfZwReadFile.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
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
