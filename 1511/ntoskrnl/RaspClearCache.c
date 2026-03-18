/*
 * XREFs of RaspClearCache @ 0x1406D9924
 * Callers:
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x1406D984C (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x1406DC840 (BgpTxtDestroyRegion.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x1406DC30C (RaspDestroyCachedBitmap.c)
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
  dword_1402D4B34 = 0;
  return result;
}
