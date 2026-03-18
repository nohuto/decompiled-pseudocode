/*
 * XREFs of MiSubsectionUsingExtents @ 0x1400E7F14
 * Callers:
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiInsertUnusedSubsection @ 0x140026DCC (MiInsertUnusedSubsection.c)
 *     MiChargeControlAreaPartition @ 0x140027BE0 (MiChargeControlAreaPartition.c)
 *     MiReleaseControlAreaPartition @ 0x140027E70 (MiReleaseControlAreaPartition.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiIncrementSubsectionViewCount @ 0x14002CF20 (MiIncrementSubsectionViewCount.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiSubsectionRequiresCharge @ 0x1400FC9C4 (MiSubsectionRequiresCharge.c)
 *     MiSectionCreated @ 0x1400FD2C8 (MiSectionCreated.c)
 *     MmExtendSection @ 0x1405218EC (MmExtendSection.c)
 *     MiExtendSection @ 0x140521CB4 (MiExtendSection.c)
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
