/*
 * XREFs of ServiceCtrl @ 0x18002CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002BAFC (-PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002CF10 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ReportStatusToSCMgr @ 0x1800396A0 (ReportStatusToSCMgr.c)
 *     ServicePowerEvent @ 0x18003A0FC (ServicePowerEvent.c)
 */

__int64 __fastcall ServiceCtrl(
        DWORD dwControl,
        DWORD dwEventType,
        struct tagWTSSESSION_NOTIFICATION *lpEventData,
        LPVOID lpContext)
{
  DWORD v6; // ecx
  DWORD v7; // ecx
  DWORD v8; // ecx
  int v9; // ecx

  v6 = dwControl - 1;
  if ( !v6 )
    goto LABEL_11;
  v7 = v6 - 3;
  if ( !v7 )
  {
    ReportStatusToSCMgr(ssStatus.dwCurrentState, 0LL, 0LL, lpContext);
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_11:
    dwServiceError = 0;
    ReportStatusToSCMgr(3LL, 0LL, 5000LL, lpContext);
    SetEvent(hEventShutdown);
    return 0LL;
  }
  v9 = v8 - 8;
  if ( !v9 )
    return ServicePowerEvent(dwEventType, lpEventData, lpEventData, lpContext);
  if ( v9 == 1 )
  {
    TS_SessionChanged(dwEventType, lpEventData);
    PostSessionEvent(dwEventType, lpEventData);
    return 0LL;
  }
  return 120LL;
}
