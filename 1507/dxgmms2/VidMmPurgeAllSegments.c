/*
 * XREFs of VidMmPurgeAllSegments @ 0x1C000E720
 * Callers:
 *     <none>
 * Callees:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005139C (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 VidMmPurgeAllSegments()
{
  return VIDMM_GLOBAL::PurgeAllSegments();
}
