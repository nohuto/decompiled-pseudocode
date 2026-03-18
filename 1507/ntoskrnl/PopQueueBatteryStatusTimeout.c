/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x140565DF8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 */

char PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_14032EA88);
  _InterlockedExchange(&dword_14032EA00, 1);
  return KiSetTimerEx((__int64)&stru_14032EA08, -300000000LL, 0, 0, (__int64)&dword_14032EA48);
}
