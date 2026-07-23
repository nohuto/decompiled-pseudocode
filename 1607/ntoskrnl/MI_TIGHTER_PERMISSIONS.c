/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x1400FC498
 * Callers:
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  return (a2 & 0x40) == 0 && (a1 & 0x40) != 0
      || (a2 & 2) == 0 && (a1 & 2) != 0
      || a2 < 0 && (a1 & 0x8000000000000000uLL) == 0;
}
