/*
 * XREFs of ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C012E748
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C012E514 (xxxSetDeskWallpaper.c)
 * Callees:
 *     ReleaseWallpaperSettings @ 0x1C0135A90 (ReleaseWallpaperSettings.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetGlobalWallpaperSettings(const struct tagWALLPAPERSETTINGS *a1)
{
  unsigned int v2; // edi
  _OWORD *v3; // rcx
  __int64 v4; // rdx
  __int128 v5; // xmm1
  __int64 v7; // rdx
  __int128 v8; // xmm1

  v2 = 0;
  v3 = (_OWORD *)g_pWallpaperSettings;
  if ( g_pWallpaperSettings )
  {
    if ( *g_pWallpaperSettings == 1 )
    {
      v7 = 4LL;
      do
      {
        *v3 = *(_OWORD *)a1;
        v3[1] = *((_OWORD *)a1 + 1);
        v3[2] = *((_OWORD *)a1 + 2);
        v3[3] = *((_OWORD *)a1 + 3);
        v3[4] = *((_OWORD *)a1 + 4);
        v3[5] = *((_OWORD *)a1 + 5);
        v3[6] = *((_OWORD *)a1 + 6);
        v3 += 8;
        v8 = *((_OWORD *)a1 + 7);
        a1 = (const struct tagWALLPAPERSETTINGS *)((char *)a1 + 128);
        *(v3 - 1) = v8;
        --v7;
      }
      while ( v7 );
      goto LABEL_5;
    }
    ReleaseWallpaperSettings();
    g_pWallpaperSettings = 0LL;
  }
  v3 = (_OWORD *)Win32AllocPool(516LL, 1347908437LL);
  g_pWallpaperSettings = v3;
  if ( g_pWallpaperSettings )
  {
    v4 = 4LL;
    do
    {
      *v3 = *(_OWORD *)a1;
      v3[1] = *((_OWORD *)a1 + 1);
      v3[2] = *((_OWORD *)a1 + 2);
      v3[3] = *((_OWORD *)a1 + 3);
      v3[4] = *((_OWORD *)a1 + 4);
      v3[5] = *((_OWORD *)a1 + 5);
      v3[6] = *((_OWORD *)a1 + 6);
      v3 += 8;
      v5 = *((_OWORD *)a1 + 7);
      a1 = (const struct tagWALLPAPERSETTINGS *)((char *)a1 + 128);
      *(v3 - 1) = v5;
      --v4;
    }
    while ( v4 );
LABEL_5:
    v2 = 1;
    *(_DWORD *)v3 = *(_DWORD *)a1;
  }
  return v2;
}
