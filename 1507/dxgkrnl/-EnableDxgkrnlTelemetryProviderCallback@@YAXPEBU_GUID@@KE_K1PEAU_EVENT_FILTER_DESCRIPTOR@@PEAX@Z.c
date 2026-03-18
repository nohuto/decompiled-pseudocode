/*
 * XREFs of ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C000A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDxgkrnlTelemetryProviderCallback(const struct _GUID *a1, int a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( a2 == 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(Global, AdapterTelemetryEnabledCallback, 0LL, 0LL);
  }
}
