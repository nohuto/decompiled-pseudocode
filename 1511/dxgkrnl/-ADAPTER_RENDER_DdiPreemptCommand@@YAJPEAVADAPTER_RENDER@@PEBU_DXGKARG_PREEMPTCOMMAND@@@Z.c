/*
 * XREFs of ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C000CCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(
        DXGADAPTER **this,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiPreemptCommand(this, a2, a3);
}
