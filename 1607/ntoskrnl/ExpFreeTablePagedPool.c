/*
 * XREFs of ExpFreeTablePagedPool @ 0x14045E0EC
 * Callers:
 *     ExpFreeHandleTable @ 0x14045DFE8 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x14045E0B4 (ExpFreeLowLevelTable.c)
 *     ExpAllocateMidLevelTable @ 0x1404ACE50 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404ACFE4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1406AD6CC (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400276FC (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR a1, void *a2, ULONG_PTR a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
