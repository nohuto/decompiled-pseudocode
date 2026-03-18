/*
 * XREFs of xxxEnableMenuItem @ 0x1C0067B88
 * Callers:
 *     xxxSetSysMenu @ 0x1C0067980 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C0151030 (NtUserEnableMenuItem.c)
 * Callees:
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C0067B44 (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C006B218 (MNGetPopupFromMenu.c)
 *     DwmGetClassStyle @ 0x1C0093A88 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     xxxRedrawTitle @ 0x1C00A0C90 (xxxRedrawTitle.c)
 *     xxxMNUpdateShownMenu @ 0x1C0233F08 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rbx
  struct tagMENU *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD v17[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-30h] BYREF
  struct tagMENU *v19; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  v6 = MenuItemState((struct tagMENU *)a1, a2, a3, 3LL, &v19);
  v7 = v6;
  if ( (*(_DWORD *)(a1 + 40) & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    if ( v8 )
    {
      if ( a3 != v6 && (v4 == 61440 || v4 == 61456 || v4 == 61472 || v4 == 61488 || v4 == 61536 || v4 == 61728) )
      {
        v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v17;
        v17[1] = v8;
        ++*(_DWORD *)(v8 + 8);
        v9 = v19;
        v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v18;
        v18[1] = v9;
        if ( v9 )
          ++*((_DWORD *)v9 + 2);
        xxxRedrawTitle(*(_QWORD *)(a1 + 72), 4096LL);
        if ( v4 == 61536 && (unsigned int)IsWindowDesktopComposed(v8) )
        {
          DwmGetClassStyle(v8);
          v12 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v12);
        }
        v19 = (struct tagMENU *)ThreadUnlock1(v11, v10);
        ThreadUnlock1(v14, v13);
      }
    }
  }
  if ( v19 )
  {
    v15 = MNGetPopupFromMenu(v19, 0LL);
    if ( v15 )
      xxxMNUpdateShownMenu(v15, 0LL, 1LL);
  }
  return v7;
}
