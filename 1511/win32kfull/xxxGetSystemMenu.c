/*
 * XREFs of xxxGetSystemMenu @ 0x1C00CA20C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C00CA170 (NtUserGetSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     _GetSubMenu @ 0x1C00CA2E4 (_GetSubMenu.c)
 *     GetpwndNotifypMenuState @ 0x1C00CAFB0 (GetpwndNotifypMenuState.c)
 *     LockWndMenu @ 0x1C00CBF10 (LockWndMenu.c)
 *     xxxLoadSysMenu @ 0x1C00CBF78 (xxxLoadSysMenu.c)
 *     DwmGetClassStyle @ 0x1C00D2C50 (DwmGetClassStyle.c)
 *     UnlockWndMenu @ 0x1C0104018 (UnlockWndMenu.c)
 */

__int64 __fastcall xxxGetSystemMenu(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v5; // rdi
  __int64 SysMenu; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 SubMenu; // rax
  __int64 v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 *v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rbx
  void *v19; // rax
  __int64 v20; // rcx

  v3 = (_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 184);
  if ( (_DWORD)a2 )
  {
    if ( v5 )
    {
      v13 = *(_QWORD *)(v5 + 72);
      if ( v13 && (unsigned int)IsWindowDesktopComposed(v13) && (DwmGetClassStyle(*(_QWORD *)(v5 + 72)) & 0x200) != 0 )
      {
        v16 = *(__int64 **)(v5 + 72);
        if ( v16 )
          v17 = *v16;
        else
          v17 = 0LL;
        v18 = v16[19];
        v19 = (void *)ReferenceDwmApiPort(v14, a2, a3, v15);
        DwmAsyncChildStyleChange(v19, v17, -26, *(_DWORD *)(v18 + 84));
      }
      if ( (*(_DWORD *)(v5 + 40) & 0x80u) == 0 && UnlockWndMenu(a1, v3) )
        DestroyMenu((struct tagMENU *)v5);
    }
  }
  else if ( (!v5 || (*(_DWORD *)(v5 + 40) & 0x80u) != 0) && (*(_BYTE *)(a1 + 54) & 8) != 0 )
  {
    SysMenu = xxxLoadSysMenu(v5 != 0 ? 48 : 16);
    if ( !SysMenu )
      return 0LL;
    LockWndMenu(a1, v3, SysMenu);
    v8 = (__int64 *)GetpwndNotifypMenuState(a1, v7, *v3);
    if ( v8 )
      v9 = *v8;
    else
      v9 = 0LL;
    if ( v9 && (*(_DWORD *)v9 & 8) == 0 && *(_QWORD *)(v9 + 16) == a1 )
    {
      if ( (*(_DWORD *)v9 & 4) != 0 )
        v20 = v9 + 40;
      else
        v20 = v9 + 48;
      HMAssignmentLock(v20, a3);
    }
  }
  if ( !*v3 )
    return 0LL;
  SubMenu = GetSubMenu(*v3, a2, a3);
  v11 = SubMenu;
  if ( SubMenu )
  {
    *(_DWORD *)(SubMenu + 40) |= 0x100u;
    HMAssignmentLock(SubMenu + 72, a1);
  }
  return v11;
}
