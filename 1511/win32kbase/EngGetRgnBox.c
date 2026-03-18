/*
 * XREFs of EngGetRgnBox @ 0x1C00BF440
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C00251A0 (GreGetRgnBox.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

INT __stdcall EngGetRgnBox(HANDLE hrgn, LPRECT prcl)
{
  if ( (unsigned int)GreGetObjectOwner((int)hrgn, 4) )
    return 0;
  else
    return GreGetRgnBox((HRGN)hrgn, (__int64)prcl);
}
