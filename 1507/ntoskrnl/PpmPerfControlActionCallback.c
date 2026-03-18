/*
 * XREFs of PpmPerfControlActionCallback @ 0x14023A794
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

__int64 PpmPerfControlActionCallback()
{
  return KiInsertQueueDpc((__int64)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
