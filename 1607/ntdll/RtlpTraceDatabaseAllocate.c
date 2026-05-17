/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1800F3644
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1800F3290 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800F36C8 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
