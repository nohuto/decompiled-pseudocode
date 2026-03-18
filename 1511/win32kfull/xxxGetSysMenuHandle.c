/*
 * XREFs of xxxGetSysMenuHandle @ 0x1C0071180
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0070B50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxSetSysMenu @ 0x1C0072F20 (xxxSetSysMenu.c)
 *     xxxGetSysMenu @ 0x1C00C67E0 (xxxGetSysMenu.c)
 *     xxxMNCanClose @ 0x1C00CB3C0 (xxxMNCanClose.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     xxxHandleNCMouseGuys @ 0x1C0202890 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     xxxLoadSysDesktopMenu @ 0x1C010FC68 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxGetSysMenuHandle(__int64 a1)
{
  __int64 v1; // r8
  __int64 *v3; // rcx

  if ( (*(_BYTE *)(a1 + 54) & 8) == 0 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 184);
  if ( !v1 )
  {
    v3 = (__int64 *)(*(_QWORD *)(a1 + 24) + 48LL);
    v1 = *v3;
    if ( !*v3 && (*(_DWORD *)(gptiCurrent + 440LL) & 5) == 0 )
      return xxxLoadSysDesktopMenu(v3, 16LL);
  }
  return v1;
}
