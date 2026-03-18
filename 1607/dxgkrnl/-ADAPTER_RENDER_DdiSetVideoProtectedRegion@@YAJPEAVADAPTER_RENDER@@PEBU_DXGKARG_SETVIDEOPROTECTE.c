/*
 * XREFs of ?ADAPTER_RENDER_DdiSetVideoProtectedRegion@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0022090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiSetVideoProtectedRegion(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETVIDEOPROTECTEDREGION *a2)
{
  return ADAPTER_RENDER::DdiSetVideoProtectedRegion(a1, a2);
}
