/*
 * XREFs of DllMain @ 0x180003C90
 * Callers:
 *     dllmain_dispatch @ 0x1800208B0 (dllmain_dispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x180020A40 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  ULONG64 *v4; // rdi
  const GUID **v5; // rsi
  const GUID *v6; // r8
  struct _TRACE_GUID_REGISTRATION v7; // xmm0
  _QWORD *v8; // rdi
  TRACEHANDLE v9; // rcx
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-28h] BYREF

  if ( fdwReason == 1 )
  {
    qword_180031CC8 = 1LL;
    qword_180031CC0 = 0LL;
    v4 = (ULONG64 *)&WPP_MAIN_CB;
    WPP_MAIN_CB = 0LL;
    WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
    v5 = (const GUID **)&WPP_REGISTRATION_GUIDS;
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    do
    {
      v6 = *v5;
      TraceGuidReg.Guid = v6;
      ++v5;
      TraceGuidReg.RegHandle = 0LL;
      v4[4] = (ULONG64)v6;
      RegisterTraceGuidsW((WMIDPREQUEST)WppControlCallback, v4, v6, 1u, &TraceGuidReg, 0LL, 0LL, v4 + 1);
      v4 = (ULONG64 *)*v4;
    }
    while ( v4 );
    DisableThreadLibraryCalls(hinstDLL);
    v7 = (struct _TRACE_GUID_REGISTRATION)*((_OWORD *)off_180031018 - 1);
    qword_180031038 = 0LL;
    qword_180031040 = 0LL;
    TraceGuidReg = v7;
    if ( !EventRegister((LPCGUID)&TraceGuidReg, TlgEnableCallback, &dword_180031010, &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_180031018, *(unsigned __int16 *)off_180031018);
  }
  else if ( !fdwReason && !lpvReserved )
  {
    EventUnregister(RegHandle);
    v8 = WPP_GLOBAL_Control;
    RegHandle = 0LL;
    dword_180031010 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      while ( v8 )
      {
        v9 = v8[1];
        if ( v9 )
        {
          UnregisterTraceGuids(v9);
          v8[1] = 0LL;
        }
        v8 = (_QWORD *)*v8;
      }
      WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
    }
  }
  return 1;
}
