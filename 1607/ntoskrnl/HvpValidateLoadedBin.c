/*
 * XREFs of HvpValidateLoadedBin @ 0x1404F7398
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401B71BC (HvpMapHiveImageFromSystemCache.c)
 *     HvpMapHiveImage @ 0x1404F7004 (HvpMapHiveImage.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404F7584 (HvpRemapAndEnlistHiveBins.c)
 *     HvpApplyLogEntry @ 0x1406126C4 (HvpApplyLogEntry.c)
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
