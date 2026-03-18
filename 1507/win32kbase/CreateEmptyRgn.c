/*
 * XREFs of CreateEmptyRgn @ 0x1C0011A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((ERECTL *)&gZero);
}
