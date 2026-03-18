/*
 * XREFs of ?ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C0022020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiFormatHistoryBuffer(
        struct ADAPTER_RENDER *a1,
        void *const a2,
        struct _DXGKARG_FORMATHISTORYBUFFER *a3)
{
  return ADAPTER_RENDER::DdiFormatHistoryBuffer(a1, a2, a3);
}
