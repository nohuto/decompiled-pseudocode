/*
 * XREFs of xxxSetSysMenu @ 0x1C0072F20
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C0092F94 (xxxTranslateAccelerator.c)
 *     xxxGetSysMenu @ 0x1C00C67E0 (xxxGetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C0202890 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     xxxGetSysMenuHandle @ 0x1C0071180 (xxxGetSysMenuHandle.c)
 *     xxxEnableMenuItem @ 0x1C0072DE0 (xxxEnableMenuItem.c)
 *     _GetSubMenu @ 0x1C00CA2E4 (_GetSubMenu.c)
 *     ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C00F27B8 (-_SetCloseDefault@@YAXPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00F27DC (_SetMenuDefaultItem.c)
 *     IsSmallerThanScreen @ 0x1C01476B0 (IsSmallerThanScreen.c)
 */

__int64 __fastcall xxxSetSysMenu(_BYTE *a1)
{
  __int64 SysMenuHandle; // rax
  __int64 v3; // rdx
  __int64 SubMenu; // rbx
  int v5; // r8d
  int v6; // edx
  int v7; // esi
  int v8; // r12d
  int v9; // r14d
  int v10; // r13d
  unsigned int v11; // ebp
  int v12; // r15d
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // eax
  _QWORD v18[4]; // [rsp+20h] [rbp-48h] BYREF

  SysMenuHandle = xxxGetSysMenuHandle((__int64)a1);
  if ( !SysMenuHandle )
    return 1LL;
  SubMenu = GetSubMenu(SysMenuHandle, v3, 0LL);
  if ( !SubMenu )
    return 1LL;
  v6 = v5 + 3;
  v7 = v5;
  v8 = v5;
  v9 = v5;
  v10 = v5 + 3;
  v11 = 61536;
  v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v18;
  v18[1] = SubMenu;
  ++*(_DWORD *)(SubMenu + 8);
  if ( (a1[55] & 0x20) != 0 )
  {
    v10 = v5;
    v12 = v5 + 3;
    v9 = v5 + 3;
    v11 = 61728;
    v17 = IsTrayWindow((__int64)a1);
    v5 = 0;
    v6 = v9;
    if ( v17 )
      v7 = v9;
  }
  else
  {
    v12 = v5;
    if ( (a1[54] & 2) == 0 )
      v12 = v5 + 3;
  }
  if ( (a1[54] & 1) == 0 )
    goto LABEL_13;
  v13 = a1[55];
  if ( (v13 & 1) != 0 )
  {
    v10 = v5;
    v7 = v6;
    if ( (v13 & 0x40) == 0 )
    {
      if ( (unsigned int)IsSmallerThanScreen(a1, 0LL) )
        v7 = 0;
      v6 = 3;
    }
    v9 = v6;
LABEL_13:
    v8 = v6;
  }
  if ( (a1[54] & 4) == 0 )
    v9 = v6;
  if ( (a1[54] & 0xC0) != 0x40 && (a1[48] & 1) == 0 || (a1[54] & 7) != 0 )
  {
    xxxEnableMenuItem(SubMenu, 0xF000u, v9);
    xxxEnableMenuItem(SubMenu, 0xF020u, v12);
    xxxEnableMenuItem(SubMenu, 0xF030u, v8);
    xxxEnableMenuItem(SubMenu, 0xF120u, v10);
  }
  xxxEnableMenuItem(SubMenu, 0xF010u, v7);
  if ( v11 == 61536 )
    _SetCloseDefault((struct tagMENU *)SubMenu);
  else
    SetMenuDefaultItem(SubMenu, v11, 0LL);
  ThreadUnlock1(v15, v14);
  return 1LL;
}
