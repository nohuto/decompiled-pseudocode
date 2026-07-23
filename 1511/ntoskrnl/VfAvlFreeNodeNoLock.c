/*
 * XREFs of VfAvlFreeNodeNoLock @ 0x140002108
 * Callers:
 *     VfTargetDriversRemove @ 0x140001FF8 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x1406C1A28 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1406C1E30 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x1406C8C74 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1406C8D68 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1406C93A0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1406C97D4 (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

void __fastcall VfAvlFreeNodeNoLock(__int64 a1, _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 28) == 1 )
  {
    ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, a2);
  }
  else
  {
    KeGetCurrentIrql();
    VfPoolDelayFreeIfPossible(a2);
  }
}
