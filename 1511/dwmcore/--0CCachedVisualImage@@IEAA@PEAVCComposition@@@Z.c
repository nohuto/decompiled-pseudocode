/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18005AAD4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18012634C (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180126B3C (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x180068D3C (--0-$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::CCachedVisualImage(
        CCachedVisualImage *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 1) = &IImageSource::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = &CResource::`vftable';
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CCachedVisualImage::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CCachedVisualImage::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CCachedVisualImage::`vftable';
  DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>::DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>((char *)this + 144);
  if ( g_LockTilingTarget )
  {
    *((_DWORD *)this + 75) = 1065353216;
    *((_DWORD *)this + 72) = 1065353216;
    *((_DWORD *)this + 74) = 1065353216;
  }
  return this;
}
