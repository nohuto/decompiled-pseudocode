/*
 * XREFs of DllMain @ 0x180069D28
 * Callers:
 *     __DllMainCRTStartup @ 0x180047224 (__DllMainCRTStartup.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18004574C (TraceLoggingRegisterEx.c)
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x1800459C0 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?VAD_DllProcessAttach@@YAHXZ @ 0x180045AD0 (-VAD_DllProcessAttach@@YAHXZ.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x180099F54 (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x18009A36C (WppCleanupUm.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  int v3; // edi
  const struct _GUID *v4; // rcx
  TLG_PENABLECALLBACK v5; // rdx
  TraceLoggingHProvider v6; // rcx
  PVOID v7; // r8

  v3 = 1;
  if ( fdwReason == 1 )
  {
    g_hInstance = hinstDLL;
    DisableThreadLibraryCalls(hinstDLL);
    hHeap = GetProcessHeap();
    AeWmiInitialize(v4);
    TraceLoggingRegisterEx(v6, v5, v7);
    dword_1800E6214 = 1;
    dword_1800E6210 = VAD_DllProcessAttach();
    v3 = dword_1800E6210;
    if ( !dword_1800E6210 )
      dword_1800E6214 = 0;
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_1800E6214 = 0;
    dword_1800E6210 = 0;
    AeWmiShutdown();
    EtwEventUnregister(qword_1800E5520);
    qword_1800E5520 = 0LL;
    dword_1800E5500 = 0;
    WppCleanupUm();
  }
  return v3;
}
