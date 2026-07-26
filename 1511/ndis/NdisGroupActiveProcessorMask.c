/*
 * XREFs of NdisGroupActiveProcessorMask @ 0x1C004C060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
KAFFINITY __stdcall NdisGroupActiveProcessorMask(USHORT Group)
{
  return KeQueryGroupAffinity(Group);
}
