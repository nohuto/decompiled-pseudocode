/*
 * XREFs of ?ADAPTER_DISPLAY_SetVidPnSourceVisibility@@YAJPEAVADAPTER_DISPLAY@@IEIPEAVDXGDEVICE@@EE@Z @ 0x1C000F2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_DISPLAY_SetVidPnSourceVisibility(
        struct ADAPTER_DISPLAY *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        struct DXGDEVICE *a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  return ADAPTER_DISPLAY::SetVidPnSourceVisibility(a1, a2, a3, a4, a5, a6, a7);
}
