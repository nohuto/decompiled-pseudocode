/*
 * XREFs of ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00F8308
 * Callers:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009921C (hsurfCreateCompatibleSurface.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00F81D4 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bRemoteDriverNeedsDeviceBitmaps(struct PDEVOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 3472LL)
    && (*(_DWORD *)(*(_QWORD *)a1 + 2152LL) & 0x400) != 0
    && (!g_pDwmState || !(unsigned int)UserIsRemoteAndNotDisconnectConnection()) )
  {
    return 1;
  }
  return v1;
}
