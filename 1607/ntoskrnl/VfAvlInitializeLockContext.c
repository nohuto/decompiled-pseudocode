/*
 * XREFs of VfAvlInitializeLockContext @ 0x140082748
 * Callers:
 *     VfTargetDriversAdd @ 0x1400824FC (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14012F358 (VfTargetDriversRemove.c)
 *     VfDevObjIsDeviceRemoved @ 0x14070D6F4 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x14070D758 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x14070DA4C (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x14070DAC0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x14070DC0C (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x14070DE00 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEDC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x14070DF78 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x14070FEB0 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x14071005C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140710144 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x14071049C (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140710710 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140710834 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1407108CC (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140715ED8 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x140717598 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140717D6C (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x14071D000 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) |= 4u;
  return result;
}
