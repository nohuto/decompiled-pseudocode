/*
 * XREFs of NdisMaxGroupCount @ 0x1C0050A70
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
