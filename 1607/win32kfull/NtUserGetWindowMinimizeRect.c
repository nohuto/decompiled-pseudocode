/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C0120C50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ParkIcon @ 0x1C00B2AE0 (ParkIcon.c)
 *     xxxSendMinRectMessages @ 0x1C0120D8C (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 Prop; // rax
  int SystemMetricsForWindow; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v23[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-28h] BYREF

  v24 = 0uLL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v7 = v4;
  if ( v4 && (v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v4) )
      {
        v9 = xxxSendMinRectMessages(v7, &v24);
      }
      else
      {
        Prop = GetProp(v7, (unsigned __int16)atomCheckpointProp, 1LL);
        if ( Prop && (*(_DWORD *)(Prop + 32) & 8) != 0 )
          *(_QWORD *)&v24 = *(_QWORD *)(Prop + 16);
        else
          ParkIcon(v7, (unsigned int *)&v24);
        SystemMetricsForWindow = GetSystemMetricsForWindow(v7, 0x39u);
        DWORD2(v24) = v24 + SystemMetricsForWindow;
        v19 = GetSystemMetricsForWindow(v7, 0x3Au);
        HIDWORD(v24) = DWORD1(v24) + v19;
        v9 = 1;
      }
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11) + 432);
      if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 432);
        if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12, v20, v21);
          v13 = *(_DWORD *)(v7 + 352) & 0xF;
          if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v13 )
            TransformRectBetweenCoordinateSpaces(&v24, &v24, 0LL, v7);
        }
      }
      if ( v9 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (_OWORD *)W32UserProbeAddress;
        *a2 = v24;
      }
    }
    else
    {
      v9 = 0;
      UserSetLastError(87LL);
    }
    ThreadUnlock1(v13, v12);
  }
  else
  {
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v9;
}
