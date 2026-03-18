/*
 * XREFs of VfAvlCleanupLockContext @ 0x1400257E0
 * Callers:
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 *     VfTargetDriversAdd @ 0x140153EF4 (VfTargetDriversAdd.c)
 *     VfTargetDriversGetNode @ 0x14025B1DC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x140742E88 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140742EEC (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1407431E0 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140743254 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1407433B8 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1407435AC (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407436A4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140743758 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140745688 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140745840 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140745928 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140745B48 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140745C64 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140745EF8 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140746034 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1407460CC (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140749F34 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x14074B77C (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14074BFA0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14074C420 (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x140754A20 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400259C0 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

unsigned __int64 __fastcall VfAvlCleanupLockContext(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    result = ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
  if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
  {
    result = *(unsigned __int8 *)(a1 + 8);
    __writecr8(result);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}
