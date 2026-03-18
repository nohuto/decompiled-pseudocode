/*
 * XREFs of EngCreatePalette @ 0x1C007AD00
 * Callers:
 *     <none>
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0039260 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00BF210 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
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
  __int16 v7; // r10
  ULONG v8; // ecx
  int v9; // r10d
  unsigned int v10; // r11d
  unsigned int *v12; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+58h] [rbp-10h]

  v6 = 0LL;
  v7 = iMode;
  v8 = iMode & 0xFFFF7FFF;
  v13 = 0;
  v9 = v7 & 0x8000;
  v12 = 0LL;
  v10 = 16777728;
  if ( v9 )
    v10 = 50332160;
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
                       (PALMEMOBJ *)&v12,
                       v8,
                       cColors,
                       pulColors,
                       flRed,
                       flGreen,
                       flBlue,
                       v10,
                       v9 == 0) )
  {
    v13 = 1;
    v6 = *(HPALETTE *)v12;
  }
  PALMEMOBJ::~PALMEMOBJ(&v12);
  return v6;
}
