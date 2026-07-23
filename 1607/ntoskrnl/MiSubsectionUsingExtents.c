/*
 * XREFs of MiSubsectionUsingExtents @ 0x1400E5DB4
 * Callers:
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     MiChargeControlAreaPartition @ 0x140027760 (MiChargeControlAreaPartition.c)
 *     MiReleaseControlAreaPartition @ 0x1400279F0 (MiReleaseControlAreaPartition.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiSubsectionRequiresCharge @ 0x1400FA744 (MiSubsectionRequiresCharge.c)
 *     MiSectionCreated @ 0x1400FB048 (MiSectionCreated.c)
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSubsectionUsingExtents(unsigned __int8 *a1)
{
  unsigned int v1; // eax
  int v2; // eax

  v1 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (v1 & 0x20) != 0 )
    v2 = a1[34] >> 2;
  else
    v2 = v1 >> 30;
  return v2 & 1;
}
