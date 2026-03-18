/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006F270
 * Callers:
 *     xxxInsertMenuItem @ 0x1C006E9E0 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00CC0DC (xxxSetMenuItemInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     DesktopAlloc @ 0x1C0072310 (DesktopAlloc.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C00724A4 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     ?FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C00724D0 (-FreeItemString@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00857B8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ?GetMenuDepth@@YAIPEAUtagMENU@@I@Z @ 0x1C00F3A4C (-GetMenuDepth@@YAIPEAUtagMENU@@I@Z.c)
 *     ?GetMenuAncestors@@YAIPEAUtagMENU@@@Z @ 0x1C01019BC (-GetMenuAncestors@@YAIPEAUtagMENU@@@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C023C524 (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
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
  void *v13; // rax
  void *v14; // r12
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
      v13 = (void *)DesktopAlloc(*((_QWORD *)a1 + 3), (unsigned int)*v12 + 2, 8LL);
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
        UserSetLastError(87);
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
        if ( MenuAncestors + v26 >= 0x19 || (v27 = (_QWORD *)DesktopAlloc(*((_QWORD *)a1 + 3), 16LL, 7LL)) == 0LL )
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
