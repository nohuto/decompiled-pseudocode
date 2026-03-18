/*
 * XREFs of PopUserPresentSetWorker @ 0x1404C552C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     PopNotifyConsoleUserPresent @ 0x1404C5578 (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, __int64 a2)
{
  LONG result; // eax
  __int64 v4; // rdx

  if ( byte_1402DE291 )
  {
    _InterlockedExchange(&dword_1402DE298, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_1402DE298);
    KeSetTimer(&PopAwayModeUserPresenceTimer, (LARGE_INTEGER)-30000000LL, &PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u, v4);
  }
  PopNotifyConsoleUserPresent(0LL, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_1402DE294, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
