/*
 * XREFs of MiMakePageFilePte @ 0x1401F2578
 * Callers:
 *     MiInsertCachedPte @ 0x140052170 (MiInsertCachedPte.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14010F784 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiFindPageFileWriteCluster @ 0x140125FB0 (MiFindPageFileWriteCluster.c)
 *     MiCreateZeroThreadContext @ 0x14013B070 (MiCreateZeroThreadContext.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140663564 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
