/*
 * XREFs of EngCopyRgn @ 0x1C00BF360
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

INT __stdcall EngCopyRgn(HANDLE hrgnDst, HANDLE hrgnSrc)
{
  if ( (unsigned int)GreGetObjectOwner((int)hrgnDst, 4) || (unsigned int)GreGetObjectOwner((int)hrgnSrc, 4) )
    return 0;
  else
    return GreCombineRgn((HRGN)hrgnDst, (HRGN)hrgnSrc, 0LL, 5);
}
