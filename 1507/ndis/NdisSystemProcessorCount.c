/*
 * XREFs of NdisSystemProcessorCount @ 0x1C004BA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CCHAR NdisSystemProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
