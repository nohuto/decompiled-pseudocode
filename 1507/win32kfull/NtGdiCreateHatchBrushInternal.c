/*
 * XREFs of NtGdiCreateHatchBrushInternal @ 0x1C0005880
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
