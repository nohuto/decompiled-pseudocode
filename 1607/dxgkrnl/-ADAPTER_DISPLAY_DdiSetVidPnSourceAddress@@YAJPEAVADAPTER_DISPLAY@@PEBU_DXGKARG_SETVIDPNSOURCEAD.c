/*
 * XREFs of ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0006030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddress(
        struct ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(a1, a2);
}
