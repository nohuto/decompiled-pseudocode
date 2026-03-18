/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C014A270
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxGetMenuItemRect @ 0x1C014A408 (xxxGetMenuItemRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int MenuItemRect; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v23[3]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v25; // [rsp+70h] [rbp-48h] BYREF

  v25 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( a1 && (a1 = ValidateHwnd(a1)) == 0 )
  {
    MenuItemRect = 0;
  }
  else
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = a1;
    if ( a1 )
      ++*(_DWORD *)(a1 + 8);
    v10 = ValidateHmenu(a2);
    if ( v10 )
    {
      v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v24;
      v24[1] = v10;
      ++*(_DWORD *)(v10 + 8);
      MenuItemRect = xxxGetMenuItemRect(a1, v10, a3, &v25);
      if ( a1 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v15, v16) + 432);
        if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
        {
          v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v17, v18) + 432);
          if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
          {
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12, v19, v20);
            v13 = *(_DWORD *)(a1 + 352) & 0xF;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v13 )
              TransformRectBetweenCoordinateSpaces(&v25, &v25, 0LL, a1);
          }
        }
      }
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_OWORD *)W32UserProbeAddress;
      *a4 = v25;
      ThreadUnlock1(v13, v12);
    }
    else
    {
      MenuItemRect = 0;
    }
    ThreadUnlock1(v11, v10);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return MenuItemRect;
}
