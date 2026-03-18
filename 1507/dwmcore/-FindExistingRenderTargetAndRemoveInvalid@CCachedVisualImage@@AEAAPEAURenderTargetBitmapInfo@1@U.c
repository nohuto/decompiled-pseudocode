/*
 * XREFs of ?FindExistingRenderTargetAndRemoveInvalid@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@II@Z @ 0x180052D9C
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180052DDC (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800530AC (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 */

__int64 __fastcall CCachedVisualImage::FindExistingRenderTargetAndRemoveInvalid(
        CCachedVisualImage *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  CCachedVisualImage::RemoveInvalidTargets(a1, a4, a5);
  return CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
}
