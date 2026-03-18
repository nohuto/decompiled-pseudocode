/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C0118910
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     xxxGetMenuItemRect @ 0x1C0118AA8 (xxxGetMenuItemRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  __int64 v15; // rsi
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v18[3]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v20; // [rsp+70h] [rbp-48h] BYREF

  v20 = 0uLL;
  EnterCrit(1LL);
  if ( a1 && (a1 = ValidateHwnd(a1)) == 0 )
  {
    MenuItemRect = 0;
  }
  else
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v18;
    v18[1] = a1;
    if ( a1 )
      ++*(_DWORD *)(a1 + 8);
    v10 = ValidateHmenu(a2);
    if ( v10 )
    {
      v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v19;
      v19[1] = v10;
      ++*(_DWORD *)(v10 + 8);
      MenuItemRect = xxxGetMenuItemRect(a1, v10, a3, &v20);
      if ( a1 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440);
        if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
        {
          v15 = *(_QWORD *)(a1 + 16);
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(*(unsigned int *)(v15 + 576));
          if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v15 + 384)) )
            TransformRectBetweenCoordinateSpaces(&v20, &v20, 0LL, a1);
        }
      }
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_OWORD *)W32UserProbeAddress;
      *a4 = v20;
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
