/*
 * XREFs of NtGdiCreateHatchBrushInternal @ 0x1C00094D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HBRUSH __fastcall NtGdiCreateHatchBrushInternal(unsigned int a1, unsigned int a2, int a3)
{
  return hCreateHatchBrushInternal(a1, a2, a3);
}
