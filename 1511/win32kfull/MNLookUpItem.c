/*
 * XREFs of MNLookUpItem @ 0x1C00710A8
 * Callers:
 *     xxxInsertMenuItem @ 0x1C006E9E0 (xxxInsertMenuItem.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0070B50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C0072D9C (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0075940 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     _GetMenuState @ 0x1C00C663C (_GetMenuState.c)
 *     xxxMNCanClose @ 0x1C00CB3C0 (xxxMNCanClose.c)
 *     xxxSetMenuItemInfo @ 0x1C00CC0DC (xxxSetMenuItemInfo.c)
 *     DwmGetClassStyle @ 0x1C00D2C50 (DwmGetClassStyle.c)
 *     _SetMenuDefaultItem @ 0x1C00F27DC (_SetMenuDefaultItem.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C014BEE8 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C014BF48 (-UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 */

__int64 __fastcall MNLookUpItem(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  int v5; // ecx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+50h] [rbp+8h]
  __int64 v14; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v5 = 0;
  v14 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !a1 )
    return 0LL;
  v8 = *(_DWORD *)(a1 + 52);
  if ( !v8 || a2 == -1 )
    return 0LL;
  if ( a3 )
  {
    if ( a2 < v8 )
    {
      result = *(_QWORD *)(a1 + 80) + 152LL * a2;
      if ( a4 )
        *a4 = a1;
      return result;
    }
    return 0LL;
  }
  v9 = *(_QWORD *)(a1 + 80);
  v13 = 0;
  if ( v8 <= 0 )
    return 0LL;
  do
  {
    v10 = *(_QWORD *)(v9 + 16);
    if ( v10 )
    {
      if ( *(_DWORD *)(v9 + 8) == a2 )
      {
        v14 = a1;
        v12 = v9;
      }
      result = MNLookUpItem(v10, a2, 0LL, a4);
      if ( result )
        return result;
      v5 = v13;
    }
    else if ( *(_DWORD *)(v9 + 8) == a2 )
    {
      if ( a4 )
        *a4 = a1;
      return v9;
    }
    ++v5;
    v9 += 152LL;
    v13 = v5;
  }
  while ( v5 < *(_DWORD *)(a1 + 52) );
  if ( !v14 )
    return 0LL;
  if ( a4 )
    *a4 = v14;
  return v12;
}
