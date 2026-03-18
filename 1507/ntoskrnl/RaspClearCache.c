/*
 * XREFs of RaspClearCache @ 0x14075C96C
 * Callers:
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x14075C894 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x14075E5AC (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x14075F888 (BgpTxtDestroyRegion.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x14075F354 (RaspDestroyCachedBitmap.c)
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
  dword_140323C74 = 0;
  return result;
}
