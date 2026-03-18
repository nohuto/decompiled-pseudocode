/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x1401CBC1C
 * Callers:
 *     MmInSwapProcess @ 0x1400356E8 (MmInSwapProcess.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x1400D95E8 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
