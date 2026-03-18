/*
 * XREFs of EngCreatePalette @ 0x1C005E000
 * Callers:
 *     <none>
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z @ 0x1C0022CF0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z.c)
 *     GreSetPaletteOwner @ 0x1C005CFA0 (GreSetPaletteOwner.c)
 */

HPALETTE __stdcall EngCreatePalette(
        ULONG iMode,
        ULONG cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  HPALETTE v6; // rbx
  ULONG v7; // esi
  ULONG v8; // ecx
  int v9; // edx
  int v10; // r8d
  HPALETTE *v11; // rdi
  HPALETTE *v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+48h] [rbp-10h]

  v6 = 0LL;
  v14 = 0;
  v7 = iMode & 0x8000;
  v13 = 0LL;
  v8 = iMode & 0xFFFF7FFF;
  if ( v8 == 2 && flGreen == 65280 )
  {
    if ( flRed == 255 && flBlue == 16711680 )
    {
      v8 = 4;
    }
    else if ( flRed == 16711680 && flBlue == 255 )
    {
      v8 = 8;
    }
  }
  if ( (unsigned int)PALMEMOBJ::bCreatePalette(
                       (PALMEMOBJ *)&v13,
                       v8,
                       cColors,
                       pulColors,
                       flRed,
                       flGreen,
                       flBlue,
                       0x1000200u) )
  {
    v11 = v13;
    if ( !v7 || (unsigned int)GreSetPaletteOwner(*v13, -2147483646) )
    {
      v6 = *v11;
      v14 = 1;
    }
  }
  PALMEMOBJ::~PALMEMOBJ((__int64 **)&v13, v9, v10);
  return v6;
}
