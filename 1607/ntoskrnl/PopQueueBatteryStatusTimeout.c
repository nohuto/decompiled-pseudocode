/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x140531E98
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_1403036A8);
  _InterlockedExchange(&dword_140303620, 1);
  return KiSetTimerEx((__int64)&stru_140303628, -300000000LL, 0, 0, (__int64)&dword_140303668);
}
