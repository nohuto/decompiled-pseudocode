/*
 * XREFs of EtwpGetCycleCount @ 0x140059D3C
 * Callers:
 *     WmiGetClock @ 0x14022588C (WmiGetClock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 EtwpGetCycleCount()
{
  return __rdtsc();
}
