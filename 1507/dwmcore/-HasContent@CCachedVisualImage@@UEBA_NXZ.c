/*
 * XREFs of ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x180053450
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::HasContent(CCachedVisualImage *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 13) || *((_BYTE *)this + 275) )
    return 1LL;
  return result;
}
