/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1400C0250
 * Callers:
 *     MiComputeZeroClusterMaximum @ 0x1400B76A4 (MiComputeZeroClusterMaximum.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400BF048 (MiStoreUpdateMemoryConditions.c)
 *     MiComputeSystemTrimCriteria @ 0x1400BF160 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x1400BF4D4 (MiComputeAgingPercent.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BF5B0 (MiBuildMdlForMappedFileFault.c)
 *     MiPrefetchNormally @ 0x1400C0210 (MiPrefetchNormally.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1400C0E80 (MmGetAvailablePagesBelowPriority.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140124224 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiForcedTrim @ 0x1401E97D0 (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x1406635EC (MiAllocateCrcList.c)
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
