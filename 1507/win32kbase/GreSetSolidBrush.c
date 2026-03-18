/*
 * XREFs of GreSetSolidBrush @ 0x1C00AF440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetSolidBrush(HBRUSH a1, int a2)
{
  return GreSetSolidBrushInternal(a1, a2, 0, 1);
}
