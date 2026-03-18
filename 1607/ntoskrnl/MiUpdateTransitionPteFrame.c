/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x1401F2A38
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiInvalidateCollidedIos @ 0x1400B27C4 (MiInvalidateCollidedIos.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1401209F0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSplitDirectMapPage @ 0x1401EDA58 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x1401FE040 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401F2934 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx

  v1 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte(v1 & 0xFFFF000000000FFFuLL | ((v2 & 0xFFFFFFFFFLL) << 12));
}
