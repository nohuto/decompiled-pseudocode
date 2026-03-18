/*
 * XREFs of EngGetRgnData @ 0x1C0074CC0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRegionData @ 0x1C0074D10 (GreGetRegionData.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

DWORD __stdcall EngGetRgnData(HANDLE hrgn, DWORD nCount, LPRGNDATA lpRgnData)
{
  if ( (unsigned int)GreGetObjectOwner(hrgn, 4LL) )
    return 0;
  else
    return GreGetRegionData((HRGN)hrgn);
}
