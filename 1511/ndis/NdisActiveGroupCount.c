/*
 * XREFs of NdisActiveGroupCount @ 0x1C0016770
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
