/*
 * XREFs of ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180080E50
 * Callers:
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800AB484 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164480 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18017B870 (-GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180081174 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetD2DBitmap(struct ID2D1Bitmap1 **this, char a2, struct ID2D1Bitmap1 **a3)
{
  unsigned int v3; // ebx
  char *v7; // rsi
  int D2DBitmap; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = 0;
  *a3 = 0LL;
  if ( (*((unsigned __int8 (__fastcall **)(struct ID2D1Bitmap1 **))*this + 3))(this) )
  {
    if ( a2 )
    {
      v7 = (char *)(this + 31);
      if ( !this[31] )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap((CD3DTexture *)this, 1, this + 31);
        v3 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          v10 = 536;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v7 = (char *)(this + 30);
      if ( !this[30] )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap((CD3DTexture *)this, 0, this + 30);
        v3 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          v10 = 546;
LABEL_9:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, v10);
          return v3;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7);
    *a3 = *(struct ID2D1Bitmap1 **)v7;
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x211u);
  }
  return v3;
}
