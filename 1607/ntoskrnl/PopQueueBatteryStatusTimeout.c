/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x140531958
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140303768);
  _InterlockedExchange(&dword_1403036E0, 1);
  return KiSetTimerEx((__int64)&stru_1403036E8, -300000000LL, 0, 0, (__int64)&dword_140303728);
}
