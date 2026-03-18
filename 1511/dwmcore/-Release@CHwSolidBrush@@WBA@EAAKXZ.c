/*
 * XREFs of ?Release@CHwSolidBrush@@WBA@EAAKXZ @ 0x1800BE3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CHwSolidBrush::Release()
{
  return CBitmapColorKey::GetSourceState();
}
