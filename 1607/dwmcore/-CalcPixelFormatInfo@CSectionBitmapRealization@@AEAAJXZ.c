/*
 * XREFs of ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x18018E728
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18018E874 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?GetTextureFormat@CSectionBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18018EB50 (-GetTextureFormat@CSectionBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800B1E94 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::CalcPixelFormatInfo(CSectionBitmapRealization *this)
{
  int v1; // ecx
  __int64 v2; // r9
  unsigned int v3; // ebx
  int PixelFormatColorSpace; // eax
  __int64 v5; // r9

  if ( IsValidPixelFormat(*((_DWORD *)this + 109)) )
  {
    *(_DWORD *)(v2 + 452) = *(_DWORD *)(v2 + 128);
    *(_DWORD *)(v2 + 448) = v1;
    PixelFormatColorSpace = GetPixelFormatColorSpace(v1, (enum ColorSpace *)(v2 + 456));
    v3 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0xE1u);
    }
    else
    {
      *(_QWORD *)(v5 + 464) = 0LL;
      *(_BYTE *)(v5 + 472) = 1;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xDAu);
  }
  return v3;
}
