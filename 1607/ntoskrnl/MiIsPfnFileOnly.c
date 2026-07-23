/*
 * XREFs of MiIsPfnFileOnly @ 0x14004E500
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiActivePageClaimCandidate @ 0x1401037E0 (MiActivePageClaimCandidate.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiObtainTransitionPage @ 0x140104F94 (MiObtainTransitionPage.c)
 *     MiCanPageMove @ 0x1401051DC (MiCanPageMove.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiDbgMarkPfnModified @ 0x14014829C (MiDbgMarkPfnModified.c)
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
