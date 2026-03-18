/*
 * XREFs of MiIsPfnFileOnly @ 0x14004E980
 * Callers:
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiProbeLeafFrame @ 0x14002FDC0 (MiProbeLeafFrame.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x14003AA90 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MiGetPagePrivilege @ 0x1400E3730 (MiGetPagePrivilege.c)
 *     MiActivePageClaimCandidate @ 0x140105A60 (MiActivePageClaimCandidate.c)
 *     MiClaimPhysicalRun @ 0x1401063DC (MiClaimPhysicalRun.c)
 *     MiObtainTransitionPage @ 0x140107214 (MiObtainTransitionPage.c)
 *     MiCanPageMove @ 0x14010745C (MiCanPageMove.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiDbgMarkPfnModified @ 0x140147D2C (MiDbgMarkPfnModified.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnFileOnly(__int64 a1)
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
