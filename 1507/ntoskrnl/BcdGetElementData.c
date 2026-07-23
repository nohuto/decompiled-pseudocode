/*
 * XREFs of BcdGetElementData @ 0x14070D9C0
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x14070DB84 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdGetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, PULONG BufferSize)
{
  return BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
