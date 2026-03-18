/*
 * XREFs of ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C001D234
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1C00A0078 (VidSchiPrepareToResetEngine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiQueryDependentEngineGroup(
        ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYDEPENDENTENGINEGROUP *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_QUERYDEPENDENTENGINEGROUP *))DxgCoreInterface[28])(
           this,
           a2);
}
