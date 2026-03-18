/*
 * XREFs of NtGdiPtInRegion @ 0x1C000FB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiPtInRegion(HRGN a1)
{
  return GrePtInRegion(a1);
}
