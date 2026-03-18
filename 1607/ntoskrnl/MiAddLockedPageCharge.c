/*
 * XREFs of MiAddLockedPageCharge @ 0x14004F188
 * Callers:
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiRelockProtoPoolPage @ 0x140022910 (MiRelockProtoPoolPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140022FF8 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140086098 (MiMakeDriverPagesPrivate.c)
 *     MiMakeProtoAddressValid @ 0x1400B78A4 (MiMakeProtoAddressValid.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C61A4 (MiWaitForCollidedFaultComplete.c)
 *     MiBuildForkPageTable @ 0x14010AAB0 (MiBuildForkPageTable.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiLockPagedAddress @ 0x14010B9BC (MiLockPagedAddress.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiLockDownWorkingSet @ 0x14010C604 (MiLockDownWorkingSet.c)
 *     MiDbgMarkPfnModified @ 0x140147D2C (MiDbgMarkPfnModified.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1401EDA58 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6F38 (MiMakeImagePageOk.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x14004ED00 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x140103380 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  __int64 v3; // rcx
  unsigned int locked; // r9d
  unsigned int v5; // r10d

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(v3, v5);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
