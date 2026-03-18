/*
 * XREFs of xxxEnableMenuItem @ 0x1C0072DE0
 * Callers:
 *     xxxSetSysMenu @ 0x1C0072F20 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C014ADB0 (NtUserEnableMenuItem.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C00723EC (MNGetPopupFromMenu.c)
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C0072D9C (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     xxxRedrawTitle @ 0x1C0081B30 (xxxRedrawTitle.c)
 *     DwmGetClassStyle @ 0x1C00D2C50 (DwmGetClassStyle.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C570 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rax
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF
  struct tagMENU *v19; // [rsp+60h] [rbp+8h] BYREF

  v6 = MenuItemState((struct tagMENU *)a1, a2, a3, 3LL, &v19);
  v7 = v6;
  if ( (*(_DWORD *)(a1 + 40) & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    if ( v8 )
    {
      if ( a3 != v6 && (a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728) )
      {
        v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v18;
        v18[1] = v8;
        ++*(_DWORD *)(v8 + 8);
        xxxRedrawTitle(*(_QWORD *)(a1 + 72), 4096LL);
        if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(a1 + 72)) )
        {
          DwmGetClassStyle(*(_QWORD *)(a1 + 72));
          v17 = (void *)ReferenceDwmApiPort(v14, v13, v15, v16);
          DwmAsyncChildStyleChange(v17);
        }
        ThreadUnlock1(v12, v11);
      }
    }
  }
  if ( v19 )
  {
    v9 = MNGetPopupFromMenu((__int64)v19, 0LL);
    if ( v9 )
      xxxMNUpdateShownMenu(v9, 0LL, 1LL);
  }
  return v7;
}
