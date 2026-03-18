/*
 * XREFs of SmWdStartMonitoring @ 0x140258848
 * Callers:
 *     SmKmStoreAdd @ 0x1404F97FC (SmKmStoreAdd.c)
 * Callees:
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 */

char __fastcall SmWdStartMonitoring(__int64 a1)
{
  return KiSetTimerEx(a1, -10000000LL, 1000, 0, a1 + 64);
}
