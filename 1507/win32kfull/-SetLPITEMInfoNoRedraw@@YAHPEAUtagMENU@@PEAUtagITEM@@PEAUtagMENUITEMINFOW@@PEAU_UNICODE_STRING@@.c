/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00557DC
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C0052CB8 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C00551A4 (xxxInsertMenuItem.c)
 * Callees:
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C0054F70 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     DesktopAlloc @ 0x1C0055B70 (DesktopAlloc.c)
 *     ?GetMenuAncestors@@YAIPEAUtagMENU@@@Z @ 0x1C0055BA8 (-GetMenuAncestors@@YAIPEAUtagMENU@@@Z.c)
 *     ?GetMenuDepth@@YAIPEAUtagMENU@@I@Z @ 0x1C0055BE0 (-GetMenuDepth@@YAIPEAUtagMENU@@I@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C005BA48 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C023C354 (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
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
  __int64 v11; // rcx
  PVOID Heap; // r12
  int v13; // esi
  void *v15; // r8
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  struct tagMENU *Menu; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  struct tagMENU *v22; // rax
  int v23; // r12d
  unsigned int MenuAncestors; // eax
  int v25; // r8d
  _QWORD *v26; // rax

  v9 = 0;
  v10 = 0;
  *a5 = 0;
  if ( gihmodUserApiHook >= 0 && (*((_DWORD *)a1 + 10) & 0x800) != 0 )
    *((_DWORD *)a2 + 28) = -1;
  if ( (*((_DWORD *)a3 + 1) & 0x100) != 0 )
  {
    *(_DWORD *)a2 &= 0xFFFC949B;
    *(_DWORD *)a2 |= *((_DWORD *)a3 + 2);
    if ( (*((_DWORD *)a3 + 2) & 0x800) != 0 )
      *((_DWORD *)a2 + 1) |= 3u;
    v9 = 1;
    v10 = *((_DWORD *)a3 + 2) & 0x100;
  }
  if ( (*((_DWORD *)a3 + 1) & 0x40) != 0 )
  {
    if ( a4->Buffer )
    {
      v11 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(v11 + 32) & 8) != 0 )
        return 0LL;
      Heap = RtlAllocateHeap(*(PVOID *)(v11 + 120), 0, (unsigned int)a4->Length + 2);
      if ( !Heap && (*gpsi & 0x100) != 0 )
      {
        *gpsi &= ~0x100u;
        UserLogError(2147483891LL);
      }
      if ( !Heap )
        return 0LL;
      memmove(Heap, a4->Buffer, a4->Length);
      v13 = a4->Length >> 1;
    }
    else
    {
      v13 = 0;
      Heap = 0LL;
    }
    v15 = (void *)*((_QWORD *)a2 + 5);
    if ( v15 )
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 120LL), 0, v15);
    *((_DWORD *)a2 + 12) = v13;
    *((_QWORD *)a2 + 5) = Heap;
    ++*((_QWORD *)a2 + 7);
    v9 = 1;
    v10 = 1;
  }
  if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
  {
    *((_QWORD *)a2 + 13) = 0LL;
    v16 = *((_QWORD *)a3 + 9);
    *((_QWORD *)a2 + 13) = v16;
    v9 = 1;
    v10 = 1;
    *((_DWORD *)a2 + 28) = -1;
    if ( (unsigned __int64)(v16 - 1) > 0xA )
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
    v17 = *((_DWORD *)a3 + 3) | *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) = v17;
    if ( (*(_DWORD *)a2 & 0x800) != 0 )
      *((_DWORD *)a2 + 1) = v17 | 3;
    if ( (*((_DWORD *)a3 + 3) & 0x1000) != 0 )
    {
      v18 = *((_DWORD *)a1 + 10);
      if ( (v18 & 0x400) != 0 )
      {
        UserSetLastError(87LL);
        return 0LL;
      }
      *((_DWORD *)a1 + 10) = v18 | 0x400;
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
  if ( (*((_DWORD *)a3 + 1) & 4) == 0 )
    goto LABEL_56;
  Menu = 0LL;
  v20 = *((_QWORD *)a3 + 3);
  if ( v20 )
    Menu = (struct tagMENU *)ValidateHmenu(v20);
  v21 = (_QWORD *)((char *)a2 + 16);
  v22 = (struct tagMENU *)*((_QWORD *)a2 + 2);
  if ( v22 == Menu )
    goto LABEL_56;
  if ( v22 )
  {
    RemoveParentMenu(a1, (struct tagMENU **)a2 + 2);
    DestroyMenu(*v21);
  }
  if ( !Menu )
  {
    UnlockSubMenu(a1, (struct tagMENU **)a2 + 2);
    goto LABEL_55;
  }
  v23 = 0;
  if ( Menu == a1 )
  {
    Menu = InternalCreateMenu(0);
    if ( Menu )
    {
      v23 = 1;
      goto LABEL_49;
    }
    return 0LL;
  }
LABEL_49:
  HMAssignmentLock((char *)a2 + 16, Menu);
  *(_DWORD *)(*v21 + 40LL) |= 1u;
  GetMenuDepth(Menu, 0x19u);
  MenuAncestors = GetMenuAncestors(a1);
  if ( MenuAncestors + v25 >= 0x19 || (v26 = (_QWORD *)DesktopAlloc(*((_QWORD *)a1 + 3), 16LL, 7LL)) == 0LL )
  {
    *(_DWORD *)(*v21 + 40LL) &= ~1u;
    HMAssignmentUnlock((char *)a2 + 16);
    if ( v23 )
      DestroyMenu(Menu);
    return 0LL;
  }
  v26[1] = a1;
  *v26 = *((_QWORD *)Menu + 11);
  *((_QWORD *)Menu + 11) = v26;
LABEL_55:
  v10 = 1;
LABEL_56:
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
