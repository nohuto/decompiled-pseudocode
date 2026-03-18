/*
 * XREFs of xxxGetSysMenuHandle @ 0x1C006F540
 * Callers:
 *     xxxSetSysMenu @ 0x1C0067980 (xxxSetSysMenu.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxMNCanClose @ 0x1C00AEA0C (xxxMNCanClose.c)
 *     xxxGetSysMenu @ 0x1C00B83A0 (xxxGetSysMenu.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxHandleNCMouseGuys @ 0x1C01F9BA4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     xxxLoadSysDesktopMenu @ 0x1C0130080 (xxxLoadSysDesktopMenu.c)
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
