/*
 * XREFs of ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z @ 0x1C00451D8
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000F368 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C001F704 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     <none>
 */

VIDMM_FENCE_STORAGE_PAGE *__fastcall VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS_FENCE_STORAGE *a2)
{
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 13) = a2;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  return this;
}
