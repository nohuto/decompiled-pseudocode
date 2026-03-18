/*
 * XREFs of EtwpGetCycleCount @ 0x1400A6084
 * Callers:
 *     WmiGetClock @ 0x14025CBD4 (WmiGetClock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 EtwpGetCycleCount()
{
  return __rdtsc();
}
