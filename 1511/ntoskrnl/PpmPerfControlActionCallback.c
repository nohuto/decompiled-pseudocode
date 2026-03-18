/*
 * XREFs of PpmPerfControlActionCallback @ 0x1401EC54C
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 */

__int64 PpmPerfControlActionCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
