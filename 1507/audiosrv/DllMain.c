/*
 * XREFs of DllMain @ 0x18006B014
 * Callers:
 *     __DllMainCRTStartup @ 0x1800432E4 (__DllMainCRTStartup.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18004272C (TraceLoggingRegisterEx.c)
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x1800429D0 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?VAD_DllProcessAttach@@YAHXZ @ 0x180042A40 (-VAD_DllProcessAttach@@YAHXZ.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x18009D0E4 (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x18009D4FC (WppCleanupUm.c)
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
    dword_1800E8214 = 1;
    dword_1800E8210 = VAD_DllProcessAttach();
    v3 = dword_1800E8210;
    if ( !dword_1800E8210 )
      dword_1800E8214 = 0;
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_1800E8214 = 0;
    dword_1800E8210 = 0;
    AeWmiShutdown();
    EtwEventUnregister(qword_1800E7520);
    qword_1800E7520 = 0LL;
    dword_1800E7500 = 0;
    WppCleanupUm();
  }
  return v3;
}
