/*
 * XREFs of ?GetAlphaModeInternal@CCachedVisualImage@@AEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800529F0
 * Callers:
 *     ?GetAlphaMode@CCachedVisualImage@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18000EE80 (-GetAlphaMode@CCachedVisualImage@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180052C28 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::GetAlphaModeInternal(CCachedVisualImage *this)
{
  __int64 result; // rax

  if ( !*((_DWORD *)this + 32) )
    return 3LL;
  result = 1LL;
  if ( *((_BYTE *)this + 285) )
    return 3LL;
  return result;
}
