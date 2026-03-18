/*
 * XREFs of ?IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ @ 0x180143180
 * Callers:
 *     ?IsMonitorSpecificContent@CHwndBitmap@@WII@EBA_NXZ @ 0x1800C05E0 (-IsMonitorSpecificContent@CHwndBitmap@@WII@EBA_NXZ.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x180033D40 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 */

char __fastcall CHwndBitmap::IsMonitorSpecificContent(CHwndBitmap *this)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *((_QWORD *)this + 68);
  result = 0;
  if ( v1 )
    return CCachedVisualImage::IsMonitorSpecificContent((CCachedVisualImage *)(v1 + 8));
  return result;
}
