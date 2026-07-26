/*
 * XREFs of NdisGroupMaxProcessorCount @ 0x1C004C070
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
