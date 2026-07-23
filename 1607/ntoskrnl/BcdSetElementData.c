/*
 * XREFs of BcdSetElementData @ 0x1406D2858
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdSetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, ULONG BufferSize)
{
  return BcdSetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
