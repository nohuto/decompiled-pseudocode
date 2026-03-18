/*
 * XREFs of MiIsPteInStore @ 0x140122330
 * Callers:
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiComputeFaultCluster @ 0x1400BFA8C (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401DF4E0 (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  return (a2 & 4) != 0 && a2 >> 12 == *(_DWORD *)(a1 + 1060);
}
