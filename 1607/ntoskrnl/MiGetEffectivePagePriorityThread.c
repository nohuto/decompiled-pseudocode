/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x140026DB4
 * Callers:
 *     MiIssueHardFault @ 0x140024930 (MiIssueHardFault.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiPrefetchRestOfCluster @ 0x1400B2664 (MiPrefetchRestOfCluster.c)
 *     MiInitializeImageProtos @ 0x1400FD83C (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1400FDB48 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1401E51D4 (MmCopyMemory.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x1404F3D10 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1404F4814 (MmPrefetchVirtualAddresses.c)
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
