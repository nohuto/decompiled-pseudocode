/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18001B890
 * Callers:
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18001B920 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180033320 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CComposition **this)
{
  enum DXGI_FORMAT *v1; // rdi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  enum DXGI_FORMAT v4; // ecx

  v1 = (enum DXGI_FORMAT *)this + 51;
  if ( !*((_DWORD *)this + 51) )
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
  *((_DWORD *)this + 52) = (unsigned int)HasAlphaChannel(*v1) && !*((_BYTE *)this + 373);
  if ( !*((_DWORD *)this + 53) )
    GetPixelFormatColorSpace(v4, (enum ColorSpace *)((char *)this + 212));
}
