/*
 * XREFs of xxxGetSysMenuHandle @ 0x1C0094380
 * Callers:
 *     xxxMNCanClose @ 0x1C004F188 (xxxMNCanClose.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0093D50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     xxxHandleNCMouseGuys @ 0x1C02024F4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     xxxLoadSysDesktopMenu @ 0x1C0128B38 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxGetSysMenuHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 *v6; // rcx

  if ( (*(_BYTE *)(a1 + 54) & 8) == 0 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 184);
  if ( !v4 )
  {
    v6 = (__int64 *)(*(_QWORD *)(a1 + 24) + 48LL);
    v4 = *v6;
    if ( !*v6 && (*(_DWORD *)(gptiCurrent + 448LL) & 5) == 0 )
      return xxxLoadSysDesktopMenu(v6, 16LL, 0LL, a4);
  }
  return v4;
}
