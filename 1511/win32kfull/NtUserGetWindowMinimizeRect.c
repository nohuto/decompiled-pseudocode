/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C00FF0D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     ParkIcon @ 0x1C00C95F4 (ParkIcon.c)
 *     xxxSendMinRectMessages @ 0x1C00FF20C (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 Prop; // rax
  int SystemMetricsForWindow; // eax
  int v14; // eax
  __int64 v15; // rsi
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v17[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF

  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v7 = v4;
  if ( v4 && (v6 = (*(_WORD *)(v4 + 66) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v4) )
      {
        v8 = xxxSendMinRectMessages(v7, &v18);
      }
      else
      {
        Prop = GetProp(v7, (unsigned __int16)atomCheckpointProp, 1LL);
        if ( Prop && (*(_DWORD *)(Prop + 32) & 8) != 0 )
          *(_QWORD *)&v18 = *(_QWORD *)(Prop + 16);
        else
          ParkIcon(v7, (unsigned int *)&v18);
        SystemMetricsForWindow = GetSystemMetricsForWindow(v7, 0x39u);
        DWORD2(v18) = v18 + SystemMetricsForWindow;
        v14 = GetSystemMetricsForWindow(v7, 0x3Au);
        HIDWORD(v18) = DWORD1(v18) + v14;
        v8 = 1;
      }
      v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
      if ( (*(_BYTE *)(v10 + 224) & 1) == 0 )
      {
        v15 = *(_QWORD *)(v7 + 16);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
        if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v15 + 376)) )
          TransformRectBetweenCoordinateSpaces(&v18, &v18, 0LL, v7);
      }
      if ( v8 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (_OWORD *)W32UserProbeAddress;
        *a2 = v18;
      }
    }
    else
    {
      v8 = 0;
      UserSetLastError(87);
    }
    ThreadUnlock1(v10, v9);
  }
  else
  {
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v8;
}
