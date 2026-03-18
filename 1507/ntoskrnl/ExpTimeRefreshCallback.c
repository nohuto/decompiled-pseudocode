/*
 * XREFs of ExpTimeRefreshCallback @ 0x14015DB84
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((__int64)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
