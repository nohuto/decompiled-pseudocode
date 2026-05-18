/*
 * XREFs of DwmpTerminateSessionProcess @ 0x180003460
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001380 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000153C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001F00 (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800025B8 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003E40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     DwmpRequestProcessShutdown @ 0x180004748 (DwmpRequestProcessShutdown.c)
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x1800078B0 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  int v1; // eax
  int v2; // eax
  const GUID *v3; // r8
  const GUID *v4; // r9
  CDwmInitTelemetryAggregator *v5; // rax
  bool v7; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-55h] BYREF
  DWORD ExitCode; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  GUID *v11; // [rsp+68h] [rbp-29h]
  __int64 v12; // [rsp+70h] [rbp-21h]
  unsigned int *v13; // [rsp+78h] [rbp-19h]
  __int64 v14; // [rsp+80h] [rbp-11h]
  int *v15; // [rsp+88h] [rbp-9h]
  __int64 v16; // [rsp+90h] [rbp-1h]
  bool *v17; // [rsp+98h] [rbp+7h]
  __int64 v18; // [rsp+A0h] [rbp+Fh]
  GUID *v19; // [rsp+A8h] [rbp+17h]
  __int64 v20; // [rsp+B0h] [rbp+1Fh]
  unsigned __int16 *v21; // [rsp+B8h] [rbp+27h]
  __int64 v22; // [rsp+C0h] [rbp+2Fh]
  unsigned __int16 *v23; // [rsp+C8h] [rbp+37h]
  __int64 v24; // [rsp+D0h] [rbp+3Fh]
  int v25; // [rsp+F8h] [rbp+67h] BYREF

  v25 = a1;
  v8 = 0;
  ExitCode = 0;
  AcquireSRWLockExclusive(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    v1 = DwmpRequestProcessShutdown();
    v8 = v1;
    if ( v1 < 0 )
    {
      if ( &dword_18000A114 )
        MilInstrumentationCheckHR(4u, &dword_18000A114, 1u, v1, 0x6B2u);
      else
        DoStackCapture(v1, 0x6B2u);
    }
    WaitForDwmExit(&ExitCode, 0LL);
  }
  v2 = UnmapDwmVirtualAccount();
  v8 = v2;
  if ( v2 < 0 )
  {
    if ( &dword_18000A114 )
      MilInstrumentationCheckHR(4u, &dword_18000A114, 1u, v2, 0x6B7u);
    else
      DoStackCapture(v2, 0x6B7u);
  }
  else if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
  {
    DwmMonitorExtCleanup();
  }
  ReleaseSRWLockExclusive(&gDwmStateLock);
  v7 = GetModuleHandleW(L"WinInit.exe") != 0LL;
  if ( hProvider > 5u
    && (qword_18000D010 & 0x400000000000LL) != 0
    && (qword_18000D018 & 0x400000000000LL) == qword_18000D018 )
  {
    v12 = 16LL;
    v11 = &gDwmInitTelemetryActivityId;
    v13 = &v8;
    v15 = &v25;
    v17 = &v7;
    v19 = &gDwmInitTargetAppSessionGuid;
    v21 = &gBootId;
    v23 = &gSessionId;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 1LL;
    v20 = 16LL;
    v22 = 2LL;
    v24 = 2LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18000AA80, v3, v4, 9u, &pData);
  }
  TraceLoggingWriteEtw(9, v8, 0LL);
  if ( qword_18000D048 )
  {
    CDwmInitTelemetryAggregator::LogTelemetry(qword_18000D048);
    v5 = qword_18000D048;
    if ( qword_18000D048 )
    {
      *((_QWORD *)qword_18000D048 + 1) = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
    }
  }
  byte_18000D050 = 0;
  return v8;
}
