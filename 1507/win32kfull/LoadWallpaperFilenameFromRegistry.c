/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x1C0152530
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxSetDeskWallpaper @ 0x1C0152250 (xxxSetDeskWallpaper.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01FEBB0 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int16 v7[24]; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v3 = a3;
  memset(v7, 0, 40);
  memset(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, v7, 20LL, 0LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, v7, a2, v3, 8) )
    RtlStringCchCopyW(a2, v3, (char *)v7);
  RtlLoadStringOrError(71LL, Str2, 40LL, 0LL);
  if ( !_wcsicmp((const wchar_t *)a2, Str2) )
    GetDefaultWallpaperName((unsigned __int16 *)a2, v3);
  return 1LL;
}
