/*
 * XREFs of ?ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0001C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommandVirtual(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2)
{
  return ADAPTER_RENDER::DdiSubmitCommandVirtual(a1, a2);
}
