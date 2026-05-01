/*
 * XREFs of DllMain @ 0x18000C8A8
 * Callers:
 *     __DllMainCRTStartup @ 0x180008BD4 (__DllMainCRTStartup.c)
 * Callees:
 *     ?FreeResourcePolicyStoreClient@@YAXH@Z @ 0x180007000 (-FreeResourcePolicyStoreClient@@YAXH@Z.c)
 *     RmpClientInitializeCoreApi @ 0x1800071DC (RmpClientInitializeCoreApi.c)
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x180007288 (-FreeResourceManagerProxy@@YAXXZ.c)
 *     ?FreePolicyEngineRPCBindingHandle@@YAXXZ @ 0x1800072C8 (-FreePolicyEngineRPCBindingHandle@@YAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x1800072E8 (TraceLoggingRegisterEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)hinstDLL, *(TLG_PENABLECALLBACK *)&fdwReason, lpvReserved);
      RmpClientInitializeCoreApi();
      DisableThreadLibraryCalls(hinstDLL);
    }
  }
  else
  {
    FreeResourceManagerProxy();
    FreeResourcePolicyStoreClient(1);
    FreePolicyEngineRPCBindingHandle();
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_180024030 = 0;
  }
  return 1;
}
