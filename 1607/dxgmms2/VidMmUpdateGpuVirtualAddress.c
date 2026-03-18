/*
 * XREFs of VidMmUpdateGpuVirtualAddress @ 0x1C001D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *a1,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        unsigned int a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  return VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(a1, a2, a3, a4, a5, a6, a7);
}
