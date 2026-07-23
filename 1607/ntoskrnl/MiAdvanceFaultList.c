/*
 * XREFs of MiAdvanceFaultList @ 0x1400BE040
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 *     MiResolveSharedZeroFault @ 0x140041B80 (MiResolveSharedZeroFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BD440 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x1400BD91C (MiComputeFaultCluster.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  unsigned __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r10

  v1 = a1[1];
  v2 = a1[3];
  result = 2 * v2;
  v4 = *(_QWORD *)(v1 + 16 * v2 + 8);
  v5 = *(_DWORD *)(v1 + 16 * v2) & 0xFFF;
  if ( ++a1[4] == (unsigned __int64)(v5 + v4 + 4095) >> 12 )
  {
    result = a1[2];
    v6 = v2 + 1;
    a1[3] = v6;
    a1[4] = 0LL;
    if ( v6 < result && !*(_QWORD *)(v1 + 16 * v6 + 8) )
      a1[3] = result;
  }
  return result;
}
