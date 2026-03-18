/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x14022267C
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1407104FC (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1407105C8 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x140717948 (IovpSessionDataDereference.c)
 * Callees:
 *     <none>
 */

void __fastcall VfUtilFreePoolDispatchLevel(struct _SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
