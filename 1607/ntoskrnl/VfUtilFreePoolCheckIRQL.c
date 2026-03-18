/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x14012EF04
 * Callers:
 *     VfTargetDriversRemove @ 0x14012EDE8 (VfTargetDriversRemove.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1407056F8 (VerifierIoSetCompletionRoutineEx.c)
 *     ViFreeMapRegisterFile @ 0x140709458 (ViFreeMapRegisterFile.c)
 *     ViDevObjRemove @ 0x14070DA90 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEAC (ViRemLockDeleteFirstTreeNode.c)
 *     ViTargetTrackContiguousMemory @ 0x1407106E0 (ViTargetTrackContiguousMemory.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140717D6C (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(struct _SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
