/*
 * XREFs of KiForegroundTimerCallback @ 0x140031DA8
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&Dpc, 0);
}
