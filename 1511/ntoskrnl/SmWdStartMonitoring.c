/*
 * XREFs of SmWdStartMonitoring @ 0x1402096B8
 * Callers:
 *     SmKmStoreAdd @ 0x1404D1C00 (SmKmStoreAdd.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 */

char __fastcall SmWdStartMonitoring(__int64 a1)
{
  return KiSetTimerEx(a1, -10000000LL, 1000LL, 0, a1 + 64);
}
