/*
 * XREFs of RtlNumberOfClearBits @ 0x1400EF684
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400DA200 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400DB664 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140403634 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkCreateSharedExportInformation @ 0x140732268 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkReplaceAllSharedExports @ 0x1407452F0 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
