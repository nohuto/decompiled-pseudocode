/*
 * XREFs of HvpIsHiveEligibleForSystemCacheBacking @ 0x14047F16C
 * Callers:
 *     HvLoadHive @ 0x14047ECF8 (HvLoadHive.c)
 *     HvInitializeHive @ 0x14047FBA4 (HvInitializeHive.c)
 *     HvpDropPagedBins @ 0x14054DD48 (HvpDropPagedBins.c)
 * Callees:
 *     CmpIsHiveOnRemovableDisk @ 0x140604258 (CmpIsHiveOnRemovableDisk.c)
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
