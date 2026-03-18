/*
 * XREFs of MI_IS_PTE_IN_STORE_EX @ 0x140123ABC
 * Callers:
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiComputeFaultCluster @ 0x1400AD64C (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiCheckCommitReleaseFromVad @ 0x1401CF434 (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_PTE_IN_STORE_EX(__int64 a1, unsigned __int64 a2)
{
  return (a2 & 0x2000) != 0 && ((a2 >> 1) & 0xF) == *(_DWORD *)(a1 + 1076);
}
