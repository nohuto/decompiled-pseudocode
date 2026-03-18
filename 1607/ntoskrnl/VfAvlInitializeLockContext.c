/*
 * XREFs of VfAvlInitializeLockContext @ 0x1400845E8
 * Callers:
 *     VfTargetDriversAdd @ 0x14008439C (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14012EDE8 (VfTargetDriversRemove.c)
 *     VfDevObjIsDeviceRemoved @ 0x14070D6C4 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x14070D728 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x14070DA1C (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x14070DA90 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x14070DBDC (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x14070DDD0 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEAC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x14070DF48 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x14070FE80 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x14071002C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140710114 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140710350 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x14071046C (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140710564 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1407106E0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140710804 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x14071089C (ViTargetWMIRegister.c)
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
