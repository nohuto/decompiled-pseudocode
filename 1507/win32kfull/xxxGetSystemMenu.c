/*
 * XREFs of xxxGetSystemMenu @ 0x1C004EA78
 * Callers:
 *     NtUserGetSystemMenu @ 0x1C004E9E0 (NtUserGetSystemMenu.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetSubMenu @ 0x1C004EB50 (_GetSubMenu.c)
 *     GetpwndNotifypMenuState @ 0x1C004ED7C (GetpwndNotifypMenuState.c)
 *     LockWndMenu @ 0x1C004F214 (LockWndMenu.c)
 *     xxxLoadSysMenu @ 0x1C004FD24 (xxxLoadSysMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C005B8D0 (DwmGetClassStyle.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     UnlockWndMenu @ 0x1C00FA890 (UnlockWndMenu.c)
 */

__int64 __fastcall xxxGetSystemMenu(__int64 a1, int a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rdi
  __int64 SysMenu; // rax
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 SubMenu; // rax
  __int64 v11; // rbx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx

  v2 = (_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(a1 + 184);
  if ( a2 )
  {
    if ( v4 )
    {
      v13 = *(_QWORD *)(v4 + 72);
      if ( v13 && (unsigned int)IsWindowDesktopComposed(v13) && (DwmGetClassStyle(*(_QWORD *)(v4 + 72)) & 0x200) != 0 )
      {
        v14 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v14);
      }
      if ( (*(_DWORD *)(v4 + 40) & 0x80u) == 0 && UnlockWndMenu(a1, v2) )
        DestroyMenu(v4);
    }
  }
  else if ( (!v4 || (*(_DWORD *)(v4 + 40) & 0x80u) != 0) && (*(_BYTE *)(a1 + 54) & 8) != 0 )
  {
    SysMenu = xxxLoadSysMenu(v4 != 0 ? 48 : 16);
    if ( !SysMenu )
      return 0LL;
    LockWndMenu(a1, v2, SysMenu);
    v7 = (__int64 *)GetpwndNotifypMenuState(a1, v6, *v2);
    if ( v7 )
      v9 = *v7;
    else
      v9 = 0LL;
    if ( v9 && (*(_DWORD *)v9 & 8) == 0 && *(_QWORD *)(v9 + 16) == a1 )
    {
      if ( (*(_DWORD *)v9 & 4) != 0 )
        v15 = v9 + 40;
      else
        v15 = v9 + 48;
      HMAssignmentLock(v15, v8);
    }
  }
  if ( !*v2 )
    return 0LL;
  SubMenu = GetSubMenu();
  v11 = SubMenu;
  if ( SubMenu )
  {
    *(_DWORD *)(SubMenu + 40) |= 0x100u;
    HMAssignmentLock(SubMenu + 72, a1);
  }
  return v11;
}
