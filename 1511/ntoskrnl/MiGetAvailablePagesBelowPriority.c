/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x14007CA30
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140014BC8 (MiStoreUpdateMemoryConditions.c)
 *     MiComputeSystemTrimCriteria @ 0x140014E30 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140015198 (MiComputeAgingPercent.c)
 *     MiPrefetchNormally @ 0x14007C9E0 (MiPrefetchNormally.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400AB410 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeZeroClusterMaximum @ 0x1400E71AC (MiComputeZeroClusterMaximum.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1400F2654 (MmGetAvailablePagesBelowPriority.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14011529C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiForcedTrim @ 0x1401D7A98 (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x14050E9B4 (MiAllocateCrcList.c)
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

  v2 = a1 + 232;
  v3 = a1[208] + a1[216];
  v4 = 0LL;
  v5 = 0LL;
  v6 = (unsigned __int64)&a1[4 * a2 + 232 + a2];
  if ( (unsigned __int64)(a1 + 232) >= v6 )
    return a1[208] + a1[216];
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
