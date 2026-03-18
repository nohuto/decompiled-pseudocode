/*
 * XREFs of ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1800EDC24
 * Callers:
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1800EC190 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x1800ECB94 (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x1800ECEEC (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800EE6EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800574D0 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    *(_DWORD *)(v4 + 304) = v2;
    v6 = HasAlphaChannel(v3);
    *(_DWORD *)(v7 + 308) = v6 ? 1 : 3;
    PixelFormatColorSpace = GetPixelFormatColorSpace(v8, (enum ColorSpace *)(v7 + 312));
    v5 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace >= 0 )
      *(_QWORD *)(v10 + 320) = 0LL;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0xBCu);
  }
  else
  {
    v5 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0xAEu);
  }
  return v5;
}
