/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1800EA8D4
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1800EA520 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800EA958 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
