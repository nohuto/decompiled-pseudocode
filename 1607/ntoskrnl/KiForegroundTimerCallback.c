/*
 * XREFs of KiForegroundTimerCallback @ 0x1400AA56C
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&Dpc, 0);
}
