/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x1402003A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
