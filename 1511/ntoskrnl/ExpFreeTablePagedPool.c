/*
 * XREFs of ExpFreeTablePagedPool @ 0x1404AE3D0
 * Callers:
 *     ExpFreeHandleTable @ 0x1404AE2CC (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1404AE398 (ExpFreeLowLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1404B5F30 (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x14066CA18 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x14006DCC4 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
