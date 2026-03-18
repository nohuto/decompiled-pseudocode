/*
 * XREFs of ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001B870
 * Callers:
 *     ?DoesContainContent@CImageLegacyMilBrush@@MEBAJPEAH@Z @ 0x180032640 (-DoesContainContent@CImageLegacyMilBrush@@MEBAJPEAH@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180143BD8 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::HasContent(CCachedVisualImage *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 23) || *((_BYTE *)this + 363) )
    return 1LL;
  return result;
}
