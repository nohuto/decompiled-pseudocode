/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1800E5DF4
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1800E5A40 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800E5E78 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
