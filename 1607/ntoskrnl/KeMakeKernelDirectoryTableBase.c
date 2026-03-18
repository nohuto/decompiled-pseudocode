/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x1401DBB88
 * Callers:
 *     MmInSwapProcess @ 0x140091564 (MmInSwapProcess.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x1401E36D8 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
