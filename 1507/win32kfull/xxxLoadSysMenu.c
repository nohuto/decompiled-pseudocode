/*
 * XREFs of xxxLoadSysMenu @ 0x1C004FD24
 * Callers:
 *     xxxGetSystemMenu @ 0x1C004EA78 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0128B38 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C004F27C (RtlInitUnicodeStringOrId.c)
 *     xxxSetMenuItemInfo @ 0x1C0052CB8 (xxxSetMenuItemInfo.c)
 *     xxxSetMenuInfo @ 0x1C0052DC4 (xxxSetMenuInfo.c)
 *     xxxClientLoadMenu @ 0x1C007E4F8 (xxxClientLoadMenu.c)
 */

_DWORD *__fastcall xxxLoadSysMenu(int a1)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+30h] [rbp-59h] BYREF
  int v7[18]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v8; // [rsp+98h] [rbp+Fh]
  struct _UNICODE_STRING v9; // [rsp+A0h] [rbp+17h] BYREF
  _DWORD v10[12]; // [rsp+B0h] [rbp+27h] BYREF

  RtlInitUnicodeStringOrId(&v9, (WCHAR *)(unsigned __int16)a1);
  v2 = (_DWORD *)xxxClientLoadMenu(0LL, &v9);
  if ( !v2 )
    return 0LL;
  v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v6;
  v6[1] = v2;
  ++v2[2];
  v10[0] = 40;
  v10[1] = -2147483632;
  v10[2] = 0x4000000;
  xxxSetMenuInfo(v2, v10);
  v7[0] = 80;
  v7[1] = 128;
  v8 = 8LL;
  xxxSetMenuItemInfo((int)v2, 61536, 0, (int)v7, 0LL);
  if ( a1 != 48 )
  {
    v8 = 11LL;
    xxxSetMenuItemInfo((int)v2, 61472, 0, (int)v7, 0LL);
    v8 = 10LL;
    xxxSetMenuItemInfo((int)v2, 61488, 0, (int)v7, 0LL);
    v8 = 9LL;
    xxxSetMenuItemInfo((int)v2, 61728, 0, (int)v7, 0LL);
  }
  if ( ThreadUnlock1(v4, v3)
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v2 + gSharedInfo[1] + 17LL) & 1) == 0 )
  {
    return v2;
  }
  else
  {
    return 0LL;
  }
}
