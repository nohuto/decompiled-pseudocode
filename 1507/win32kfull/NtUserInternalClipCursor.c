/*
 * XREFs of NtUserInternalClipCursor @ 0x1C00442D0
 * Callers:
 *     <none>
 * Callees:
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     _GetCursorInfo @ 0x1C003DD88 (_GetCursorInfo.c)
 *     ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C00443C8 (-InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserInternalClipCursor(__int64 a1, int a2)
{
  LONG *v4; // rdi
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int128 v15; // kr00_16
  unsigned __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF

  v17[0] = 0LL;
  v17[1] = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  EnterCrit(1LL);
  v6 = ValidateHwnd(a1);
  v9 = v6;
  if ( v6 )
  {
    if ( *(_DWORD *)(CurrentProcessWin32Process + 836) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 836LL)
      && !(unsigned int)IsDesktopApp(CurrentProcessWin32Process, v7) )
    {
      if ( (unsigned int)InForegroundQueue(gptiCurrent) )
      {
        v10 = *(_QWORD *)(CurrentProcessWin32Process + 784);
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 100) & 1) != 0 )
          {
            if ( !a2 )
            {
LABEL_10:
              LODWORD(v4) = zzzClipCursorEx(v4, 1);
              goto LABEL_7;
            }
            GetCursorInfo((__int64)v17);
            if ( (v17[0] & 0x100000000LL) == 0 )
            {
              v14 = v18;
              v19 = *(_OWORD *)(v9 + 112);
              v15 = v19;
              if ( (int)v18 >= (int)v19 )
              {
                if ( (int)v18 >= SDWORD2(v19) )
                  v14 = DWORD2(v19) - 1;
                LODWORD(v19) = v14;
              }
              else
              {
                v14 = v19;
              }
              v16 = DWORD1(v15);
              if ( SHIDWORD(v18) >= SDWORD1(v15) )
              {
                LODWORD(v16) = HIDWORD(v15) - 1;
                if ( SHIDWORD(v18) < SHIDWORD(v15) )
                  LODWORD(v16) = HIDWORD(v18);
              }
              DWORD1(v19) = v16;
              DWORD2(v19) = v14 + 1;
              v13 = v16 + 1;
              goto LABEL_25;
            }
            if ( gpqCursor != gpqForeground && gpqForeground && !*(_QWORD *)(gpqForeground + 320LL) )
            {
              v12 = *(_DWORD *)(v9 + 124) - *(_DWORD *)(v9 + 116);
              LODWORD(v19) = *(_DWORD *)(v9 + 112) + (*(_DWORD *)(v9 + 120) - *(_DWORD *)(v9 + 112)) / 2;
              DWORD2(v19) = v19 + 1;
              DWORD1(v19) = *(_DWORD *)(v9 + 116) + v12 / 2;
              v13 = DWORD1(v19) + 1;
LABEL_25:
              HIDWORD(v19) = v13;
              v4 = (LONG *)&v19;
              goto LABEL_10;
            }
          }
        }
      }
    }
    UserSetLastError(5LL);
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v7);
  return (unsigned int)v4;
}
