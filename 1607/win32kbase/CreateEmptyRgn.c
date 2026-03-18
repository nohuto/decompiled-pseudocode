/*
 * XREFs of CreateEmptyRgn @ 0x1C0057860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct HOBJ__ *CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
