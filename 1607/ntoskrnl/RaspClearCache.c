/*
 * XREFs of RaspClearCache @ 0x140725934
 * Callers:
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x14072586C (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140728928 (BgpTxtDestroyRegion.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x1407283D4 (RaspDestroyCachedBitmap.c)
 */

__int64 *RaspClearCache()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  result = (__int64 *)RaspBitmapCache;
  v1 = *(_QWORD *)RaspBitmapCache;
  if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
    __fastfail(3u);
  while ( 1 )
  {
    RaspBitmapCache = v1;
    *(_QWORD *)(v1 + 8) = &RaspBitmapCache;
    if ( result == &RaspBitmapCache )
      break;
    RaspDestroyCachedBitmap(result);
    result = (__int64 *)RaspBitmapCache;
    v1 = *(_QWORD *)RaspBitmapCache;
    if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
      __fastfail(3u);
  }
  dword_1402F9E74 = 0;
  return result;
}
