/*
 * XREFs of ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF10C
 * Callers:
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01FEFE0 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01FFE60 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200060 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C02009B0 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200BE4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetAltTabInfo @ 0x1C0200E70 (_GetAltTabInfo.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 * Callees:
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D2004 (safe_cast_fnid_to_PSWITCHWND.c)
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
