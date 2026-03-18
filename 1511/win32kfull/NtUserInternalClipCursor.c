/*
 * XREFs of NtUserInternalClipCursor @ 0x1C008CD10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     _GetCursorInfo @ 0x1C008ADC8 (_GetCursorInfo.c)
 *     ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C008CE08 (-InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserInternalClipCursor(__int64 a1, int a2)
{
  LONG *v4; // rdi
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int128 v17; // kr00_16
  unsigned __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF

  v19[0] = 0LL;
  v19[1] = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = v6;
  if ( v6 )
  {
    if ( *(_DWORD *)(CurrentProcessWin32Process + 836) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL) + 836LL)
      && !(unsigned int)IsDesktopApp(CurrentProcessWin32Process) )
    {
      if ( (unsigned int)InForegroundQueue(gptiCurrent) )
      {
        v12 = *(_QWORD *)(CurrentProcessWin32Process + 784);
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 100) & 1) != 0 )
          {
            if ( !a2 )
            {
LABEL_10:
              LODWORD(v4) = zzzClipCursorEx(v4, 1LL, v10, v11);
              goto LABEL_7;
            }
            GetCursorInfo((__int64)v19);
            if ( (v19[0] & 0x100000000LL) == 0 )
            {
              v16 = v20;
              v21 = *(_OWORD *)(v9 + 112);
              v17 = v21;
              if ( (int)v20 >= (int)v21 )
              {
                if ( (int)v20 >= SDWORD2(v21) )
                  v16 = DWORD2(v21) - 1;
                LODWORD(v21) = v16;
              }
              else
              {
                v16 = v21;
              }
              v10 = HIDWORD(v20);
              v18 = DWORD1(v17);
              if ( SHIDWORD(v20) >= SDWORD1(v17) )
              {
                LODWORD(v18) = HIDWORD(v17) - 1;
                if ( SHIDWORD(v20) < SHIDWORD(v17) )
                  LODWORD(v18) = HIDWORD(v20);
              }
              DWORD1(v21) = v18;
              DWORD2(v21) = v16 + 1;
              v15 = v18 + 1;
              goto LABEL_25;
            }
            if ( gpqCursor != gpqForeground && gpqForeground && !*(_QWORD *)(gpqForeground + 320LL) )
            {
              v11 = 2LL;
              v14 = *(_DWORD *)(v9 + 124) - *(_DWORD *)(v9 + 116);
              LODWORD(v21) = *(_DWORD *)(v9 + 112) + (*(_DWORD *)(v9 + 120) - *(_DWORD *)(v9 + 112)) / 2;
              v10 = (unsigned int)v21;
              DWORD2(v21) = v21 + 1;
              DWORD1(v21) = *(_DWORD *)(v9 + 116) + v14 / 2;
              v15 = DWORD1(v21) + 1;
LABEL_25:
              HIDWORD(v21) = v15;
              v4 = (LONG *)&v21;
              goto LABEL_10;
            }
          }
        }
      }
    }
    UserSetLastError(5);
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v8, v7);
  return (unsigned int)v4;
}
