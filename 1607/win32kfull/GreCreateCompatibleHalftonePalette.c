/*
 * XREFs of GreCreateCompatibleHalftonePalette @ 0x1C0129508
 * Callers:
 *     NtGdiCreateHalftonePalette @ 0x1C0129500 (NtGdiCreateHalftonePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025B574 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 GreCreateCompatibleHalftonePalette()
{
  __int64 v0; // rbx
  __int64 *v2; // [rsp+50h] [rbp-18h] BYREF
  int v3; // [rsp+58h] [rbp-10h]

  v0 = 0LL;
  v3 = 0;
  v2 = 0LL;
  if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v2, 1u, 0x100u, aPalHalftone, 0, 0, 0, 0x100500u, 0) )
  {
    *((_DWORD *)v2 + 6) |= 0x100000u;
    v3 = 1;
    v0 = *v2;
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v2);
  return v0;
}
