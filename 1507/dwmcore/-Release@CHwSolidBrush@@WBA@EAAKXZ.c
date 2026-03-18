/*
 * XREFs of ?Release@CHwSolidBrush@@WBA@EAAKXZ @ 0x18009B620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CHwSolidBrush::Release()
{
  return CBitmapColorKey::GetSourceState();
}
