/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1400BE0E0
 * Callers:
 *     MiComputeZeroClusterMaximum @ 0x1400B553C (MiComputeZeroClusterMaximum.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400BCED8 (MiStoreUpdateMemoryConditions.c)
 *     MiComputeSystemTrimCriteria @ 0x1400BCFF0 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1400BD364 (MiComputeAgingPercent.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BD440 (MiBuildMdlForMappedFileFault.c)
 *     MiPrefetchNormally @ 0x1400BE0A0 (MiPrefetchNormally.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1400BED10 (MmGetAvailablePagesBelowPriority.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140124794 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiForcedTrim @ 0x1401E95FC (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x1406636D0 (MiAllocateCrcList.c)
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

  v2 = a1 + 248;
  v3 = a1[224] + a1[232];
  v4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned __int64)&a1[4 * a2 + 248 + a2];
  if ( (unsigned __int64)(a1 + 248) >= v6 )
    return a1[224] + a1[232];
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
