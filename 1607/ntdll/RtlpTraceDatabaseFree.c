/*
 * XREFs of RtlpTraceDatabaseFree @ 0x1800F3690
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800F33C0 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 */

bool RtlpTraceDatabaseFree()
{
  return (int)ZwFreeVirtualMemory() >= 0;
}
