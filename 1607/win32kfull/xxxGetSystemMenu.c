/*
 * XREFs of xxxGetSystemMenu @ 0x1C00BB39C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C00BB300 (NtUserGetSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x1C0067400 (xxxLoadSysMenu.c)
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     DwmGetClassStyle @ 0x1C0093A88 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     GetpwndNotifypMenuState @ 0x1C00AD4E0 (GetpwndNotifypMenuState.c)
 *     _GetSubMenu @ 0x1C00BB474 (_GetSubMenu.c)
 *     LockWndMenu @ 0x1C00BB48C (LockWndMenu.c)
 *     UnlockWndMenu @ 0x1C01270C8 (UnlockWndMenu.c)
 */

__int64 __fastcall xxxGetSystemMenu(__int64 a1, int a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rdi
  _DWORD *SysMenu; // rax
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 SubMenu; // rax
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rbx
  void *v20; // rax
  __int64 v21; // rcx

  v2 = (_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(a1 + 184);
  if ( a2 )
  {
    if ( v4 )
    {
      v12 = *(_QWORD *)(v4 + 72);
      if ( v12 && (unsigned int)IsWindowDesktopComposed(v12) && (DwmGetClassStyle(*(_QWORD *)(v4 + 72)) & 0x200) != 0 )
      {
        v17 = *(__int64 **)(v4 + 72);
        if ( v17 )
          v18 = *v17;
        else
          v18 = 0LL;
        v19 = v17[19];
        v20 = (void *)ReferenceDwmApiPort(v14, v13, v15, v16);
        DwmAsyncChildStyleChange(v20, v18, -26, *(_DWORD *)(v19 + 84));
      }
      if ( (*(_DWORD *)(v4 + 40) & 0x80u) == 0 && UnlockWndMenu(a1) )
        DestroyMenu((struct tagMENU *)v4);
    }
  }
  else if ( (!v4 || (*(_DWORD *)(v4 + 40) & 0x80u) != 0) && (*(_BYTE *)(a1 + 54) & 8) != 0 )
  {
    SysMenu = xxxLoadSysMenu(v4 != 0 ? 48 : 16);
    if ( !SysMenu )
      return 0LL;
    LockWndMenu(a1, v2, SysMenu);
    v6 = GetpwndNotifypMenuState(a1);
    if ( v6 )
      v8 = *v6;
    else
      v8 = 0LL;
    if ( v8 && (*(_DWORD *)v8 & 8) == 0 && *(_QWORD *)(v8 + 16) == a1 )
    {
      if ( (*(_DWORD *)v8 & 4) != 0 )
        v21 = v8 + 40;
      else
        v21 = v8 + 48;
      HMAssignmentLock(v21, v7);
    }
  }
  if ( !*v2 )
    return 0LL;
  SubMenu = GetSubMenu(*v2);
  v10 = SubMenu;
  if ( SubMenu )
  {
    *(_DWORD *)(SubMenu + 40) |= 0x100u;
    HMAssignmentLock(SubMenu + 72, a1);
  }
  return v10;
}
