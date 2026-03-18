/*
 * XREFs of ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C258
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C3BC (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?GetTextureFormat@CSectionBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18015C7B0 (-GetTextureFormat@CSectionBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A3400 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::CalcPixelFormatInfo(CSectionBitmapRealization *this)
{
  int v1; // ecx
  __int64 v2; // r9
  unsigned int v3; // ebx
  int PixelFormatColorSpace; // eax
  __int64 v5; // r9

  if ( IsValidPixelFormat(*((_DWORD *)this + 119)) )
  {
    *(_DWORD *)(v2 + 492) = *(_DWORD *)(v2 + 128);
    *(_DWORD *)(v2 + 488) = v1;
    PixelFormatColorSpace = GetPixelFormatColorSpace(v1, (enum ColorSpace *)(v2 + 496));
    v3 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace >= 0 )
    {
      *(_QWORD *)(v5 + 504) = 0LL;
      *(_BYTE *)(v5 + 512) = 1;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0xE3u);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xDCu);
  }
  return v3;
}
