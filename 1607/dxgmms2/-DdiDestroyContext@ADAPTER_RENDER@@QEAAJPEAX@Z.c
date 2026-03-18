/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C001D1EC
 * Callers:
 *     VidSchTerminateContext @ 0x1C00410C0 (VidSchTerminateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[18])(this, a2);
}
