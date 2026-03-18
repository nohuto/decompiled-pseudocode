/*
 * XREFs of VidMmReserveGpuVirtualAddressRangeCb @ 0x1C00145C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *a1,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2)
{
  return VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(a1, a2);
}
