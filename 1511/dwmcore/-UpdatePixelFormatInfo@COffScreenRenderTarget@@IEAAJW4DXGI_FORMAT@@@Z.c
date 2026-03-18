/*
 * XREFs of ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180108A14
 * Callers:
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x1800F3F9C (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800F41D4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180107B80 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x180108564 (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A3400 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::UpdatePixelFormatInfo(COffScreenRenderTarget *this, int a2)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // r9
  unsigned int v5; // ebx
  BOOL v6; // eax
  __int64 v7; // r9
  int v8; // r8d
  int PixelFormatColorSpace; // eax
  __int64 v10; // r9

  if ( IsValidPixelFormat(a2) )
  {
    *(_DWORD *)(v4 + 280) = v2;
    v6 = HasAlphaChannel(v3);
    *(_DWORD *)(v7 + 284) = v6 ? 1 : 3;
    PixelFormatColorSpace = GetPixelFormatColorSpace(v8, (enum ColorSpace *)(v7 + 288));
    v5 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace >= 0 )
      *(_QWORD *)(v10 + 296) = 0LL;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0xBFu);
  }
  else
  {
    v5 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0xB1u);
  }
  return v5;
}
