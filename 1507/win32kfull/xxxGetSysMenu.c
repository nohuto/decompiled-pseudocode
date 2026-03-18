/*
 * XREFs of xxxGetSysMenu @ 0x1C0107D14
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0064790 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00856C0 (xxxGetMenuBarInfo.c)
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0107B34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01FCEC8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 * Callees:
 *     _GetSubMenu @ 0x1C004EB50 (_GetSubMenu.c)
 *     xxxGetSysMenuHandle @ 0x1C0094380 (xxxGetSysMenuHandle.c)
 *     MNClearCachedPopupSizes @ 0x1C0107D70 (MNClearCachedPopupSizes.c)
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 */

__int64 __fastcall xxxGetSysMenu(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 SysMenuHandle; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 SubMenu; // rbx

  v4 = a2;
  xxxSetSysMenu(a1, a2, a3, a4);
  SysMenuHandle = xxxGetSysMenuHandle(a1, v6, v7, v8);
  SubMenu = SysMenuHandle;
  if ( SysMenuHandle )
  {
    if ( v4 )
      SubMenu = GetSubMenu(SysMenuHandle);
    if ( SubMenu && gihmodUserApiHook >= 0 )
      MNClearCachedPopupSizes(SubMenu, v10, v11, v12);
  }
  return SubMenu;
}
