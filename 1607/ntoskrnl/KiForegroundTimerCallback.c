/*
 * XREFs of KiForegroundTimerCallback @ 0x1400A8AEC
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&Dpc, 0);
}
