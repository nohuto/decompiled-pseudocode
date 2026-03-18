/*
 * XREFs of VidMmEndDmaBufferCPUAccess @ 0x1C0016D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmEndDmaBufferCPUAccess(
        VIDMM_SYSMEM_SEGMENT **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  VIDMM_SYSMEM_SEGMENT::UnmapTemporaryResource(a1[17], (struct _VIDMM_GLOBAL_ALLOC *)a1, a3, a4, a5);
}
