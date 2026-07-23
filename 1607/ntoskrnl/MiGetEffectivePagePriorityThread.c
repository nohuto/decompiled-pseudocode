/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x140026934
 * Callers:
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiPrefetchRestOfCluster @ 0x1400B05A4 (MiPrefetchRestOfCluster.c)
 *     MiInitializeImageProtos @ 0x1400FB5BC (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1400FB8C8 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1401E5000 (MmCopyMemory.c)
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x1404D6C9C (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1404D77A0 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1736);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
