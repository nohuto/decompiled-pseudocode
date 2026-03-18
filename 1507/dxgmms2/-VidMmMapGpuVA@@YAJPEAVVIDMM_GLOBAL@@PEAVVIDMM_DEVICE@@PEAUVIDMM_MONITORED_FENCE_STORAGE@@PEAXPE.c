/*
 * XREFs of ?VidMmMapGpuVA@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C0003DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmMapGpuVA(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        void *a4,
        unsigned __int64 *a5,
        unsigned int a6)
{
  return VIDMM_GLOBAL::MapGpuVA(a1, a2, a3, a4, a5, a6);
}
