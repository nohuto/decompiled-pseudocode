/*
 * XREFs of PopSetSystemAwayMode @ 0x1406B602C
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     PopNotifyConsoleUserPresent @ 0x14055BFCC (PopNotifyConsoleUserPresent.c)
 *     PopSetAwayModeStatus @ 0x1406B5FC0 (PopSetAwayModeStatus.c)
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
    if ( !byte_14032E851 )
    {
      if ( byte_14032E850 )
      {
        KeResetEvent(&PopUserPresentCompletedEvent);
        _InterlockedExchange(&dword_14032E854, 1);
        if ( _InterlockedCompareExchange(&PopUserPresentSetStatus, 0, 0) )
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          &dword_14032E854);
        KiSetTimerEx(
          (__int64)&PopAwayModeUserPresenceTimer,
          -30000000LL,
          0,
          0,
          (__int64)&PopAwayModeUserPresenceDpcObject);
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
  else if ( byte_14032E851 )
  {
    PopSetAwayModeStatus(0LL, a2);
    PopNotifyConsoleUserPresent(0, v5, PopAwaymodeExitReason);
  }
  return v2;
}
