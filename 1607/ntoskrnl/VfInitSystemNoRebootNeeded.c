/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x140703204
 * Callers:
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140721060 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x1407B9E64 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x140171F58 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14022E2C8 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x140481DFC (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x140700648 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x14070CF54 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140710A6C (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140716810 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

void __fastcall VfInitSystemNoRebootNeeded(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx

  v3 = KernelVerifier;
  if ( !ViFullyInitialized )
  {
    if ( !a2 )
    {
      VfInitializedWithoutReboot = 1;
      MmLockPagableDataSection(VfInitVerifierComponents);
      MmLockPagableDataSection(&VfSettingsIrpDeferralTime);
      MmLockPagableDataSection((PVOID)&ViShortTime);
      MmLockPagableDataSection(&ViBugCheckInitialControl);
    }
    if ( v3 || !a2 )
      ExDisableAllLookasideLists();
    VerifierModifyableOptions = 0x1FFF;
    v4 = (unsigned int)MmVerifyDriverLevel;
    if ( MmVerifyDriverLevel == -1 )
      v4 = 2491LL;
    MmVerifierData = v4;
    if ( v3 == 1 )
    {
      ViVerifyAllDrivers = 1;
      MmVerifierData = v4 & 0xFFFFFFDF;
      MmVerifyDriverLevel &= ~0x20u;
      ExSetPoolFlags(8u);
      v4 = (unsigned int)MmVerifierData;
    }
    qword_140300B48 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_140300AE8 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
    ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( !a2 )
    {
      VfInitVerifierComponents(v4, (unsigned int)ViVerifyAllDrivers, (unsigned int)KernelVerifier);
      VfPoolInitPhase1();
      VfSettingsMiscellaneousChecksInitPhase1();
      VfPendingInitPhase1();
      IoVerifierInit(MmVerifierData);
    }
    ViFullyInitialized = 1;
  }
}
