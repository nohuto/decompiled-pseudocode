/*
 * XREFs of MiAddLockedPageCharge @ 0x1400AA108
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14000F9D0 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiRelockProtoPoolPage @ 0x1400105C4 (MiRelockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14001103C (MiCheckProtoPtePageState.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiLockDownWorkingSet @ 0x14009A59C (MiLockDownWorkingSet.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     MiMakeProtoAddressValid @ 0x1400E20DC (MiMakeProtoAddressValid.c)
 *     MiBuildForkPageTable @ 0x1400EE1AC (MiBuildForkPageTable.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MiDbgMarkPfnModified @ 0x1401DDAA0 (MiDbgMarkPfnModified.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140066150 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1400AA160 (MiChargeForLockedPage.c)
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
