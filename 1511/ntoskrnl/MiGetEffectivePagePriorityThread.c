/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x140011A18
 * Callers:
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x140011920 (MiGetPageForHeader.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiPrefetchRestOfCluster @ 0x1400F093C (MiPrefetchRestOfCluster.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1404B7048 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1732);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread();
}
