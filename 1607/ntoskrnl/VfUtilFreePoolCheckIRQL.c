/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x14012F474
 * Callers:
 *     VfTargetDriversRemove @ 0x14012F358 (VfTargetDriversRemove.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140705728 (VerifierIoSetCompletionRoutineEx.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     ViDevObjRemove @ 0x14070DAC0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEDC (ViRemLockDeleteFirstTreeNode.c)
 *     ViTargetTrackContiguousMemory @ 0x140710710 (ViTargetTrackContiguousMemory.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140717D6C (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
