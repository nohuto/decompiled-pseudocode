/*
 * XREFs of ?VidMmReclaimAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAH@Z @ 0x1C0011950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall VidMmReclaimAllocation(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        unsigned __int64 *a4,
        int *a5)
{
  return VIDMM_GLOBAL::ReclaimAllocation(a1, a2, a3, a4, a5);
}
