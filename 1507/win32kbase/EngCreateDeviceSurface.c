/*
 * XREFs of EngCreateDeviceSurface @ 0x1C0011CF0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B5330 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0011DA4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HSURF __stdcall EngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (iFormatCompat & 0xFFFF7FFF) == 0 || (iFormatCompat & 0xFFFF7FFF) > 6 )
    iFormatCompat = iFormatCompat & 0x8000 | 1;
  return (HSURF)hbmCreateDriverSurface(1u, dhsurf, sizl, 0, iFormatCompat, 0, (void *)0xDEADBEEFLL);
}
