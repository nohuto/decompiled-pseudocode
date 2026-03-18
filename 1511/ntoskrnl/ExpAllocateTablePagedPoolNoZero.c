/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x1403E3314
 * Callers:
 *     ExpAllocateLowLevelTable @ 0x1403E32DC (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1404B5F94 (ExpAllocateTablePagedPool.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1403E336C (PsChargeProcessPagedPoolQuota.c)
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
