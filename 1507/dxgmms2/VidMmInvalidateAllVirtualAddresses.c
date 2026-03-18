/*
 * XREFs of VidMmInvalidateAllVirtualAddresses @ 0x1C000E6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmInvalidateAllVirtualAddresses(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::InvalidateAllVirtualAddresses(a1);
}
