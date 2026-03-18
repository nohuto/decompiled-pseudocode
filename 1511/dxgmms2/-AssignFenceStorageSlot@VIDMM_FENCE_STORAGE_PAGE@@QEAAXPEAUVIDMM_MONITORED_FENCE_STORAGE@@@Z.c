/*
 * XREFs of ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0010440
 * Callers:
 *     ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0010328 (-FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C003B9F4 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0080B24 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  CCHAR LeastSignificantBit; // al
  __int64 v5; // rcx

  LeastSignificantBit = RtlFindLeastSignificantBit(~*((_QWORD *)this + 8));
  v5 = (unsigned int)(LeastSignificantBit << 6);
  *((_QWORD *)this + 8) |= 1LL << LeastSignificantBit;
  *(_QWORD *)a2 = this;
  *((_DWORD *)a2 + 4) = v5;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 10) + v5;
}
