/*
 * XREFs of VidMmEndCPUAccess @ 0x1C0004180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmEndCPUAccess(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        struct _VIDMM_REGION *a5)
{
  return VIDMM_GLOBAL::EndCPUAccess(a1, a2, a3, a4, a5);
}
