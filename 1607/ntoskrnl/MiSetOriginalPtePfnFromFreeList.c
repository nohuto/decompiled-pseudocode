/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4
 * Callers:
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MiLargeFreePageToMdl @ 0x140089824 (MiLargeFreePageToMdl.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14008A180 (MiUnlinkNodeLargePageHelper.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 *     MiReplacePageTablePage @ 0x1400A3B30 (MiReplacePageTablePage.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiConvertContiguousPages @ 0x140104754 (MiConvertContiguousPages.c)
 *     MiObtainTransitionPage @ 0x140104F94 (MiObtainTransitionPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiFindLargeNodePage @ 0x1401E314C (MiFindLargeNodePage.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 *     MiGetFastLargePage @ 0x140662AD4 (MiGetFastLargePage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401F2784 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiSetOriginalPtePfnFromFreeList(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = MiSwizzleInvalidPte(128LL);
    *v2 = result;
  }
  return result;
}
