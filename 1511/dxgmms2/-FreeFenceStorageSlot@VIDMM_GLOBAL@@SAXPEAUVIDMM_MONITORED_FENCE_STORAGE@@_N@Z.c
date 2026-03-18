/*
 * XREFs of ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C00102F8
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000DF2C (VidSchiReleaseSyncObjectReference.c)
 *     ?VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C00102D0 (-VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0010394 (-FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeFenceStorageSlot(struct VIDMM_MONITORED_FENCE_STORAGE *a1, char a2)
{
  bool v2; // zf
  VIDMM_PROCESS_FENCE_STORAGE *v4; // rcx

  if ( *(_QWORD *)a1 )
  {
    v2 = a2 == 0;
    v4 = *(VIDMM_PROCESS_FENCE_STORAGE **)(*(_QWORD *)a1 + 104LL);
    if ( v2 )
      VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(v4, a1);
    else
      VIDMM_PROCESS_FENCE_STORAGE::FreeSharedFenceStorageSlot(v4, a1);
  }
}
