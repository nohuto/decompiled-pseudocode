/*
 * XREFs of ?CleanupOldDwmProcess@@YAJXZ @ 0x1800028C4
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800011D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001380 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000153C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x180002558 (-GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800025B8 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x1800027E8 (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 *     ?AddData@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXW4DwmInitTelemetryAggregateType@@I_N1@Z @ 0x1800038F0 (-AddData@-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateTyp.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003E40 (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x1800047D8 (DwmpSignalSessionShutdown.c)
 *     ?ReportRestart@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@KH0GG@Z @ 0x1800062A8 (-ReportRestart@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@KH0GG@Z.c)
 *     ?ReportSessionShutdownOnRestartFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180006450 (-ReportSessionShutdownOnRestartFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z.c)
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800064E8 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 */

__int64 CleanupOldDwmProcess(void)
{
  char restarted; // di
  int v1; // eax
  unsigned int v2; // ebx
  HANDLE v3; // rsi
  int v4; // r9d
  int v5; // eax
  wchar_t *v6; // rcx
  int v7; // eax
  wchar_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  DwmInitAsimov::CDwmInitEventManager *Manager; // rax
  int v11; // r9d
  unsigned int v12; // edx
  int v13; // r9d
  const struct _TlgProvider_t *v14; // rcx
  DwmInitAsimov::CDwmInitEventManager *v15; // rax
  int v16; // r8d
  int v17; // r9d
  CDwmInitTelemetryAggregator *v18; // rax
  unsigned __int16 wNumStrings; // [rsp+30h] [rbp-D8h]
  unsigned __int16 dwDataSize; // [rsp+38h] [rbp-D0h]
  DWORD ExitCode[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _FILETIME ExitTime; // [rsp+60h] [rbp-A8h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+68h] [rbp-A0h] BYREF
  LPCWSTR Strings[2]; // [rsp+3B8h] [rbp+2B0h] BYREF
  unsigned __int64 v26; // [rsp+3C8h] [rbp+2C0h]
  wchar_t Buffer[8]; // [rsp+3D8h] [rbp+2D0h] BYREF
  wchar_t v28[12]; // [rsp+3F8h] [rbp+2F0h] BYREF

  ExitTime = 0LL;
  ExitCode[0] = 0;
  restarted = 1;
  v1 = WaitForDwmExit(ExitCode, &ExitTime);
  v2 = v1;
  if ( v1 < 0 )
  {
    DoStackCapture(v1, 0x466u);
  }
  else
  {
    restarted = ShouldRestartSession(ExitTime);
    v3 = RegisterEventSourceW(0LL, L"Dwminit");
    if ( v3 )
    {
      memset_0(&DisplayDevice, 0, sizeof(DisplayDevice));
      v5 = StringCchPrintfW(Buffer, 11LL, L"0x%08x", ExitCode[0]);
      v6 = Buffer;
      if ( v5 < 0 )
        v6 = 0LL;
      Strings[0] = v6;
      v7 = StringCchPrintfW(v28, 12LL, L"%i", (unsigned int)gDwmNumRetriesSoFar);
      v8 = v28;
      if ( v7 < 0 )
        v8 = 0LL;
      Strings[1] = v8;
      v26 = (unsigned __int64)DisplayDevice.DeviceString & -(__int64)(GetPrimaryDisplayDeviceInfo(&DisplayDevice) != 0);
      ReportEventW(v3, 2u, 0, 0x80020000, 0LL, 3u, 0, Strings, 0LL);
      DeregisterEventSource(v3);
    }
    LOBYTE(v4) = 1;
    CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
      (unsigned int)&gDwmInitTelemetryAggregator,
      0,
      1,
      v4,
      1);
    *(GUID *)Strings = gDwmInitTargetAppSessionGuid;
    *(GUID *)Buffer = gDwmInitTelemetryActivityId;
    Manager = DwmInitAsimov::CDwmInitEventManager::GetManager(v9);
    DwmInitAsimov::CDwmInitEventManager::ReportRestart(
      Manager,
      (struct _GUID *)Buffer,
      ExitCode[0],
      v11,
      (struct _GUID *)Strings,
      wNumStrings,
      dwDataSize);
    v12 = LOWORD(ExitCode[0]) | 0x80070000;
    if ( (int)ExitCode[0] <= 0 )
      v12 = ExitCode[0];
    TraceLoggingWriteEtw(0, v12, (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
  }
  if ( restarted )
  {
    DwmpSignalSessionShutdown();
    LOBYTE(v13) = 1;
    v2 = -2147467259;
    CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
      (unsigned int)&gDwmInitTelemetryAggregator,
      2,
      1,
      v13,
      1);
    *(GUID *)Buffer = gDwmInitTargetAppSessionGuid;
    *(GUID *)Strings = gDwmInitTelemetryActivityId;
    v15 = DwmInitAsimov::CDwmInitEventManager::GetManager(v14);
    DwmInitAsimov::CDwmInitEventManager::ReportSessionShutdownOnRestartFailure(
      v15,
      (struct _GUID *)Strings,
      v16,
      v17,
      (struct _GUID *)Buffer,
      wNumStrings,
      dwDataSize);
    if ( qword_18000D048 )
    {
      CDwmInitTelemetryAggregator::LogTelemetry(qword_18000D048);
      v18 = qword_18000D048;
      if ( qword_18000D048 )
      {
        *((_QWORD *)qword_18000D048 + 1) = 0LL;
        *((_QWORD *)v18 + 2) = 0LL;
      }
    }
    byte_18000D050 = 0;
    TraceLoggingWriteEtw(3, -2147467259, (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
  }
  return v2;
}
