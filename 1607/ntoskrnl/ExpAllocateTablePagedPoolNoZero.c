/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x1404C1600
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x1404C1184 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1404C15C8 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1404C1658 (PsChargeProcessPagedPoolQuota.c)
 */

PVOID __fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x6274624Fu);
  if ( PoolWithTag && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  return PoolWithTag;
}
