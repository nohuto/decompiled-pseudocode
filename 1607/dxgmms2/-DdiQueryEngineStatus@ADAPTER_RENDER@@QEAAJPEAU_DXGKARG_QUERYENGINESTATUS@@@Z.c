/*
 * XREFs of ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C001D24C
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0043DE0 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiQueryEngineStatus(ADAPTER_RENDER *this, struct _DXGKARG_QUERYENGINESTATUS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_QUERYENGINESTATUS *))DxgCoreInterface[29])(this, a2);
}
