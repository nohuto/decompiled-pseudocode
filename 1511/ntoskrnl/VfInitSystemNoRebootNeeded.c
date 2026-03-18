/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x1406B6A08
 * Callers:
 *     VfAddVerifierEntry @ 0x1406D4C98 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1406D4E68 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x14076F8BC (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x140167008 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14021482C (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x1406B47D8 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x1406C0EBC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1406C49B4 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x1406C7E6C (VfSettingsMiscellaneousChecksInitPhase1.c)
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
      ViCodeSectionHandle = (__int64)MmLockPagableDataSection(VfInitVerifierComponents);
      ViDataSectionHandle = (__int64)MmLockPagableDataSection(&VfSettingsIrpDeferralTime);
      ViConstSectionHandle = (__int64)MmLockPagableDataSection((PVOID)&ViShortTime);
      ViBssSectionHandle = (__int64)MmLockPagableDataSection(&ViBugCheckInitialControl);
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
    qword_1402DB228 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_1402DB838 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
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
