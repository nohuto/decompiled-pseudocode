/*
 * XREFs of ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C000D000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ @ 0x1C00C6AD4 (-DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent@@YA_NXZ.c)
 */

void __fastcall EnableDxgkrnlTelemetryProviderCallback(const struct _GUID *a1, int a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( a2 == 1 && DxgKrnlTelemetryGlobal_LogGPUInventoryTelemetryEvent() )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(Global, AdapterTelemetryEnabledCallback, 0LL, 0LL);
  }
}
