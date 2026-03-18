/*
 * XREFs of ExpTimeRefreshCallback @ 0x140112170
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
