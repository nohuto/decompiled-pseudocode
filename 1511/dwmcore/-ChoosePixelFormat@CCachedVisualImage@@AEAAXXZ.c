/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18005BB48
 * Callers:
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18000B3B0 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005AD88 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CComposition **this)
{
  enum DXGI_FORMAT *v1; // rsi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  int v4; // ecx

  v1 = (enum DXGI_FORMAT *)this + 31;
  if ( !*((_DWORD *)this + 31) )
  {
    PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this[4]);
    if ( PrimaryDesktopRenderTargetNoRef )
      (*(void (__fastcall **)(struct IRenderTargetDesktop *, enum DXGI_FORMAT *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                + 24LL))(
        PrimaryDesktopRenderTargetNoRef,
        v1);
    else
      *v1 = DXGI_FORMAT_B8G8R8A8_UNORM;
  }
  *((_DWORD *)this + 32) = (unsigned int)HasAlphaChannel(*v1) && !*((_BYTE *)this + 285);
  if ( !*((_DWORD *)this + 33) )
    GetPixelFormatColorSpace(v4, (enum ColorSpace *)((char *)this + 132));
}
