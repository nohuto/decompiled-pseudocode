/*
 * XREFs of BcdGetElementData @ 0x14068DEA8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14021682C (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x14068E06C (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
