/*
 * XREFs of DllMain @ 0x18005426C
 * Callers:
 *     dllmain_dispatch @ 0x180035DC8 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180034328 (TraceLoggingRegisterEx.c)
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x180034A90 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?AERTMemoryInitialize@@YAJ_K00@Z @ 0x180034B54 (-AERTMemoryInitialize@@YAJ_K00@Z.c)
 *     ?VAD_DllProcessAttach@@YAHXZ @ 0x180034BE8 (-VAD_DllProcessAttach@@YAHXZ.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x18008272C (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x180082B4C (WppCleanupUm.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x18008D858 (-AERTMemoryShutdown@@YAJXZ.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  int v3; // edi
  const struct _GUID *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // r8
  void (__stdcall *v8)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v9; // r8

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    hHeap = GetProcessHeap();
    AeWmiInitialize(v4);
    if ( (int)AERTMemoryInitialize(v6, v5, v7) >= 0 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1800CA040, v8, v9);
      g_SysFxUtilTlp = (TraceLoggingHProvider)&dword_1800CA040;
      dword_1800CADE4 = 1;
      dword_1800CADE0 = VAD_DllProcessAttach();
      v3 = dword_1800CADE0;
      if ( !dword_1800CADE0 )
        dword_1800CADE4 = 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_1800CADE4 = 0;
    dword_1800CADE0 = 0;
    AERTMemoryShutdown();
    AeWmiShutdown();
    g_SysFxUtilTlp = 0LL;
    EtwEventUnregister(qword_1800CA060);
    qword_1800CA060 = 0LL;
    dword_1800CA040 = 0;
    WppCleanupUm();
  }
  return v3;
}
