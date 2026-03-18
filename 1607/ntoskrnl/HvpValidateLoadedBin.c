/*
 * XREFs of HvpValidateLoadedBin @ 0x140513FA8
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401B72D8 (HvpMapHiveImageFromSystemCache.c)
 *     HvpMapHiveImage @ 0x140513C14 (HvpMapHiveImage.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140514194 (HvpRemapAndEnlistHiveBins.c)
 *     HvpApplyLogEntry @ 0x140612610 (HvpApplyLogEntry.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpValidateLoadedBin(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r9d

  v3 = a1[2];
  v4 = a1[1];
  return v4 + v3 <= a3 && v4 + v3 >= v3 && v3 >= 0x1000 && (v3 & 0xFFF) == 0 && *a1 == 1852400232 && v4 == a2;
}
