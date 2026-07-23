/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x1401DB9B4
 * Callers:
 *     MmInSwapProcess @ 0x140090CC4 (MmInSwapProcess.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x1401E3504 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
