/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x1402260DC
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x140004A08 (MiDuplicateCloneLeaf.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiInvalidateCollidedIos @ 0x14012CBCC (MiInvalidateCollidedIos.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x140217428 (MiSwapHardFaultPage.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx

  v1 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte(v1 & 0xFFFF000000000FFFuLL | ((v2 & 0xFFFFFFFFFLL) << 12));
}
