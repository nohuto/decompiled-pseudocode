/*
 * XREFs of NtUserInternalClipCursor @ 0x1C011E790
 * Callers:
 *     <none>
 * Callees:
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     _GetCursorInfo @ 0x1C00982F8 (_GetCursorInfo.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E870 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserInternalClipCursor(__int64 a1, __int64 a2)
{
  int v2; // r14d
  LONG *v4; // rdi
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int128 v20; // kr00_16
  unsigned __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h]
  __int128 v24; // [rsp+38h] [rbp-18h] BYREF

  v2 = a2;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( v6 )
  {
    if ( *(_DWORD *)(CurrentProcessWin32Process + 828) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL) + 828LL)
      && !(unsigned int)IsDesktopApp(CurrentProcessWin32Process, v7, v9, v10) )
    {
      if ( (unsigned int)InForegroundQueue(gptiCurrent, 0) )
      {
        v15 = *(_QWORD *)(CurrentProcessWin32Process + 776);
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 100) & 1) != 0 )
          {
            if ( !v2 )
            {
LABEL_25:
              LODWORD(v4) = zzzClipCursorEx(v4, 1);
              goto LABEL_7;
            }
            GetCursorInfo((__int64)v22, v12, v13, v14);
            if ( (v22[0] & 0x100000000LL) == 0 )
            {
              v19 = v23;
              v24 = *(_OWORD *)(v11 + 112);
              v20 = v24;
              if ( (int)v23 >= (int)v24 )
              {
                if ( (int)v23 >= SDWORD2(v24) )
                  v19 = DWORD2(v24) - 1;
                LODWORD(v24) = v19;
              }
              else
              {
                v19 = v24;
              }
              v21 = DWORD1(v20);
              if ( SHIDWORD(v23) >= SDWORD1(v20) )
              {
                LODWORD(v21) = HIDWORD(v20) - 1;
                if ( SHIDWORD(v23) < SHIDWORD(v20) )
                  LODWORD(v21) = HIDWORD(v23);
              }
              DWORD1(v24) = v21;
              DWORD2(v24) = v19 + 1;
              v18 = v21 + 1;
              goto LABEL_24;
            }
            if ( gpqCursor != gpqForeground && gpqForeground && !*(_QWORD *)(gpqForeground + 328LL) )
            {
              v17 = *(_DWORD *)(v11 + 124) - *(_DWORD *)(v11 + 116);
              LODWORD(v24) = *(_DWORD *)(v11 + 112) + (*(_DWORD *)(v11 + 120) - *(_DWORD *)(v11 + 112)) / 2;
              DWORD2(v24) = v24 + 1;
              DWORD1(v24) = *(_DWORD *)(v11 + 116) + v17 / 2;
              v18 = DWORD1(v24) + 1;
LABEL_24:
              HIDWORD(v24) = v18;
              v4 = (LONG *)&v24;
              goto LABEL_25;
            }
          }
        }
      }
    }
    UserSetLastError(5LL);
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v7);
  return (int)v4;
}
