/*
 * XREFs of ?SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x18013B4BC
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18013B0CC (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18013B1D4 (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::SizeAndPixelInfoFromTextureDesc(
        CHwTextureRenderTarget *this,
        enum DXGI_ALPHA_MODE a2,
        const struct D3D11_TEXTURE2D_DESC *a3)
{
  DXGI_FORMAT Format; // ecx
  int v5; // edx
  int v6; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v8; // ebx

  *((_DWORD *)this + 2) = a3->Width;
  *((_DWORD *)this + 3) = a3->Height;
  Format = a3->Format;
  *((_DWORD *)this + 50) = Format;
  if ( !HasAlphaChannel(Format) )
    v5 = 3;
  *((_DWORD *)this + 51) = v5;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v6, (CHwTextureRenderTarget *)((char *)this + 208));
  v8 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0x202u);
  *((_QWORD *)this + 27) = 0LL;
  return v8;
}
