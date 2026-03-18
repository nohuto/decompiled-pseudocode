/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x14020ACBC
 * Callers:
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x14010EF54 (MmStealTopLevelPage.c)
 *     MmInSwapProcess @ 0x140110ACC (MmInSwapProcess.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
