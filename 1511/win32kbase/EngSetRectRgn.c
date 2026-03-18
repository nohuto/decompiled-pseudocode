/*
 * XREFs of EngSetRectRgn @ 0x1C0074E50
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C0025020 (GreSetRectRgn.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

BOOL __stdcall EngSetRectRgn(HANDLE hrgn, INT left, INT top, INT right, INT bottom)
{
  if ( (unsigned int)GreGetObjectOwner(hrgn, 4LL) )
    return 0;
  else
    return GreSetRectRgn((HRGN)hrgn, left, top, right, bottom);
}
