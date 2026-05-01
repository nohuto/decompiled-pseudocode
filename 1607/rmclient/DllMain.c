/*
 * XREFs of DllMain @ 0x180008398
 * Callers:
 *     __DllMainCRTStartup @ 0x180005DE4 (__DllMainCRTStartup.c)
 * Callees:
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x1800019DC (-FreeResourceManagerProxy@@YAXXZ.c)
 *     RmpClientInitializeCoreApi @ 0x180004BE0 (RmpClientInitializeCoreApi.c)
 *     TraceLoggingRegisterEx @ 0x180004C6C (TraceLoggingRegisterEx.c)
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
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_180016000 = 0;
  }
  return 1;
}
