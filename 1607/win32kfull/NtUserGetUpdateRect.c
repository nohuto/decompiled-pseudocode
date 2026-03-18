/*
 * XREFs of NtUserGetUpdateRect @ 0x1C0117290
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxGetUpdateRect @ 0x1C01173D4 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int UpdateRect; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v21[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF

  v22 = 0uLL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = v6;
  if ( v6 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    UpdateRect = xxxGetUpdateRect(
                   v6,
                   (unsigned __int64)&v22 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v13, v14) + 432);
      if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
      {
        v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v15, v16) + 432);
        if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10, v17, v18);
          v11 = *(_DWORD *)(v9 + 352) & 0xF;
          if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v11 )
            TransformRectBetweenCoordinateSpaces(&v22, &v22, 0LL, v9);
        }
      }
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_OWORD *)W32UserProbeAddress;
      *a2 = v22;
    }
    ThreadUnlock1(v11, v10);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return UpdateRect;
}
