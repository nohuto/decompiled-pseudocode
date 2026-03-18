/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x140523FC0
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x1405235C8 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x140523F88 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140524018 (PsChargeProcessPagedPoolQuota.c)
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
