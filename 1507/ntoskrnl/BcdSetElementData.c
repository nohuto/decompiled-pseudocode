/*
 * XREFs of BcdSetElementData @ 0x14070D9D8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdSetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, ULONG BufferSize)
{
  return BcdSetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
