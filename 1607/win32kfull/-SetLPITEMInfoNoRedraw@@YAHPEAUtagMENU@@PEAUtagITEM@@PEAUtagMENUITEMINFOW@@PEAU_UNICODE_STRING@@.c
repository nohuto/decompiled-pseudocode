/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C0067564 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C006B448 (xxxInsertMenuItem.c)
 * Callees:
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C006AF48 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     ?FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C006AF74 (-FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     DesktopAlloc @ 0x1C006B8F0 (DesktopAlloc.c)
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetMenuDepth@@YAIPEAUtagMENU@@I@Z @ 0x1C0113750 (-GetMenuDepth@@YAIPEAUtagMENU@@I@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C01185F8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ?GetMenuAncestors@@YAIPEAUtagMENU@@@Z @ 0x1C0121EBC (-GetMenuAncestors@@YAIPEAUtagMENU@@@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C0233EC4 (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(
        struct tagMENU *a1,
        struct tagITEM *a2,
        struct tagMENUITEMINFOW *a3,
        struct _UNICODE_STRING *a4,
        int *a5)
{
  int v9; // r13d
  int v10; // r12d
  __int64 v11; // r8
  unsigned __int16 *v12; // r9
  PVOID v13; // rax
  PVOID v14; // r12
  int v16; // r14d
  __int64 v17; // rax
  int v18; // ecx
  int v19; // eax
  struct tagMENU *Menu; // r14
  __int64 v21; // rcx
  struct tagMENU **v22; // rdi
  struct tagMENU *v23; // rax
  int v24; // r12d
  unsigned int MenuAncestors; // eax
  int v26; // r8d
  _QWORD *v27; // rax

  v9 = 0;
  v10 = 0;
  *a5 = 0;
  if ( (unsigned int)MNIsUAHMenu(a1) )
    *((_DWORD *)a2 + 28) = -1;
  if ( (*(_DWORD *)(v11 + 4) & 0x100) != 0 )
  {
    *(_DWORD *)a2 &= 0xFFFC949B;
    *(_DWORD *)a2 |= *(_DWORD *)(v11 + 8);
    if ( (*(_DWORD *)(v11 + 8) & 0x800) != 0 )
      *((_DWORD *)a2 + 1) |= 3u;
    v9 = 1;
    v10 = *(_DWORD *)(v11 + 8) & 0x100;
  }
  if ( (*(_DWORD *)(v11 + 4) & 0x40) != 0 )
  {
    if ( *((_QWORD *)v12 + 1) )
    {
      v13 = DesktopAlloc(*((_QWORD *)a1 + 3), (unsigned int)*v12 + 2, 8);
      v14 = v13;
      if ( !v13 )
        return 0LL;
      memmove(v13, a4->Buffer, a4->Length);
      v16 = a4->Length >> 1;
    }
    else
    {
      v16 = 0;
      v14 = 0LL;
    }
    FreeItemString(a1, a2);
    *((_DWORD *)a2 + 12) = v16;
    *((_QWORD *)a2 + 5) = v14;
    ++*((_QWORD *)a2 + 7);
    v9 = 1;
    v10 = 1;
  }
  if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
  {
    *((_QWORD *)a2 + 13) = 0LL;
    v17 = *((_QWORD *)a3 + 9);
    *((_QWORD *)a2 + 13) = v17;
    v9 = 1;
    v10 = 1;
    *((_DWORD *)a2 + 28) = -1;
    if ( (unsigned __int64)(v17 - 1) > 0xA )
      *((_DWORD *)a2 + 1) &= ~0x20000000u;
    else
      *((_DWORD *)a2 + 1) |= 0x20000000u;
  }
  if ( (*((_DWORD *)a3 + 1) & 2) != 0 )
    *((_DWORD *)a2 + 2) = *((_DWORD *)a3 + 4);
  if ( (*((_DWORD *)a3 + 1) & 0x20) != 0 )
    *((_QWORD *)a2 + 8) = *((_QWORD *)a3 + 6);
  if ( (*((_DWORD *)a3 + 1) & 1) != 0 )
  {
    *((_DWORD *)a2 + 1) &= 0xFFFFFFF4;
    v18 = *((_DWORD *)a2 + 1) | *((_DWORD *)a3 + 3);
    *((_DWORD *)a2 + 1) = v18;
    if ( (*(_DWORD *)a2 & 0x800) != 0 )
      *((_DWORD *)a2 + 1) = v18 | 3;
    if ( (*((_DWORD *)a3 + 3) & 0x1000) != 0 )
    {
      v19 = *((_DWORD *)a1 + 10);
      if ( (v19 & 0x400) != 0 )
      {
        UserSetLastError(87LL);
        return 0LL;
      }
      *((_DWORD *)a1 + 10) = v19 | 0x400;
    }
    v9 = 1;
    v10 = 1;
  }
  if ( (*((_DWORD *)a3 + 1) & 8) != 0 )
  {
    *((_QWORD *)a2 + 3) = *((_QWORD *)a3 + 4);
    *((_QWORD *)a2 + 4) = *((_QWORD *)a3 + 5);
    v10 = 1;
  }
  if ( (*((_DWORD *)a3 + 1) & 4) != 0 )
  {
    Menu = 0LL;
    v21 = *((_QWORD *)a3 + 3);
    if ( v21 )
      Menu = (struct tagMENU *)ValidateHmenu(v21);
    v22 = (struct tagMENU **)((char *)a2 + 16);
    v23 = (struct tagMENU *)*((_QWORD *)a2 + 2);
    if ( v23 != Menu )
    {
      if ( v23 )
      {
        RemoveParentMenu(a1, (struct tagMENU **)a2 + 2);
        DestroyMenu(*v22);
      }
      if ( Menu )
      {
        v24 = 0;
        if ( Menu == a1 )
        {
          Menu = InternalCreateMenu(0);
          if ( !Menu )
            return 0LL;
          v24 = 1;
        }
        HMAssignmentLock((char *)a2 + 16, Menu);
        *((_DWORD *)*v22 + 10) |= 1u;
        GetMenuDepth(Menu, 0x19u);
        MenuAncestors = GetMenuAncestors(a1);
        if ( MenuAncestors + v26 >= 0x19 || (v27 = DesktopAlloc(*((_QWORD *)a1 + 3), 0x10u, 7)) == 0LL )
        {
          *((_DWORD *)*v22 + 10) &= ~1u;
          HMAssignmentUnlock((char *)a2 + 16);
          if ( v24 )
            DestroyMenu(Menu);
          return 0LL;
        }
        v27[1] = a1;
        *v27 = *((_QWORD *)Menu + 11);
        *((_QWORD *)Menu + 11) = v27;
      }
      else
      {
        UnlockSubMenu(a1, (struct tagMENU **)a2 + 2);
      }
      v10 = 1;
    }
  }
  if ( (*(_DWORD *)a2 & 0x900) == 0 && !*((_QWORD *)a2 + 5) && !*((_QWORD *)a2 + 13) )
  {
    *(_DWORD *)a2 = 2048;
    *((_DWORD *)a2 + 1) |= 3u;
  }
  if ( v9 )
  {
    *((_DWORD *)a2 + 22) = 0;
    *(_QWORD *)((char *)a2 + 92) = 0x7FFFFFFFLL;
    *((_QWORD *)a1 + 7) = 0LL;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}
