/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x140736CF8
 * Callers:
 *     VfAddVerifierEntry @ 0x14075886C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140758A54 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x1407E50D8 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x140195F20 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x140264960 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x14052F798 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x1407347D8 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x1407426FC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140746278 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x14074A870 (VfSettingsMiscellaneousChecksInitPhase1.c)
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
    qword_14032BB08 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_14032BB98 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
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
