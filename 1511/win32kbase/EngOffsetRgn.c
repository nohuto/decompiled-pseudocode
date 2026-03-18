/*
 * XREFs of EngOffsetRgn @ 0x1C00BF4F0
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C00441E0 (GreOffsetRgn.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

INT __stdcall EngOffsetRgn(HANDLE hrgn, INT x, INT y)
{
  if ( (unsigned int)GreGetObjectOwner((int)hrgn, 4) )
    return 0;
  else
    return GreOffsetRgn((HRGN)hrgn, x, y);
}
