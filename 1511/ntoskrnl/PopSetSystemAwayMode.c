/*
 * XREFs of PopSetSystemAwayMode @ 0x1406366F8
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     PopNotifyConsoleUserPresent @ 0x1404C5578 (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x14063668C (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  char v5; // dl

  v2 = 0;
  if ( a1 )
  {
    if ( !byte_1402DE291 )
    {
      if ( byte_1402DE290 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_1402DE294, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_1402DE294);
        KeSetTimer(&PopAwayModeUserPresenceTimer, (LARGE_INTEGER)-30000000LL, &PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        LOBYTE(v3) = 1;
        PopSetAwayModeStatus(v3, v4);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_1402DE291 )
  {
    PopSetAwayModeStatus(0LL, a2);
    PopNotifyConsoleUserPresent(0, v5, PopAwaymodeExitReason);
  }
  return v2;
}
