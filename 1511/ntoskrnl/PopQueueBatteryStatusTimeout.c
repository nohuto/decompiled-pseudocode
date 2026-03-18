/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x1404F8DF0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 */

BOOLEAN PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_1402DE4C8);
  _InterlockedExchange(&dword_1402DE440, 1);
  return KeSetTimer(&stru_1402DE448, (LARGE_INTEGER)-300000000LL, (PKDPC)&dword_1402DE488);
}
