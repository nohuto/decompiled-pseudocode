/*
 * XREFs of EngRectInRgn @ 0x1C00BF540
 * Callers:
 *     <none>
 * Callees:
 *     GreRectInRegion @ 0x1C0025120 (GreRectInRegion.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

BOOL __stdcall EngRectInRgn(HANDLE hrgn, LPRECT prcl)
{
  if ( (unsigned int)GreGetObjectOwner((int)hrgn, 4) )
    return 0;
  else
    return GreRectInRegion((HRGN)hrgn, (struct _RECTL *)prcl);
}
