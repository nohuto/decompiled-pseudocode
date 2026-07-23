/*
 * XREFs of HvpIsHiveEligibleForSystemCacheBacking @ 0x14047DEC0
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 * Callees:
 *     CmpIsHiveOnRemovableDisk @ 0x14060430C (CmpIsHiveOnRemovableDisk.c)
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
