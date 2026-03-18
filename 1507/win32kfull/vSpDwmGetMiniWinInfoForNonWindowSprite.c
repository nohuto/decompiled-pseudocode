/*
 * XREFs of vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C011E5C0
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     bSetDevPreviewRect @ 0x1C027B8BC (bSetDevPreviewRect.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vSpDwmGetMiniWinInfoForNonWindowSprite(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned __int64 result; // rax

  if ( a2 )
  {
    v2 = *a2;
    *(_OWORD *)(a1 + 16) = *a2;
    *(_OWORD *)a1 = v2;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  result = gdwRitInputDesktopId;
  *(_QWORD *)(a1 + 48) = gdwRitInputDesktopId;
  return result;
}
