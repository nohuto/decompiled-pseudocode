/*
 * XREFs of CreateEmptyRgn @ 0x1C0022330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
