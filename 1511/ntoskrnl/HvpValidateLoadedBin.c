/*
 * XREFs of HvpValidateLoadedBin @ 0x1403D8FD8
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401AB468 (HvpMapHiveImageFromSystemCache.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1403D8960 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x1403D8C44 (HvpMapHiveImage.c)
 *     HvpApplyLogEntry @ 0x1405EDD44 (HvpApplyLogEntry.c)
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
