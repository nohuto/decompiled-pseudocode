/*
 * XREFs of VfAvlInitializeLockContext @ 0x1400025D0
 * Callers:
 *     VfTargetDriversRemove @ 0x140001FF8 (VfTargetDriversRemove.c)
 *     VfTargetDriversAdd @ 0x140002384 (VfTargetDriversAdd.c)
 *     VfDevObjIsDeviceRemoved @ 0x1406C165C (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1406C16C0 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1406C19B4 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1406C1A28 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1406C1B60 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1406C1D54 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1406C1E30 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1406C1EB8 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1406C3DE8 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1406C3F8C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1406C4074 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1406C43B0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1406C4634 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1406C4770 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1406C4808 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1406C7530 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x1406C8BF0 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1406C8C74 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1406C8D68 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1406C93A0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1406C97D4 (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1406D0E58 (VerifierIoWMIRegistrationControl.c)
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
