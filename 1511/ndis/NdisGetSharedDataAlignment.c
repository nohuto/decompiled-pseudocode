/*
 * XREFs of NdisGetSharedDataAlignment @ 0x1C005B3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG NdisGetSharedDataAlignment(void)
{
  return KeGetRecommendedSharedDataAlignment();
}
