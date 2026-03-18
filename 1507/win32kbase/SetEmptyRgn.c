/*
 * XREFs of SetEmptyRgn @ 0x1C0013010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return SetRectRgnIndirect(a1);
}
