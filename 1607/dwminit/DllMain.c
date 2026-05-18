/*
 * XREFs of DllMain @ 0x180001680
 * Callers:
 *     __DllMainCRTStartup @ 0x180007CB0 (__DllMainCRTStartup.c)
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800011D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x18000126C (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001380 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  HANDLE CurrentProcess; // rax
  struct _GUID *v4; // rdx
  unsigned __int16 *v5; // r8
  unsigned __int16 *v6; // r9
  DWORD CurrentProcessId; // eax
  GUID v8; // xmm0
  const GUID *v9; // r8
  const GUID *v10; // r9
  CDwmInitTelemetryAggregator *v11; // rax
  CDwmInitTelemetryAggregator *v12; // rcx
  DWORD dwOptions[2]; // [rsp+28h] [rbp-E0h]
  DWORD hKey; // [rsp+78h] [rbp-90h] BYREF
  GUID hKey_8; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR Data[2]; // [rsp+98h] [rbp-70h] BYREF
  GUID *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  GUID *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  unsigned __int16 *v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  unsigned __int16 *v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  WCHAR ValueName[40]; // [rsp+F8h] [rbp-10h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      DisableThreadLibraryCalls(hinstDLL);
      CurrentProcess = GetCurrentProcess();
      UtilGetProcessTelemetryAppSessionGuid(CurrentProcess, v4, v5, v6);
      EventActivityIdControl(3u, &gDwmInitTelemetryActivityId);
      memset_0(Data, 0, 0x4AuLL);
      if ( (int)StringCchPrintfW(
                  (wchar_t *)Data,
                  37LL,
                  L"%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
                  gDwmInitTelemetryActivityId.Data1,
                  gDwmInitTelemetryActivityId.Data2,
                  gDwmInitTelemetryActivityId.Data3,
                  gDwmInitTelemetryActivityId.Data4[0],
                  gDwmInitTelemetryActivityId.Data4[1],
                  gDwmInitTelemetryActivityId.Data4[2],
                  gDwmInitTelemetryActivityId.Data4[3],
                  gDwmInitTelemetryActivityId.Data4[4],
                  gDwmInitTelemetryActivityId.Data4[5],
                  gDwmInitTelemetryActivityId.Data4[6],
                  gDwmInitTelemetryActivityId.Data4[7]) >= 0 )
      {
        *(_QWORD *)&hKey_8.Data1 = 0LL;
        if ( !RegCreateKeyExW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\DWM",
                0,
                0LL,
                1u,
                0xF003Fu,
                0LL,
                (PHKEY)&hKey_8,
                0LL) )
        {
          hKey = 0;
          CurrentProcessId = GetCurrentProcessId();
          if ( ProcessIdToSessionId(CurrentProcessId, &hKey) )
          {
            memset_0(ValueName, 0, 0x44uLL);
            dwOptions[0] = hKey;
            if ( (int)StringCchPrintfW(ValueName, 34LL, L"%s_%08X", L"DwmInitSessionActivityId", *(_QWORD *)dwOptions) >= 0 )
              RegSetKeyValueW(*(HKEY *)&hKey_8.Data1, 0LL, ValueName, 1u, Data, 0x4Au);
          }
          RegCloseKey(*(HKEY *)&hKey_8.Data1);
        }
      }
      v8 = (GUID)*((_OWORD *)off_18000D008 - 1);
      qword_18000D028 = 0LL;
      qword_18000D030 = 0LL;
      hKey_8 = v8;
      if ( !EventRegister(&hKey_8, TlgEnableCallback, &hProvider, &RegHandle) )
        EventSetInformation(RegHandle, 2LL, off_18000D008, *(unsigned __int16 *)off_18000D008);
      if ( hProvider > 5u
        && (qword_18000D010 & 0x400000000000LL) != 0
        && (qword_18000D018 & 0x400000000000LL) == qword_18000D018 )
      {
        v18 = &gDwmInitTelemetryActivityId;
        v20 = &gDwmInitTargetAppSessionGuid;
        v22 = &gBootId;
        v24 = &gSessionId;
        v19 = 16LL;
        v21 = 16LL;
        v23 = 2LL;
        v25 = 2LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18000A959, v9, v10, 6u, Data);
      }
      if ( byte_18000D050 )
      {
        if ( qword_18000D048 )
        {
          CDwmInitTelemetryAggregator::LogTelemetry(qword_18000D048);
          v11 = qword_18000D048;
          if ( qword_18000D048 )
          {
            *((_QWORD *)qword_18000D048 + 1) = 0LL;
            *((_QWORD *)v11 + 2) = 0LL;
          }
        }
        byte_18000D050 = 0;
      }
      qword_18000D060 = 0xA00000000LL;
    }
  }
  else
  {
    if ( qword_18000D048 )
    {
      CDwmInitTelemetryAggregator::LogTelemetry(qword_18000D048);
      v12 = qword_18000D048;
      if ( qword_18000D048 )
      {
        *((_QWORD *)qword_18000D048 + 1) = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
      }
    }
    byte_18000D050 = 0;
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
  }
  return 1;
}
