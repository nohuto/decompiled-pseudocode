/*
 * XREFs of PopBatteryWakeDpc @ 0x140126BD4
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 */

__int64 PopBatteryWakeDpc()
{
  byte_140303780 = 0;
  KeSetEvent(&stru_140303768, 0, 0);
  _InterlockedExchange(&dword_1403036E0, 0);
  return PopBatteryQueueWork(1LL);
}
