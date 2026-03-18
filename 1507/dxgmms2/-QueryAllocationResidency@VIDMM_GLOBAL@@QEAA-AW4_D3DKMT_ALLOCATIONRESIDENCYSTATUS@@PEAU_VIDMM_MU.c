/*
 * XREFs of ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C005169C
 * Callers:
 *     VidMmQueryAllocationResidency @ 0x1C000E730 (VidMmQueryAllocationResidency.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS __fastcall VIDMM_GLOBAL::QueryAllocationResidency(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryOneAllocationResidency(this, a2);
}
