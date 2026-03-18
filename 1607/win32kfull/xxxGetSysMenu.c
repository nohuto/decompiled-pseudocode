/*
 * XREFs of xxxGetSysMenu @ 0x1C00B83A0
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C007B458 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BB4F4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01F45F8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 * Callees:
 *     xxxSetSysMenu @ 0x1C0067980 (xxxSetSysMenu.c)
 *     xxxGetSysMenuHandle @ 0x1C006F540 (xxxGetSysMenuHandle.c)
 *     MNClearCachedPopupSizes @ 0x1C00B83FC (MNClearCachedPopupSizes.c)
 *     _GetSubMenu @ 0x1C00BB474 (_GetSubMenu.c)
 */

__int64 __fastcall xxxGetSysMenu(_BYTE *a1, int a2)
{
  __int64 SysMenuHandle; // rax
  __int64 SubMenu; // rbx

  xxxSetSysMenu(a1);
  SysMenuHandle = xxxGetSysMenuHandle((__int64)a1);
  SubMenu = SysMenuHandle;
  if ( SysMenuHandle )
  {
    if ( a2 )
      SubMenu = GetSubMenu(SysMenuHandle);
    if ( SubMenu && gihmodUserApiHook >= 0 )
      MNClearCachedPopupSizes(SubMenu);
  }
  return SubMenu;
}
