/*
 * XREFs of MI_IS_PFN_FILE_ONLY @ 0x140071340
 * Callers:
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MiObtainTransitionPage @ 0x140071020 (MiObtainTransitionPage.c)
 *     MiCanPageMove @ 0x1400712E0 (MiCanPageMove.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiActivePageClaimCandidate @ 0x1400BF620 (MiActivePageClaimCandidate.c)
 *     MiDbgMarkPfnModified @ 0x1401DDAA0 (MiDbgMarkPfnModified.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PFN_FILE_ONLY(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v1 & 0x10000000000000LL) == 0 )
      return 0LL;
  }
  else if ( (v1 & 0x10000000000000LL) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
