/*
 * XREFs of DllMain @ 0x180003D9C
 * Callers:
 *     dllmain_dispatch @ 0x18002E378 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001090 (TraceLoggingRegister.c)
 *     McGenEventRegister @ 0x180003CFC (McGenEventRegister.c)
 *     McGenEventUnregister @ 0x180003D34 (McGenEventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      McGenEventRegister();
      EventSetInformation(
        Microsoft_Windows_Immersive_ShellHandle,
        2LL,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
      TraceLoggingRegister((TraceLoggingHProvider)&hProvider);
      DisableThreadLibraryCalls(hinstDLL);
      g_pfnResultLoggingCallback = (__int64)lambda_2f8a0e5b6c19c55ac3d2ed9ce9f7470d_::_lambda_invoker_cdecl_;
    }
  }
  else
  {
    McGenEventUnregister();
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
  }
  return 1;
}
