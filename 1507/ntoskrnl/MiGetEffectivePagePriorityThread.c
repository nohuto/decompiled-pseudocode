/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x14003C720
 * Callers:
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiPrefetchRestOfCluster @ 0x1400DEAF8 (MiPrefetchRestOfCluster.c)
 *     MiGetPageForHeader @ 0x1400E1178 (MiGetPageForHeader.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiResolveFileOnlyFault @ 0x140230D4C (MiResolveFileOnlyFault.c)
 *     MmPrefetchVirtualAddresses @ 0x1404FB384 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1404FB5E8 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v4; // ecx

  v1 = *(_DWORD *)(a1 + 1732);
  if ( (v1 & 0x100) != 0 )
  {
    return (v1 >> 9) & 7;
  }
  else
  {
    v2 = (*(_DWORD *)(a1 + 1724) >> 12) & 7;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    {
      v4 = 2;
      if ( v2 < 2 )
        return v2;
      return v4;
    }
  }
  return v2;
}
