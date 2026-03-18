/*
 * XREFs of EngCombineRgn @ 0x1C0074DD0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

INT __stdcall EngCombineRgn(HANDLE hrgnTrg, HANDLE hrgnSrc1, HANDLE hrgnSrc2, INT iMode)
{
  if ( (unsigned int)GreGetObjectOwner(hrgnTrg, 4LL)
    || (unsigned int)GreGetObjectOwner(hrgnSrc1, 4LL)
    || (unsigned int)GreGetObjectOwner(hrgnSrc2, 4LL) )
  {
    return 0;
  }
  else
  {
    return GreCombineRgn((HRGN)hrgnTrg, (HRGN)hrgnSrc1, (HRGN)hrgnSrc2, iMode);
  }
}
