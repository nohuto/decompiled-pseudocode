/*
 * XREFs of ?IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ @ 0x180126980
 * Callers:
 *     ?IsMonitorSpecificContent@CHwndBitmap@@WEA@EBA_NXZ @ 0x1800BD580 (-IsMonitorSpecificContent@CHwndBitmap@@WEA@EBA_NXZ.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18005B7C0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 */

char __fastcall CHwndBitmap::IsMonitorSpecificContent(CHwndBitmap *this)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *((_QWORD *)this + 58);
  result = 0;
  if ( v1 )
    return CCachedVisualImage::IsMonitorSpecificContent((CCachedVisualImage *)(v1 + 8));
  return result;
}
