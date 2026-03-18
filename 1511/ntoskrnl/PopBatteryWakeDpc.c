/*
 * XREFs of PopBatteryWakeDpc @ 0x140117A3C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

__int64 PopBatteryWakeDpc()
{
  byte_1402DE4E0 = 0;
  KeSetEvent(&stru_1402DE4C8, 0, 0);
  _InterlockedExchange(&dword_1402DE440, 0);
  return PopBatteryQueueWork(1LL);
}
