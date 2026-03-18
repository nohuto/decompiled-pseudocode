/*
 * XREFs of EtwpGetCycleCount @ 0x1400451E8
 * Callers:
 *     WmiGetClock @ 0x14020D968 (WmiGetClock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 EtwpGetCycleCount()
{
  return __rdtsc();
}
