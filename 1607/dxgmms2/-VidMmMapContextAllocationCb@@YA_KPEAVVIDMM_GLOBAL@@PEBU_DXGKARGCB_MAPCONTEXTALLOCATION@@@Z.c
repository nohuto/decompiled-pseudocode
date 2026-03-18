/*
 * XREFs of ?VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C001D320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall VidMmMapContextAllocationCb(
        struct VIDMM_GLOBAL *a1,
        const struct _DXGKARGCB_MAPCONTEXTALLOCATION *a2)
{
  return VIDMM_GLOBAL::VidMmMapContextAllocationCb(a1, a2);
}
