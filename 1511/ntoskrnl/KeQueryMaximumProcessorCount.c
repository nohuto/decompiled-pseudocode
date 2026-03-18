/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x1401C412C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
