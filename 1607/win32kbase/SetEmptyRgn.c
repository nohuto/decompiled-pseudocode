/*
 * XREFs of SetEmptyRgn @ 0x1C0057870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return SetRectRgnIndirect(a1, (LONG *)&gZero);
}
