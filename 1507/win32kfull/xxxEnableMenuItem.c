/*
 * XREFs of xxxEnableMenuItem @ 0x1C0108034
 * Callers:
 *     NtUserEnableMenuItem @ 0x1C0107C70 (NtUserEnableMenuItem.c)
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C0047C70 (xxxRedrawTitle.c)
 *     MNGetPopupFromMenu @ 0x1C005573C (MNGetPopupFromMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C005B8D0 (DwmGetClassStyle.c)
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C01081B0 (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C3A0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  struct tagMENU *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rdi
  int ClassStyle; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD v24[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-20h] BYREF
  struct tagMENU *v26; // [rsp+70h] [rbp+8h] BYREF

  v6 = MenuItemState((struct tagMENU *)a1, a2, a3, 3u, &v26);
  v7 = v6;
  if ( (*(_DWORD *)(a1 + 40) & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    if ( v8 )
    {
      if ( a3 != v6 && (a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728) )
      {
        v24[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v24;
        v24[1] = v8;
        ++*(_DWORD *)(v8 + 8);
        v9 = v26;
        v25[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v25;
        v25[1] = v9;
        if ( v9 )
          ++*((_DWORD *)v9 + 2);
        xxxRedrawTitle(*(_QWORD **)(a1 + 72), 0x1000u);
        if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(a1 + 72)) )
        {
          v12 = *(__int64 **)(a1 + 72);
          if ( v12 )
            v13 = *v12;
          else
            v13 = 0LL;
          ClassStyle = DwmGetClassStyle((__int64)v12);
          v19 = (void *)ReferenceDwmApiPort(v16, v15, v17, v18);
          DwmAsyncChildStyleChange(v19, v13, -26, ClassStyle);
        }
        v26 = (struct tagMENU *)ThreadUnlock1(v11, v10);
        ThreadUnlock1(v21, v20);
      }
    }
  }
  if ( v26 )
  {
    v22 = MNGetPopupFromMenu((__int64)v26, 0LL);
    if ( v22 )
      xxxMNUpdateShownMenu(v22, 0LL, 1LL);
  }
  return v7;
}
