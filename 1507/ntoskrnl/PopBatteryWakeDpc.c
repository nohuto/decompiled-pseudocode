/*
 * XREFs of PopBatteryWakeDpc @ 0x14014C99C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

__int64 PopBatteryWakeDpc()
{
  byte_14032EAA0 = 0;
  KeSetEvent(&stru_14032EA88, 0, 0);
  _InterlockedExchange(&dword_14032EA00, 0);
  return PopBatteryQueueWork(1LL);
}
