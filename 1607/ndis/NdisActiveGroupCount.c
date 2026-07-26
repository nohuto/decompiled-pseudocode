/*
 * XREFs of NdisActiveGroupCount @ 0x1C0025900
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
