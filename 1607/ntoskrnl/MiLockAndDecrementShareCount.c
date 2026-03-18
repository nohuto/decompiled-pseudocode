/*
 * XREFs of MiLockAndDecrementShareCount @ 0x140075DFC
 * Callers:
 *     MiIssueHardFault @ 0x140024930 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiCreateSharedZeroPages @ 0x1400390B0 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MiOutPageSingleKernelStack @ 0x140075734 (MiOutPageSingleKernelStack.c)
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x14009126C (MmOutSwapProcess.c)
 *     MiReleaseInPageRefs @ 0x1400B2A10 (MiReleaseInPageRefs.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MiDemoteCombinedPte @ 0x1401F97B0 (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14054E27C (MiMarkBootGuardPage.c)
 *     MiDeleteLargePfnBitMap @ 0x1406648A0 (MiDeleteLargePfnBitMap.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 *     MiReturnDriverLoadPages @ 0x1407D106C (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400E50A0 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(__int64 a1, char a2)
{
  unsigned __int8 v4; // si
  __int64 result; // rax

  v4 = MiLockPageInline(a1);
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  result = MiDecrementShareCount(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v4);
  return result;
}
