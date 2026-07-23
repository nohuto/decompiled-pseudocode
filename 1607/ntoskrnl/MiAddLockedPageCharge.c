/*
 * XREFs of MiAddLockedPageCharge @ 0x14004ED08
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiRelockProtoPoolPage @ 0x140022490 (MiRelockProtoPoolPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140022B78 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiMakeProtoAddressValid @ 0x1400B573C (MiMakeProtoAddressValid.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     MiBuildForkPageTable @ 0x140108830 (MiBuildForkPageTable.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiLockPagedAddress @ 0x14010973C (MiLockPagedAddress.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiLockDownWorkingSet @ 0x14010A384 (MiLockDownWorkingSet.c)
 *     MiDbgMarkPfnModified @ 0x14014829C (MiDbgMarkPfnModified.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1401ED884 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x14004E880 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x140101100 (MiChargeForLockedPage.c)
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
