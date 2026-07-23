/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x1401D2F2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
