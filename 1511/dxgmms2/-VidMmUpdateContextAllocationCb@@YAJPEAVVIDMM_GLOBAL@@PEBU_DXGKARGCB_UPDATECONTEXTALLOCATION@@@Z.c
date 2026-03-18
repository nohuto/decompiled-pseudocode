/*
 * XREFs of ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C001C630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmUpdateContextAllocationCb(
        struct VIDMM_GLOBAL *a1,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2)
{
  return VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(a1, a2, 0);
}
