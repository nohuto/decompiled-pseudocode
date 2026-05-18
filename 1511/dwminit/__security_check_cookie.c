/*
 * XREFs of __security_check_cookie @ 0x1800067F0
 * Callers:
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x1800012BC (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x1800013D0 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000159C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     DllMain @ 0x1800016A4 (DllMain.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001C10 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180002000 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?SqmCrashAndRecovery@@YAXHK@Z @ 0x180002544 (-SqmCrashAndRecovery@@YAXHK@Z.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180002F00 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x180003350 (DwmpTerminateSessionProcess.c)
 *     ?StartLaunchAppService@@YAJXZ @ 0x1800039F8 (-StartLaunchAppService@@YAJXZ.c)
 *     DwmpSignalSessionShutdown @ 0x1800046A0 (DwmpSignalSessionShutdown.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004C60 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180005640 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 *     ?PostEvent@RestartEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005800 (-PostEvent@RestartEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@FallbackToBddEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1800058F0 (-PostEvent@FallbackToBddEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@SessionShutdownOnCreateFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1800059E0 (-PostEvent@SessionShutdownOnCreateFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@SessionShutdownOnRestartFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005AB0 (-PostEvent@SessionShutdownOnRestartFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?ReportRestart@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@KH0GG@Z @ 0x180005C48 (-ReportRestart@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@KH0GG@Z.c)
 *     ?ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180005CD8 (-ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z.c)
 *     ?ReportSessionShutdownOnCreateFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@J0GG@Z @ 0x180005D6C (-ReportSessionShutdownOnCreateFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@J0GG@Z.c)
 *     ?ReportSessionShutdownOnRestartFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180005DF0 (-ReportSessionShutdownOnRestartFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z.c)
 *     __GSHandlerCheckCommon @ 0x180007B10 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
