/*
 * XREFs of MiAdvanceFaultList @ 0x1400C01B0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiCreateSharedZeroPages @ 0x1400390B0 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x14003B240 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MiResolvePageTablePage @ 0x14003FD10 (MiResolvePageTablePage.c)
 *     MiResolveSharedZeroFault @ 0x140042000 (MiResolveSharedZeroFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BF5B0 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x1400BFA8C (MiComputeFaultCluster.c)
 *     MiPrefetchVirtualMemory @ 0x1400BFCA0 (MiPrefetchVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
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
