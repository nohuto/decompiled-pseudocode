/*
 * XREFs of ZwQueryEaFile @ 0x140181590
 * Callers:
 *     VfZwQueryEaFile @ 0x140757104 (VfZwQueryEaFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
