/*
 * XREFs of BcdGetElementData @ 0x14070D9C0
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x14070DB84 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
