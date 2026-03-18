/*
 * XREFs of MiLockAndDecrementShareCount @ 0x140005934
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400052A8 (MiOutPageSingleKernelStack.c)
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x1400328BC (MmOutSwapProcess.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiReleaseInPageRefs @ 0x1400F1950 (MiReleaseInPageRefs.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14052F734 (MiMarkBootGuardPage.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 *     MiReturnDriverLoadPages @ 0x140784C40 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
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
