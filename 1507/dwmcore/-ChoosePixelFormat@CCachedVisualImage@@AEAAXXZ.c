/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180053A64
 * Callers:
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18000EFA0 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180052C28 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CComposition **this)
{
  int *v1; // rsi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  int v4; // ecx

  v1 = (int *)this + 31;
  if ( !*((_DWORD *)this + 31) )
  {
    PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this[4]);
    if ( PrimaryDesktopRenderTargetNoRef )
      (*(void (__fastcall **)(struct IRenderTargetDesktop *, int *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef + 24LL))(
        PrimaryDesktopRenderTargetNoRef,
        v1);
    else
      *v1 = 87;
  }
  *((_DWORD *)this + 32) = HasAlphaChannel(*v1) && !*((_BYTE *)this + 285);
  if ( !*((_DWORD *)this + 33) )
    GetPixelFormatColorSpace(v4, (enum ColorSpace *)((char *)this + 132));
}
