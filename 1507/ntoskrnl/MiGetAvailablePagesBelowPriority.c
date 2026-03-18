/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x140055320
 * Callers:
 *     MmGetAvailablePagesBelowPriority @ 0x140025FA4 (MmGetAvailablePagesBelowPriority.c)
 *     MiPrefetchNormally @ 0x1400552D0 (MiPrefetchNormally.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400DEFD0 (MiBuildMdlForMappedFileFault.c)
 *     MiGetAvailablePagesForTrimPass @ 0x140113778 (MiGetAvailablePagesForTrimPass.c)
 *     MiComputeZeroClusterMaximum @ 0x140125EF8 (MiComputeZeroClusterMaximum.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14014B610 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiAllocateCrcList @ 0x1406A8890 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rbx

  v2 = a1 + 216;
  v3 = a1[192] + a1[200];
  v4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned __int64)&a1[4 * a2 + 216 + a2];
  if ( (unsigned __int64)(a1 + 216) >= v6 )
    return a1[192] + a1[200];
  if ( (v6 - (unsigned __int64)v2 + 39) / 0x28 >= 2 )
  {
    do
    {
      v4 += *v2;
      v5 += v2[5];
      v2 += 10;
    }
    while ( (unsigned __int64)v2 < v6 - 40 );
  }
  if ( (unsigned __int64)v2 < v6 )
    v3 += *v2;
  return v3 + v4 + v5;
}
