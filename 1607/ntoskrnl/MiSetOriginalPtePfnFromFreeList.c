/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x1401F2FB8
 * Callers:
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     MiLargeFreePageToMdl @ 0x14008A124 (MiLargeFreePageToMdl.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14008AA80 (MiUnlinkNodeLargePageHelper.c)
 *     MiFreeLargePageMemory @ 0x140090970 (MiFreeLargePageMemory.c)
 *     MiReplacePageTablePage @ 0x1400A55B8 (MiReplacePageTablePage.c)
 *     MiClaimPhysicalRun @ 0x1401063DC (MiClaimPhysicalRun.c)
 *     MiConvertContiguousPages @ 0x1401069D4 (MiConvertContiguousPages.c)
 *     MiObtainTransitionPage @ 0x140107214 (MiObtainTransitionPage.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiFindLargeNodePage @ 0x1401E3320 (MiFindLargeNodePage.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2FAC (MiSetFreshPfnFromFreeList.c)
 *     MiGet64KPage @ 0x1401FB7C4 (MiGet64KPage.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC4CC (MiZeroAndConvertLargePage.c)
 *     MiGetFastLargePage @ 0x1406629F0 (MiGetFastLargePage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401F297C (MiSwizzleInvalidPte.c)
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
