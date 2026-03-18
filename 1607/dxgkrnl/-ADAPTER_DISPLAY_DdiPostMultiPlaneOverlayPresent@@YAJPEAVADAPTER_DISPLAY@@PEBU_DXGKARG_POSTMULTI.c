/*
 * XREFs of ?ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x1C0021F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent(
        struct ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT *a2)
{
  return ADAPTER_DISPLAY::DdiPostMultiPlaneOverlayPresent(a1, a2);
}
