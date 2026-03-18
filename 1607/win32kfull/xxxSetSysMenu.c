/*
 * XREFs of xxxSetSysMenu @ 0x1C0067980
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C0095174 (xxxTranslateAccelerator.c)
 *     xxxGetSysMenu @ 0x1C00B83A0 (xxxGetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C01F9BA4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     xxxEnableMenuItem @ 0x1C0067B88 (xxxEnableMenuItem.c)
 *     xxxGetSysMenuHandle @ 0x1C006F540 (xxxGetSysMenuHandle.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     _GetSubMenu @ 0x1C00BB474 (_GetSubMenu.c)
 *     ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C0118C28 (-_SetCloseDefault@@YAXPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C0118C4C (_SetMenuDefaultItem.c)
 *     IsSmallerThanScreen @ 0x1C014BD94 (IsSmallerThanScreen.c)
 */

__int64 __fastcall xxxSetSysMenu(_BYTE *a1)
{
  __int64 SysMenuHandle; // rax
  unsigned int v3; // ebx
  __int64 SubMenu; // rdi
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  char v10; // al
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF

  SysMenuHandle = xxxGetSysMenuHandle();
  v3 = 0;
  if ( !SysMenuHandle )
    return 1LL;
  SubMenu = GetSubMenu(SysMenuHandle);
  if ( !SubMenu )
    return 1LL;
  v5 = 0;
  v6 = 0;
  v7 = 3;
  v8 = 61536;
  v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v15;
  v15[1] = SubMenu;
  ++*(_DWORD *)(SubMenu + 8);
  if ( (a1[55] & 0x20) != 0 )
  {
    v7 = 0;
    v9 = 3;
    v6 = 3;
    v8 = 61728;
    if ( (unsigned int)IsTrayWindow(a1) )
      v5 = 3;
  }
  else
  {
    v9 = 0;
    if ( (a1[54] & 2) == 0 )
      v9 = 3;
  }
  if ( (a1[54] & 1) == 0 )
    goto LABEL_21;
  v10 = a1[55];
  if ( (v10 & 1) != 0 )
  {
    v7 = 0;
    v5 = 3;
    if ( (v10 & 0x40) == 0 && (unsigned int)IsSmallerThanScreen(a1, 0LL) )
      v5 = 0;
    v6 = 3;
LABEL_21:
    v3 = 3;
  }
  v11 = a1[54];
  if ( (v11 & 4) == 0 )
    v6 = 3;
  if ( (a1[54] & 0xC0) != 0x40 && (a1[48] & 1) == 0 || (v11 & 7) != 0 )
  {
    xxxEnableMenuItem(SubMenu, 61440LL, v6);
    xxxEnableMenuItem(SubMenu, 61472LL, v9);
    xxxEnableMenuItem(SubMenu, 61488LL, v3);
    xxxEnableMenuItem(SubMenu, 61728LL, v7);
  }
  xxxEnableMenuItem(SubMenu, 61456LL, v5);
  if ( v8 == 61536 )
    _SetCloseDefault((struct tagMENU *)SubMenu);
  else
    SetMenuDefaultItem(SubMenu, v8, 0LL);
  ThreadUnlock1(v13, v12);
  return 1LL;
}
