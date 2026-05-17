/*
 * XREFs of RtlpTraceDatabaseFree @ 0x1800E5E40
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800E5B70 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
