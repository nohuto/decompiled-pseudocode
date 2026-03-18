/*
 * XREFs of ReleaseWallpaperSettings @ 0x14025E120
 * Callers:
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x14013D784 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseWallpaperSettings(_DWORD *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*a1)-- == 1 )
  {
    Win32FreePool(a1);
    return 1;
  }
  return v1;
}
