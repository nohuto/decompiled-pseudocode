/*
 * XREFs of ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF7BC
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01FF3E0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C0200250 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C0200D50 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200F84 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetAltTabInfo @ 0x1C0201210 (_GetAltTabInfo.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 * Callees:
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D3A54 (safe_cast_fnid_to_PSWITCHWND.c)
 */

struct tagSwitchWndInfo *__fastcall Getpswi(struct tagWND *a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  struct tagSwitchWndInfo *result; // rax

  v2 = safe_cast_fnid_to_PSWITCHWND((__int64)a1);
  result = 0LL;
  if ( v2 && *(int *)(v1 + 232) + 376LL == *(unsigned __int16 *)(gpsi + 340LL) && *(char *)(v1 + 43) >= 0 )
    return *(struct tagSwitchWndInfo **)(v2 + 376);
  return result;
}
