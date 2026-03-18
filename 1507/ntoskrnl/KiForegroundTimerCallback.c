/*
 * XREFs of KiForegroundTimerCallback @ 0x1400F4B7C
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((__int64)&Dpc, 0LL, 0LL, 0LL, 0);
}
