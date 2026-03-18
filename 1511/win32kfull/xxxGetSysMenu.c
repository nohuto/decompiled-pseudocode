/*
 * XREFs of xxxGetSysMenu @ 0x1C00C67E0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00704E0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00740E0 (xxxGetMenuBarInfo.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C6534 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01FD368 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 * Callees:
 *     xxxGetSysMenuHandle @ 0x1C0071180 (xxxGetSysMenuHandle.c)
 *     xxxSetSysMenu @ 0x1C0072F20 (xxxSetSysMenu.c)
 *     MNClearCachedPopupSizes @ 0x1C00C683C (MNClearCachedPopupSizes.c)
 *     _GetSubMenu @ 0x1C00CA2E4 (_GetSubMenu.c)
 */

__int64 __fastcall xxxGetSysMenu(_BYTE *a1, int a2)
{
  __int64 SysMenuHandle; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 SubMenu; // rbx

  xxxSetSysMenu(a1);
  SysMenuHandle = xxxGetSysMenuHandle((__int64)a1);
  SubMenu = SysMenuHandle;
  if ( SysMenuHandle )
  {
    if ( a2 )
      SubMenu = GetSubMenu(SysMenuHandle, v5, v6);
    if ( SubMenu && gihmodUserApiHook >= 0 )
      MNClearCachedPopupSizes(SubMenu);
  }
  return SubMenu;
}
