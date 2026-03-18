/*
 * XREFs of MiMakePageFilePte @ 0x1401F274C
 * Callers:
 *     MiInsertCachedPte @ 0x1400525F0 (MiInsertCachedPte.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14010F220 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiFindPageFileWriteCluster @ 0x140125A40 (MiFindPageFileWriteCluster.c)
 *     MiCreateZeroThreadContext @ 0x14013AB00 (MiCreateZeroThreadContext.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140663480 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
