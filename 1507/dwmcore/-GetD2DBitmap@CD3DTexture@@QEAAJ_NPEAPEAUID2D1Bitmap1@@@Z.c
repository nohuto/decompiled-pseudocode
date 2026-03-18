/*
 * XREFs of ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180084FE8
 * Callers:
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180084638 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18012520C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180084824 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DTexture::GetD2DBitmap(struct ID2D1Bitmap1 **this, char a2, struct ID2D1Bitmap1 **a3)
{
  struct ID2D1Bitmap1 *v3; // rax
  unsigned int v5; // esi
  char *v8; // r14
  int D2DBitmap; // eax
  unsigned int v11; // [rsp+20h] [rbp-28h]

  v3 = *this;
  v5 = 0;
  *a3 = 0LL;
  if ( (*((unsigned __int8 (__fastcall **)(struct ID2D1Bitmap1 **))v3 + 3))(this) )
  {
    if ( a2 )
    {
      v8 = (char *)(this + 30);
      if ( !this[30] )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap((CD3DTexture *)this, 1, this + 30);
        v5 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          v11 = 522;
          goto LABEL_12;
        }
      }
    }
    else
    {
      v8 = (char *)(this + 29);
      if ( !this[29] )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap((CD3DTexture *)this, 0, this + 29);
        v5 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          v11 = 532;
LABEL_12:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, v11);
          return v5;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
    *a3 = *(struct ID2D1Bitmap1 **)v8;
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x203u);
  }
  return v5;
}
