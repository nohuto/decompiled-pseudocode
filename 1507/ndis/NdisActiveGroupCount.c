/*
 * XREFs of NdisActiveGroupCount @ 0x1C0022820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
USHORT NdisActiveGroupCount(void)
{
  return KeQueryActiveGroupCount();
}
