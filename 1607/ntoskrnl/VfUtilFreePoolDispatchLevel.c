/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x1402224A8
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x14071052C (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1407105F8 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x140717948 (IovpSessionDataDereference.c)
 * Callees:
 *     <none>
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
