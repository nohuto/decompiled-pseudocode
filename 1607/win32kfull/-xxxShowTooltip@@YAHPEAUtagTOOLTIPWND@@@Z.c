/*
 * XREFs of ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014FAB0
 * Callers:
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014FA28 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     wcsncpycch @ 0x1C00E9E1C (wcsncpycch.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014FB78 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxShowTooltip(struct tagTOOLTIPWND *a1)
{
  _WORD *v1; // rax
  int v2; // ebx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v7; // rdx
  struct tagSIZE v8; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v9; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_WORD *)*((_QWORD *)a1 + 50);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( v1 == gszCAPTIONTOOLTIP )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 176LL);
    if ( !v7 || (*(_BYTE *)(v7 + 47) & 8) == 0 || !*(_DWORD *)(v7 + 216) )
      return 0LL;
    wcsncpycch(gszCAPTIONTOOLTIP, *(_QWORD *)(v7 + 224), 99);
    word_1C032DCF6 = 0;
  }
  if ( !(unsigned int)xxxTooltipGetSizeAndPosition(a1, &v8, &v9) )
    return 0LL;
  v4 = 16464;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) == 0x80000800 )
    v4 = 16472;
  v5 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 176LL);
  if ( v5 )
    v2 = *(_DWORD *)(v5 + 304);
  xxxSetWindowPosAndBand(a1, 0, v9.x, v9.y, v8.cx, v8.cy, v4, v2);
  return 1LL;
}
