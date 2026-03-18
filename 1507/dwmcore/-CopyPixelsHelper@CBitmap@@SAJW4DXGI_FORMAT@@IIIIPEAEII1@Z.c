/*
 * XREFs of ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18005CBB8
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180080550 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18013DEC0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180152BC0 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180051B88 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CBitmap::CopyPixelsHelper(
        __int32 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9)
{
  __int64 v10; // r12
  int v13; // eax
  unsigned int v14; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v16; // ecx
  __int64 v18; // rbp
  size_t v19; // r14
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-28h]

  v10 = a4;
  v13 = HrCheckBufferSize((enum DXGI_FORMAT)a1, a4, a2, a3, a5);
  v14 = v13;
  if ( v13 < 0 )
  {
    v23 = 76;
LABEL_12:
    v22 = v13;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v23);
    return v14;
  }
  v13 = HrCheckBufferSize((enum DXGI_FORMAT)a1, a7, a2, a3, a8);
  v14 = v13;
  if ( v13 < 0 )
  {
    v23 = 83;
    goto LABEL_12;
  }
  PixelFormatSize = GetPixelFormatSize(a1);
  if ( !PixelFormatSize || a2 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v14 = -2147024362;
    v23 = 85;
    goto LABEL_15;
  }
  v14 = 0;
  v16 = (a2 * PixelFormatSize + 7) >> 3;
  if ( v16 > a7 )
  {
    v14 = -2147024809;
    v23 = 90;
LABEL_15:
    v22 = v14;
    goto LABEL_16;
  }
  if ( a3 )
  {
    v18 = a3;
    v19 = v16;
    do
    {
      memcpy_0(a9, Src, v19);
      a9 += a7;
      Src += v10;
      --v18;
    }
    while ( v18 );
  }
  return v14;
}
