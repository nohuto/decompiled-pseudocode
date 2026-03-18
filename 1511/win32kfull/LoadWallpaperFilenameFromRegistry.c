/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x1C010D380
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C010D0A0 (xxxSetDeskWallpaper.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01FEFB0 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int16 v7[24]; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v3 = a3;
  memset(v7, 0, 40);
  memset(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, v7, 20LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, v7, a2, v3, 8) )
    RtlStringCchCopyW(a2, v3, v7);
  RtlLoadStringOrError(71LL, Str2, 40LL);
  if ( !_wcsicmp(a2, Str2) )
    GetDefaultWallpaperName(a2, v3);
  return 1LL;
}
