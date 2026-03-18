/*
 * XREFs of ?Release@CHwSolidBrush@@WBA@EAAKXZ @ 0x1800C1B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CHwSolidBrush::Release()
{
  return CBitmapColorKey::GetSourceState();
}
