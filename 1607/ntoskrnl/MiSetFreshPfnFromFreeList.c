/*
 * XREFs of MiSetFreshPfnFromFreeList @ 0x1401F2FAC
 * Callers:
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     MiGetFreeOrZeroPage @ 0x14003DC80 (MiGetFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x140061478 (MiSlistGetFreePage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066D00 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     MiSwapStackPageNoDpc @ 0x14010BB54 (MiSwapStackPageNoDpc.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1401209F0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceLockedPage @ 0x1401EB18C (MiReplaceLockedPage.c)
 *     MiReuseStandbyPage @ 0x1401F3A84 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetFreshPfnFromFreeList(__int64 a1)
{
  return MiSetOriginalPtePfnFromFreeList(a1 + 16);
}
