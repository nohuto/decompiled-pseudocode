/*
 * XREFs of RtlpTraceDatabaseFree @ 0x1800EA920
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800EA650 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
