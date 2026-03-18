/*
 * XREFs of xxxLoadSysMenu @ 0x1C0067400
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00BB39C (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0130080 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C0067564 (xxxSetMenuItemInfo.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00912C8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadMenu @ 0x1C00A99D4 (xxxClientLoadMenu.c)
 *     xxxSetMenuInfo @ 0x1C00B5AC0 (xxxSetMenuInfo.c)
 */

_DWORD *__fastcall xxxLoadSysMenu(int a1)
{
  _DWORD *Menu; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BYTE v6[16]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v8[18]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+1Fh]
  _DWORD v10[12]; // [rsp+B0h] [rbp+27h] BYREF

  RtlInitUnicodeStringOrId(v6, (unsigned __int16)a1);
  Menu = (_DWORD *)xxxClientLoadMenu(0LL, v6);
  if ( !Menu )
    return 0LL;
  v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v7;
  v7[1] = Menu;
  ++Menu[2];
  v10[0] = 40;
  v10[1] = -2147483632;
  v10[2] = 0x4000000;
  xxxSetMenuInfo(Menu, v10);
  v8[0] = 80;
  v8[1] = 128;
  v9 = 8LL;
  xxxSetMenuItemInfo((_DWORD)Menu, 61536, 0, (unsigned int)v8, 0LL);
  if ( a1 != 48 )
  {
    v9 = 11LL;
    xxxSetMenuItemInfo((_DWORD)Menu, 61472, 0, (unsigned int)v8, 0LL);
    v9 = 10LL;
    xxxSetMenuItemInfo((_DWORD)Menu, 61488, 0, (unsigned int)v8, 0LL);
    v9 = 9LL;
    xxxSetMenuItemInfo((_DWORD)Menu, 61728, 0, (unsigned int)v8, 0LL);
  }
  if ( ThreadUnlock1(v4, v3)
    && (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*Menu
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 17LL) & 1) == 0 )
  {
    return Menu;
  }
  else
  {
    return 0LL;
  }
}
