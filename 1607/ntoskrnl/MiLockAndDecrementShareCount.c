/*
 * XREFs of MiLockAndDecrementShareCount @ 0x140075E7C
 * Callers:
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiOutPageSingleKernelStack @ 0x1400757B4 (MiOutPageSingleKernelStack.c)
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 *     MiReleaseInPageRefs @ 0x1400B0950 (MiReleaseInPageRefs.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14054E61C (MiMarkBootGuardPage.c)
 *     MiDeleteLargePfnBitMap @ 0x140664984 (MiDeleteLargePfnBitMap.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 *     MiReturnDriverLoadPages @ 0x1407D106C (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
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
