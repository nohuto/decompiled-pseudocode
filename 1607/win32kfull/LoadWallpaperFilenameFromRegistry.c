/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x1C012E7F4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxSetDeskWallpaper @ 0x1C012E514 (xxxSetDeskWallpaper.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01F6734 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v4; // rsi
  char v7[48]; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v4 = a3;
  memset(v7, 0, 0x28uLL);
  memset(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, v7, 20LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, v7, a2, v4, 8) )
    RtlStringCchCopyW(a2, v4, v7);
  RtlLoadStringOrError(71LL, Str2, 40LL);
  if ( !_wcsicmp((const wchar_t *)a2, Str2) )
    GetDefaultWallpaperName((unsigned __int16 *)a2, v4);
  return 1LL;
}
