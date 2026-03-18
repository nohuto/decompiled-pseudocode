/*
 * XREFs of ?ADAPTER_RENDER_DdiQueryEngineStatus@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C0022060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiQueryEngineStatus(
        struct ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYENGINESTATUS *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryEngineStatus(this, a2, a3);
}
