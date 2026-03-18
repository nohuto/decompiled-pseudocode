/*
 * XREFs of MiSubsectionUsingExtents @ 0x1400A8E40
 * Callers:
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiSectionCreated @ 0x140038BD8 (MiSectionCreated.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiChargeControlAreaPartition @ 0x14006DBF0 (MiChargeControlAreaPartition.c)
 *     MiReleaseControlAreaPartition @ 0x14006DC60 (MiReleaseControlAreaPartition.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiSubsectionRequiresCharge @ 0x1400ED1C4 (MiSubsectionRequiresCharge.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSubsectionUsingExtents(_BYTE *a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (v1 & 0x20) != 0 )
  {
    if ( (a1[34] & 4) == 0 )
      return 0LL;
  }
  else if ( (v1 & 0x40000000) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
