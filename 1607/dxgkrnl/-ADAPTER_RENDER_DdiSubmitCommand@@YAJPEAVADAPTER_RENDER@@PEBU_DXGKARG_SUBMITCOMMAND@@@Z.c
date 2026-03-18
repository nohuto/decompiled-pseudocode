/*
 * XREFs of ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C000D490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommand(
        DXGADAPTER **this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiSubmitCommand(this, a2, a3);
}
