/*
 * XREFs of NdisGroupMaxProcessorCount @ 0x1C0050A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall NdisGroupMaxProcessorCount(USHORT Group)
{
  return KeQueryMaximumProcessorCountEx(Group);
}
