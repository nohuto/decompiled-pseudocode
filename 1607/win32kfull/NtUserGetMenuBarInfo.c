/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C00B7DC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _BYTE *v9; // rdx
  int MenuBarInfo; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v22[9]; // [rsp+48h] [rbp-80h] BYREF

  memset(&v22[3], 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v22;
    v22[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a4;
    if ( a4 >= W32UserProbeAddress )
      v9 = (_BYTE *)W32UserProbeAddress;
    *v9 = *v9;
    v9[47] = v9[47];
    LODWORD(v22[3]) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo((struct tagWND *)v8);
    v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 432);
    if ( (*(_BYTE *)(v15 + 224) & 1) == 0 )
    {
      v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v16, v17) + 432);
      if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15, v14, v18, v19);
        v15 = *(_DWORD *)(v8 + 352) & 0xF;
        if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v15 )
          TransformRectBetweenCoordinateSpaces((char *)&v22[3] + 4, (char *)&v22[3] + 4, 0LL, v8);
      }
    }
    if ( MenuBarInfo )
    {
      HIDWORD(v22[5]) = 0;
      HIDWORD(v22[8]) = 0;
      *(_OWORD *)a4 = *(_OWORD *)&v22[3];
      *(_OWORD *)(a4 + 16) = *(_OWORD *)&v22[5];
      *(_OWORD *)(a4 + 32) = *(_OWORD *)&v22[7];
    }
    ThreadUnlock1(v15, v14);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return MenuBarInfo;
}
