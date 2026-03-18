/*
 * XREFs of ReleaseWallpaperSettings @ 0x1C0135A90
 * Callers:
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C012E748 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseWallpaperSettings(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*a1)-- == 1 )
  {
    Win32FreePool(a1, a2, a3);
    return 1LL;
  }
  return result;
}
