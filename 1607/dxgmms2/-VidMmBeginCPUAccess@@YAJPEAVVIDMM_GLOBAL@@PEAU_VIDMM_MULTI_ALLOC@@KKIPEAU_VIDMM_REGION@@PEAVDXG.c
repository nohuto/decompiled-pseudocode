/*
 * XREFs of ?VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0011950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall VidMmBeginCPUAccess(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        struct DXGPROCESSVIDMMLOCK *a7,
        void **a8)
{
  return VIDMM_GLOBAL::BeginCPUAccess(a1, a2, a3, a4, a5, a6, a7, a8);
}
