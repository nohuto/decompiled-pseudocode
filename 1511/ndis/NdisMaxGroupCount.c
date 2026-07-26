/*
 * XREFs of NdisMaxGroupCount @ 0x1C004C0E0
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
