/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C000E074
 * Callers:
 *     VidSchTerminateContext @ 0x1C002E1C0 (VidSchTerminateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(ADAPTER_RENDER *this, _OWORD *a2)
{
  return ((__int64 (__fastcall **)(ADAPTER_RENDER *, _OWORD *))DxgCoreInterface)[18](this, a2);
}
