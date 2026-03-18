/*
 * XREFs of ExpFreeTablePagedPool @ 0x14045F21C
 * Callers:
 *     ExpFreeHandleTable @ 0x14045F118 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x14045F1E4 (ExpFreeLowLevelTable.c)
 *     ExpAllocateMidLevelTable @ 0x1404C1120 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404C12B4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1406AD594 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140027B7C (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR a1, void *a2, ULONG_PTR a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
