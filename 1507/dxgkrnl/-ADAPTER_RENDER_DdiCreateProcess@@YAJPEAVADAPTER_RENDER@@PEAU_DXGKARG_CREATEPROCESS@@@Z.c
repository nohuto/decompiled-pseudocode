/*
 * XREFs of ?ADAPTER_RENDER_DdiCreateProcess@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C001CD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiCreateProcess(struct ADAPTER_RENDER *a1, struct _DXGKARG_CREATEPROCESS *a2)
{
  return ADAPTER_RENDER::DdiCreateProcess(a1, a2);
}
