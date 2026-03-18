/*
 * XREFs of ?ADAPTER_RENDER_DdiQueryDependentEngineGroup@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C001CE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiQueryDependentEngineGroup(
        struct ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYDEPENDENTENGINEGROUP *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryDependentEngineGroup(this, a2, a3);
}
