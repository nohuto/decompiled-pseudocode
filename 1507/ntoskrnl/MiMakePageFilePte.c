/*
 * XREFs of MiMakePageFilePte @ 0x140225C2C
 * Callers:
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiInsertCachedPte @ 0x1400B1C20 (MiInsertCachedPte.c)
 *     MiFindPageFileWriteCluster @ 0x14013A5CC (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402220BC (MiTrimUnusedPageFileRegionsApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14040A3B8 (MiReserveWorkingSetSwapSpaceRuns.c)
 *     MiInitializeZeroPagePtes @ 0x140597BAC (MiInitializeZeroPagePtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
