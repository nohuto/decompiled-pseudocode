/*
 * XREFs of PopUserPresentSetWorker @ 0x1404F0484
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     PopSetNotificationWork @ 0x140008A40 (PopSetNotificationWork.c)
 *     KeInitializeDpc @ 0x14000D6DC (KeInitializeDpc.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     PopNotifyConsoleUserPresent @ 0x1404F04D8 (PopNotifyConsoleUserPresent.c)
 */

LONG __fastcall PopUserPresentSetWorker(unsigned int a1, __int64 a2)
{
  LONG result; // eax

  if ( byte_140303E11 )
  {
    _InterlockedExchange(&dword_140303E18, 1);
    KeInitializeDpc(&PopAwayModeUserPresenceDpcObject, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140303E18);
    KiSetTimerEx((__int64)&PopAwayModeUserPresenceTimer, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
    PopAwaymodeExitReason = a1;
    PopSetNotificationWork(0x40u);
  }
  PopNotifyConsoleUserPresent(0LL, a2, a1);
  _InterlockedExchange(&PopUserPresentSetStatus, 0);
  result = _InterlockedCompareExchange(&dword_140303E14, 0, 0);
  if ( result )
    return KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  return result;
}
