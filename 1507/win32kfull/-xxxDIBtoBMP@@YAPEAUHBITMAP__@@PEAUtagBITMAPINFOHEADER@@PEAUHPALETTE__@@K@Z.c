/*
 * XREFs of ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F0178
 * Callers:
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F0308 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0098AFC (GreGetBitmapBitsSize.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     _SelectPalette @ 0x1C00E0AA0 (_SelectPalette.c)
 *     GreSetDIBits @ 0x1C010102C (GreSetDIBits.c)
 *     xxxRealizePalette @ 0x1C0111BF0 (xxxRealizePalette.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C02A5DF0 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 */

HSURF __fastcall xxxDIBtoBMP(struct tagBITMAPINFO *a1, __int64 a2, unsigned int a3)
{
  DWORD biSize; // edi
  unsigned int BitmapBitsSize; // eax
  __int64 v8; // rdx
  __int64 v9; // r11
  unsigned int biWidth_low; // r15d
  unsigned int biWidth_high; // ebp
  int biHeight_high; // r14d
  char *v13; // r12
  HSURF v14; // rsi
  HDC CompatibleDC; // rdi
  __int64 Bitmap; // rax
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r15

  biSize = a1->bmiHeader.biSize;
  if ( !GreGetBitmapSizeInternal(a1, 0, a1->bmiHeader.biSize) )
    return 0LL;
  BitmapBitsSize = GreGetBitmapBitsSize((__int64)a1);
  if ( !BitmapBitsSize || BitmapBitsSize + (unsigned int)v9 < BitmapBitsSize || a3 < BitmapBitsSize + (unsigned int)v9 )
    return 0LL;
  if ( biSize != 40 )
  {
    if ( biSize == 12 )
    {
      biWidth_low = LOWORD(a1->bmiHeader.biWidth);
      biWidth_high = HIWORD(a1->bmiHeader.biWidth);
      biHeight_high = HIWORD(a1->bmiHeader.biHeight);
      goto LABEL_9;
    }
    return 0LL;
  }
  biWidth_low = a1->bmiHeader.biWidth;
  biWidth_high = a1->bmiHeader.biHeight;
  biHeight_high = a1->bmiHeader.biBitCount;
LABEL_9:
  v13 = (char *)a1 + v9;
  v14 = 0LL;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), v8);
  if ( CompatibleDC )
  {
    if ( biHeight_high == 1 )
      Bitmap = GreCreateBitmap(biWidth_low, biWidth_high, 1LL, 1LL, 0LL);
    else
      Bitmap = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 24LL), biWidth_low, biWidth_high, 0, 0LL);
    v14 = (HSURF)Bitmap;
    if ( Bitmap )
    {
      v17 = 0LL;
      v19 = GreSelectBitmap(CompatibleDC, Bitmap);
      if ( a2 )
      {
        v17 = SelectPalette((__int64)CompatibleDC, a2, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSetDIBits(CompatibleDC, v14, v18, biWidth_high, (__int64)v13, a1);
      if ( v17 )
      {
        SelectPalette((__int64)CompatibleDC, v17, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSelectBitmap(CompatibleDC, v19);
    }
    GreDeleteDC(CompatibleDC);
  }
  return v14;
}
