/*
 * XREFs of BcdGetElementData @ 0x1406D2708
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402309A4 (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x1406D28CC (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
