/*
 * XREFs of OnServiceShutdown @ 0x18009A090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     ?MyServiceTerminate@@YAXXZ @ 0x18009A6FC (-MyServiceTerminate@@YAXXZ.c)
 */

__int64 OnServiceShutdown()
{
  HANDLE v0; // rbx
  DWORD CurrentProcessId; // eax
  char *v2; // rcx
  DWORD v3; // eax
  DWORD ThreadId; // [rsp+50h] [rbp+18h] BYREF

  v0 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    CurrentProcessId = GetCurrentProcessId();
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_eb2fdc9f7b10d3db27f8d70b9a146365_Traceguids,
      CurrentProcessId);
  }
  hEventShutdownComplete = CreateEventW(0LL, 1, 0, 0LL);
  if ( hEventShutdownComplete )
    v0 = CreateThread(0LL, 0LL, ShutdownKeepaliveThread, 0LL, 0, &ThreadId);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_908455377377748732ca9cb03e87474b_Traceguids);
  }
  MyServiceTerminate();
  if ( hEventShutdownWait )
    UnregisterWaitEx(hEventShutdownWait, 0LL);
  if ( hEventShutdown )
    CloseHandle(hEventShutdown);
  v2 = (char *)hEventShutdownComplete;
  if ( hEventShutdownComplete )
  {
    SetEvent(hEventShutdownComplete);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( v0 )
  {
    WaitForSingleObject(v0, 0xFFFFFFFF);
    if ( v0 != (HANDLE)-1LL )
      CloseHandle(v0);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    hEventShutdownComplete = 0LL;
  }
  if ( (char *)g_hCanAcceptMMCClientEvent - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_hCanAcceptMMCClientEvent);
    g_hCanAcceptMMCClientEvent = 0LL;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v3 = GetCurrentProcessId();
    WPP_SF_Dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_eb2fdc9f7b10d3db27f8d70b9a146365_Traceguids, v3);
  }
  return ReportStatusToSCMgr(1u, dwServiceError, 0);
}
