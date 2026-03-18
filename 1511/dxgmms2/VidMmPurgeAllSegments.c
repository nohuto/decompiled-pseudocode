/*
 * XREFs of VidMmPurgeAllSegments @ 0x1C0014E00
 * Callers:
 *     <none>
 * Callees:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0062FB8 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 VidMmPurgeAllSegments()
{
  return VIDMM_GLOBAL::PurgeAllSegments();
}
