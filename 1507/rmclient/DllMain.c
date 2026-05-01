/*
 * XREFs of DllMain @ 0x18000BD98
 * Callers:
 *     __DllMainCRTStartup @ 0x180008504 (__DllMainCRTStartup.c)
 * Callees:
 *     RmpClientInitializeCoreApi @ 0x180002810 (RmpClientInitializeCoreApi.c)
 *     ?FreeResourcePolicyStoreClient@@YAXH@Z @ 0x180002A80 (-FreeResourcePolicyStoreClient@@YAXH@Z.c)
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x1800069D0 (-FreeResourceManagerProxy@@YAXXZ.c)
 *     TraceLoggingRegisterEx @ 0x18000BE10 (TraceLoggingRegisterEx.c)
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
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_180022030 = 0;
  }
  return 1;
}
