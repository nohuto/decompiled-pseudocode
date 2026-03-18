/*
 * XREFs of ?UpdateRenderTargetIfDirty@CCachedVisualImage@@QEAAXU_LUID@@VDisplayId@@@Z @ 0x18000EE8C
 * Callers:
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18001F774 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180052DDC (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateRenderTargetIfDirty(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  int v6; // [rsp+28h] [rbp-18h]
  int v7; // [rsp+2Ch] [rbp-14h]
  int v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+38h] [rbp-8h]
  struct IBitmapSource *v12; // [rsp+78h] [rbp+38h] BYREF

  result = CCachedVisualImage::FindExistingRenderTarget();
  if ( !result || *(_BYTE *)(result + 40) )
  {
    v12 = 0LL;
    v7 = 0;
    v8 = 0;
    v9 = 0LL;
    v5 = a2;
    v6 = a3;
    result = CCachedVisualImage::GetBitmapSource(
               (CCachedVisualImage *)(a1 + 8),
               &v12,
               (const struct BitmapSourceInfo *)&v5);
    if ( (int)result >= 0 )
    {
      if ( v12 )
        return (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return result;
}
