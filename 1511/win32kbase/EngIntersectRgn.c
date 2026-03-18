/*
 * XREFs of EngIntersectRgn @ 0x1C00BF480
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

INT __stdcall EngIntersectRgn(HANDLE hrgnResult, HANDLE hRgnA, HANDLE hRgnB)
{
  if ( (unsigned int)GreGetObjectOwner((int)hrgnResult, 4)
    || (unsigned int)GreGetObjectOwner((int)hRgnA, 4)
    || (unsigned int)GreGetObjectOwner((int)hRgnB, 4) )
  {
    return 0;
  }
  else
  {
    return GreCombineRgn((HRGN)hrgnResult, (HRGN)hRgnA, (HRGN)hRgnB, 1);
  }
}
