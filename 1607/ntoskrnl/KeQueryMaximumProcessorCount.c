/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x1401D3100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
