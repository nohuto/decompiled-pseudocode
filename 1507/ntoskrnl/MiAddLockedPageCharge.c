/*
 * XREFs of MiAddLockedPageCharge @ 0x1400B50C0
 * Callers:
 *     MiLockDownWorkingSet @ 0x140001790 (MiLockDownWorkingSet.c)
 *     MiBuildForkPageTable @ 0x140003AA4 (MiBuildForkPageTable.c)
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     MiCheckProtoPtePageState @ 0x140081F50 (MiCheckProtoPtePageState.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiMakeProtoAddressValid @ 0x1400E08B8 (MiMakeProtoAddressValid.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400E25B4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiRelockProtoPoolPage @ 0x1400E2960 (MiRelockProtoPoolPage.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiDbgMarkPfnModified @ 0x140222E0C (MiDbgMarkPfnModified.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x14003C5B0 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1400B6C20 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int locked; // r9d
  char v5; // r10

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1, a2, a3, 1LL) )
  {
    locked = MiChargeForLockedPage(a1, v5);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
