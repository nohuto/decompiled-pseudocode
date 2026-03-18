/*
 * XREFs of ?QueryAllocationSizeInSystemMemory@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0074100
 * Callers:
 *     VidMmQueryAllocationSizeInSystemMemory @ 0x1C0015080 (VidMmQueryAllocationSizeInSystemMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::QueryAllocationSizeInSystemMemory(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2)
{
  return *(_QWORD *)(**(_QWORD **)a2 + 8LL);
}
