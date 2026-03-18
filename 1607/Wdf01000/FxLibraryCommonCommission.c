/*
 * XREFs of FxLibraryCommonCommission @ 0x1C0034F28
 * Callers:
 *     LibraryCommission @ 0x1C0034F20 (LibraryCommission.c)
 * Callees:
 *     ?GetTriageInfo@@YAXXZ @ 0x1C0035054 (-GetTriageInfo@@YAXXZ.c)
 *     ?FxTraceInitialize@@YAJXZ @ 0x1C00351A0 (-FxTraceInitialize@@YAJXZ.c)
 *     FxLibraryGlobalsCommission @ 0x1C0035208 (FxLibraryGlobalsCommission.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     TraceLoggingSetInformation @ 0x1C00CBE78 (TraceLoggingSetInformation.c)
 */

__int64 __fastcall FxLibraryCommonCommission()
{
  int v0; // ebx
  _GUID v1; // xmm0
  _EVENT_INFO_CLASS v2; // edx
  const _TlgProvider_t *v3; // rcx
  void (__fastcall *SystemRoutineAddress)(_OSVERSIONINFOW *); // rax
  _UNICODE_STRING usName; // [rsp+30h] [rbp-58h] BYREF
  _GUID ProviderId; // [rsp+40h] [rbp-48h] BYREF
  wchar_t usName_buffer[16]; // [rsp+50h] [rbp-38h] BYREF

  wcscpy(usName_buffer, L"RtlGetVersion");
  usName.Buffer = usName_buffer;
  *(_DWORD *)&usName.Length = 1835034;
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryCommission\n");
  }
  v0 = FxLibraryGlobalsCommission();
  if ( v0 < 0 )
  {
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "FxLibraryGlobalsCommission failed %X\n", v0);
    }
    return (unsigned int)v0;
  }
  else
  {
    v1 = (_GUID)*((_OWORD *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr - 1);
    Tlgg_TelemetryProviderProv.EnableCallback = 0LL;
    Tlgg_TelemetryProviderProv.CallbackContext = 0LL;
    ProviderId = v1;
    if ( !EtwRegister(
            &ProviderId,
            TlgEnableCallback,
            &Tlgg_TelemetryProviderProv,
            &Tlgg_TelemetryProviderProv.RegHandle) )
      TraceLoggingSetInformation(
        v3,
        v2,
        (void *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr,
        *Tlgg_TelemetryProviderProv.ProviderMetadataPtr);
    if ( FxTraceInitialize() < 0 )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "Failed to initialize tracing for WDF\n");
      }
    }
    else
    {
      FxLibraryGlobals.InternalTracingInitialized = 1;
    }
    SystemRoutineAddress = (void (__fastcall *)(_OSVERSIONINFOW *))MmGetSystemRoutineAddress(&usName);
    if ( SystemRoutineAddress )
      SystemRoutineAddress(&gOsVersion);
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "OsVersion(%d.%d)\n", gOsVersion.dwMajorVersion, gOsVersion.dwMinorVersion);
    }
    GetTriageInfo();
    return 0LL;
  }
}
