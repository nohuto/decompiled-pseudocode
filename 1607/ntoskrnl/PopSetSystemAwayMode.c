/*
 * XREFs of PopSetSystemAwayMode @ 0x14066EB8C
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopDiagTraceEventNoPayload @ 0x1400AE73C (PopDiagTraceEventNoPayload.c)
 *     PopNotifyConsoleUserPresent @ 0x1404D25CC (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x14066EB18 (PopSetAwayModeStatus.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  char v2; // dl

  v1 = 0;
  if ( a1 )
  {
    if ( !byte_140303D51 )
    {
      if ( byte_140303D50 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_140303D54, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_140303D54);
        KiSetTimerEx(
          (__int64)&PopAwayModeUserPresenceTimer,
          -30000000LL,
          0,
          0,
          (__int64)&PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_140303D51 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0, v2, PopAwaymodeExitReason);
  }
  return v1;
}
