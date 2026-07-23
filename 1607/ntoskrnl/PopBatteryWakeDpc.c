/*
 * XREFs of PopBatteryWakeDpc @ 0x140127144
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

__int64 PopBatteryWakeDpc()
{
  byte_1403036C0 = 0;
  KeSetEvent(&stru_1403036A8, 0, 0);
  _InterlockedExchange(&dword_140303620, 0);
  return PopBatteryQueueWork(1LL);
}
