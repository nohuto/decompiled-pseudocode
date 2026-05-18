/*
 * XREFs of ?CleanupOldDwmProcess@@YAJXZ @ 0x18000290C
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x1800013D0 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000159C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?SqmCrashAndRecovery@@YAXHK@Z @ 0x180002544 (-SqmCrashAndRecovery@@YAXHK@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x180002634 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000285C (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 *     ?AddData@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXW4DwmInitTelemetryAggregateType@@I_N1@Z @ 0x1800036F0 (-AddData@-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateTyp.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003D40 (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x1800046A0 (DwmpSignalSessionShutdown.c)
 *     ?ReportRestart@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@KH0GG@Z @ 0x180005C48 (-ReportRestart@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@KH0GG@Z.c)
 *     ?ReportSessionShutdownOnRestartFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180005DF0 (-ReportSessionShutdownOnRestartFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z.c)
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180005E88 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 */

__int64 CleanupOldDwmProcess(void)
{
  int v0; // eax
  unsigned int v1; // edi
  bool restarted; // bl
  __int64 v3; // rcx
  int v4; // r9d
  const struct _TlgProvider_t *v5; // rcx
  DwmInitAsimov::CDwmInitEventManager *v6; // rax
  int v7; // r9d
  unsigned int v8; // edx
  int v9; // r9d
  const struct _TlgProvider_t *v10; // rcx
  DwmInitAsimov::CDwmInitEventManager *Manager; // rax
  int v12; // r8d
  int v13; // r9d
  CDwmInitTelemetryAggregator *v14; // rax
  unsigned __int16 v16; // [rsp+28h] [rbp-38h]
  unsigned __int16 v17; // [rsp+30h] [rbp-30h]
  struct _GUID v18; // [rsp+40h] [rbp-20h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-10h] BYREF
  DWORD ExitCode; // [rsp+70h] [rbp+10h] BYREF
  struct _FILETIME ExitTime; // [rsp+78h] [rbp+18h] BYREF

  ExitCode = 0;
  ExitTime = 0LL;
  v0 = WaitForDwmExit(&ExitCode, &ExitTime);
  v1 = v0;
  if ( v0 < 0 )
  {
    DoStackCapture(v0, 0x44Fu);
LABEL_6:
    DwmpSignalSessionShutdown();
    LOBYTE(v9) = 1;
    v1 = -2147467259;
    CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
      (unsigned int)&gDwmInitTelemetryAggregator,
      2,
      1,
      v9,
      1);
    v19 = gDwmInitTargetAppSessionGuid;
    v18 = gDwmInitTelemetryActivityId;
    Manager = DwmInitAsimov::CDwmInitEventManager::GetManager(v10);
    DwmInitAsimov::CDwmInitEventManager::ReportSessionShutdownOnRestartFailure(Manager, &v18, v12, v13, &v19, v16, v17);
    if ( qword_18000C070 )
    {
      CDwmInitTelemetryAggregator::LogTelemetry(qword_18000C070);
      v14 = qword_18000C070;
      if ( qword_18000C070 )
      {
        *((_DWORD *)qword_18000C070 + 2) = 0;
        *((_DWORD *)v14 + 3) = 0;
        *((_DWORD *)v14 + 4) = 0;
        *((_DWORD *)v14 + 5) = 0;
      }
    }
    byte_18000C078 = 0;
    TraceLoggingWriteEtw(3, -2147467259, (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
    return v1;
  }
  restarted = ShouldRestartSession(ExitTime);
  SqmCrashAndRecovery(v3, ExitCode);
  LOBYTE(v4) = 1;
  CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
    (unsigned int)&gDwmInitTelemetryAggregator,
    0,
    1,
    v4,
    1);
  v18 = gDwmInitTargetAppSessionGuid;
  v19 = gDwmInitTelemetryActivityId;
  v6 = DwmInitAsimov::CDwmInitEventManager::GetManager(v5);
  DwmInitAsimov::CDwmInitEventManager::ReportRestart(v6, &v19, ExitCode, v7, &v18, v16, v17);
  v8 = (unsigned __int16)ExitCode | 0x80070000;
  if ( (int)ExitCode <= 0 )
    v8 = ExitCode;
  TraceLoggingWriteEtw(0, v8, (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
  if ( restarted )
    goto LABEL_6;
  return v1;
}
