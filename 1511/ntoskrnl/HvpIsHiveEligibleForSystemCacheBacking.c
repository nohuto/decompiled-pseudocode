/*
 * XREFs of HvpIsHiveEligibleForSystemCacheBacking @ 0x1403D3D68
 * Callers:
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     HvLoadHive @ 0x1403D3A54 (HvLoadHive.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 * Callees:
 *     CmpIsHiveOnRemovableDisk @ 0x1405E4D00 (CmpIsHiveOnRemovableDisk.c)
 */

bool __fastcall HvpIsHiveEligibleForSystemCacheBacking(__int64 a1)
{
  bool result; // al
  int v2; // eax

  result = CmpSystemCacheBackedHivesAllowed
        && (MEMORY[0xFFFFF780000002D0] & 0x10000) != 0
        && (v2 = *(_DWORD *)(a1 + 144), (v2 & 0x20000) != 0)
        && (v2 & 0x8001) == 0
        && (v2 & 2) == 0
        && (unsigned __int8)CmpIsHiveOnRemovableDisk() == 0;
  return result;
}
