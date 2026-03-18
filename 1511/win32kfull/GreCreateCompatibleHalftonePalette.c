/*
 * XREFs of GreCreateCompatibleHalftonePalette @ 0x1C0107728
 * Callers:
 *     NtGdiCreateHalftonePalette @ 0x1C0107720 (NtGdiCreateHalftonePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025DDFC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 GreCreateCompatibleHalftonePalette()
{
  __int64 v0; // rbx
  __int64 *v2; // [rsp+40h] [rbp-18h] BYREF
  int v3; // [rsp+48h] [rbp-10h]

  v0 = 0LL;
  v3 = 0;
  v2 = 0LL;
  if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v2, 1u, 0x100u, aPalHalftone, 0, 0, 0, 0x100500u) )
  {
    *((_DWORD *)v2 + 6) |= 0x100000u;
    if ( (unsigned int)GreSetPaletteOwner(*v2, 2147483650LL) )
    {
      v3 = 1;
      v0 = *v2;
    }
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v2);
  return v0;
}
