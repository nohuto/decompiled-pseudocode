/*
 * XREFs of EtwpGetCycleCount @ 0x1400598BC
 * Callers:
 *     WmiGetClock @ 0x1402256B8 (WmiGetClock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 EtwpGetCycleCount()
{
  return __rdtsc();
}
