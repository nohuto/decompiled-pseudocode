/*
 * XREFs of ExpFreeTablePagedPool @ 0x140508DD0
 * Callers:
 *     ExpFreeHandleTable @ 0x140508CCC (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x140508D98 (ExpFreeLowLevelTable.c)
 *     ExpAllocateMidLevelTable @ 0x140523564 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140523718 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1406F0234 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(ULONG_PTR a1, void *a2, ULONG_PTR a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
