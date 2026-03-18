/*
 * XREFs of xxxSetSysMenu @ 0x1C0107E60
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C00414D0 (xxxTranslateAccelerator.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C02024F4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     _GetSubMenu @ 0x1C004EB50 (_GetSubMenu.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxGetSysMenuHandle @ 0x1C0094380 (xxxGetSysMenuHandle.c)
 *     _SetMenuDefaultItem @ 0x1C00EDA84 (_SetMenuDefaultItem.c)
 *     xxxEnableMenuItem @ 0x1C0108034 (xxxEnableMenuItem.c)
 *     ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C01081F4 (-_SetCloseDefault@@YAXPEAUtagMENU@@@Z.c)
 *     IsSmallerThanScreen @ 0x1C0108218 (IsSmallerThanScreen.c)
 */

__int64 __fastcall xxxSetSysMenu(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 SysMenuHandle; // rax
  __int64 SubMenu; // rbx
  unsigned int v7; // r8d
  int v8; // edx
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  unsigned int v13; // ebp
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v18; // al
  int v19; // eax
  _QWORD v20[4]; // [rsp+20h] [rbp-48h] BYREF

  SysMenuHandle = xxxGetSysMenuHandle((__int64)a1, a2, a3, a4);
  if ( !SysMenuHandle )
    return 1LL;
  SubMenu = GetSubMenu(SysMenuHandle);
  if ( !SubMenu )
    return 1LL;
  v8 = v7 + 3;
  v9 = v7;
  v10 = v7;
  v11 = v7;
  v12 = v7 + 3;
  v13 = 61536;
  v20[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v20;
  v20[1] = SubMenu;
  ++*(_DWORD *)(SubMenu + 8);
  if ( (a1[55] & 0x20) != 0 )
  {
    v12 = v7;
    v14 = v7 + 3;
    v11 = v7 + 3;
    v13 = 61728;
    v19 = IsTrayWindow((__int64)a1);
    v7 = 0;
    v8 = v11;
    if ( v19 )
      v9 = v11;
  }
  else
  {
    v14 = v7;
    if ( (a1[54] & 2) == 0 )
      v14 = v7 + 3;
  }
  if ( (a1[54] & 1) != 0 )
  {
    v18 = a1[55];
    if ( (v18 & 1) == 0 )
      goto LABEL_8;
    v12 = v7;
    v9 = v8;
    if ( (v18 & 0x40) == 0 )
    {
      if ( (unsigned int)IsSmallerThanScreen(a1, 0LL) )
        v9 = 0;
      v8 = 3;
    }
    v11 = v8;
  }
  v10 = v8;
LABEL_8:
  if ( (a1[54] & 4) == 0 )
    v11 = v8;
  if ( (a1[54] & 0xC0) != 0x40 && (a1[48] & 1) == 0 || (a1[54] & 7) != 0 )
  {
    xxxEnableMenuItem(SubMenu, 61440LL, v11);
    xxxEnableMenuItem(SubMenu, 61472LL, v14);
    xxxEnableMenuItem(SubMenu, 61488LL, v10);
    xxxEnableMenuItem(SubMenu, 61728LL, v12);
  }
  xxxEnableMenuItem(SubMenu, 61456LL, v9);
  if ( v13 == 61536 )
    _SetCloseDefault((struct tagMENU *)SubMenu);
  else
    SetMenuDefaultItem(SubMenu, v13, 0);
  ThreadUnlock1(v16, v15);
  return 1LL;
}
