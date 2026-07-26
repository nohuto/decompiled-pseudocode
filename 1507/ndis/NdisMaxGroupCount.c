/*
 * XREFs of NdisMaxGroupCount @ 0x1C004B870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
USHORT NdisMaxGroupCount(void)
{
  return KeQueryMaximumGroupCount();
}
