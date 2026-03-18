/*
 * XREFs of xxxLoadSysMenu @ 0x1C00CBF78
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C010FC68 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0015710 (xxxSetMenuInfo.c)
 *     xxxClientLoadMenu @ 0x1C00807C4 (xxxClientLoadMenu.c)
 *     xxxSetMenuItemInfo @ 0x1C00CC0DC (xxxSetMenuItemInfo.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00CC1E8 (RtlInitUnicodeStringOrId.c)
 */

unsigned __int8 *__fastcall xxxLoadSysMenu(int a1)
{
  unsigned __int8 *Menu; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+30h] [rbp-59h] BYREF
  int v7[18]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v8; // [rsp+98h] [rbp+Fh]
  void *v9[2]; // [rsp+A0h] [rbp+17h] BYREF
  _DWORD v10[12]; // [rsp+B0h] [rbp+27h] BYREF

  RtlInitUnicodeStringOrId(v9, (unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, v9);
  if ( !Menu )
    return 0LL;
  v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v6;
  v6[1] = Menu;
  ++*((_DWORD *)Menu + 2);
  v10[0] = 40;
  v10[1] = -2147483632;
  v10[2] = 0x4000000;
  xxxSetMenuInfo((__int64)Menu, (__int64)v10);
  v7[0] = 80;
  v7[1] = 128;
  v8 = 8LL;
  xxxSetMenuItemInfo((int)Menu, 61536, 0, (int)v7, 0LL);
  if ( a1 != 48 )
  {
    v8 = 11LL;
    xxxSetMenuItemInfo((int)Menu, 61472, 0, (int)v7, 0LL);
    v8 = 10LL;
    xxxSetMenuItemInfo((int)Menu, 61488, 0, (int)v7, 0LL);
    v8 = 9LL;
    xxxSetMenuItemInfo((int)Menu, 61728, 0, (int)v7, 0LL);
  }
  if ( ThreadUnlock1(v4, v3)
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)Menu + gSharedInfo[1] + 17LL) & 1) == 0 )
  {
    return Menu;
  }
  else
  {
    return 0LL;
  }
}
