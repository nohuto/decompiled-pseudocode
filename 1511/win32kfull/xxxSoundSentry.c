/*
 * XREFs of xxxSoundSentry @ 0x1C01144E8
 * Callers:
 *     NtUserSoundSentry @ 0x1C000CE90 (NtUserSoundSentry.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C014F750 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C01FEF60 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C0229340 (UserBeep.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     InternalSetTimer @ 0x1C004A670 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     GreTransformPoints @ 0x1C00DC714 (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _GetWindowRect @ 0x1C0249A30 (_GetWindowRect.c)
 */

__int64 xxxSoundSentry()
{
  int v0; // ecx
  __int64 v2; // rdi
  int v3; // edx
  signed int v4; // r8d
  int v5; // edx
  int v6; // edx
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  int *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  int *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD v29[3]; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTL v30; // [rsp+48h] [rbp-18h] BYREF
  int v31; // [rsp+50h] [rbp-10h]
  int v32; // [rsp+54h] [rbp-Ch]

  if ( (xmmword_1C0322254 & 1) == 0 )
  {
    v0 = 50;
LABEL_3:
    UserSetLastError(v0);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v2 = *(_QWORD *)(gpqForeground + 80LL);
    if ( v2 )
    {
      if ( !gtmridSoundSentry )
      {
        v3 = dword_1C0322270;
        if ( (unsigned int)(dword_1C0322270 - 1) <= 2 )
        {
          gdwCurrentEffect = dword_1C0322270;
          v4 = *(_DWORD *)(gpsi + 4000LL);
          if ( v4 < 1 )
            v4 = 1200;
          ghwndSoundSentry = *(HWND *)v2;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v4, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v0 = 170;
            goto LABEL_3;
          }
          v3 = dword_1C0322270;
        }
        v5 = v3 - 1;
        if ( !v5 )
        {
          v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v29;
          v29[1] = v2;
          ++*(_DWORD *)(v2 + 8);
          xxxFlashWindow(v2, 3u, 0);
          ThreadUnlock1(v28, v27);
          return 1LL;
        }
        v6 = v5 - 1;
        if ( !v6 )
        {
          DCEx = (HDC)_GetDCEx(v2, 0LL, 65537LL);
          GetWindowRect(v2, &v30);
          v31 -= v30.x;
          v32 -= v30.y;
          v30.x = 0;
          v30.y = 0;
          GreTransformPoints((__int64)DCEx, &v30, &v30, 2, 0);
          goto LABEL_57;
        }
        if ( v6 == 1 )
        {
          DesktopWindow = GetDesktopWindow(v2);
          v30.y = 0;
          v30.x = 0;
          DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x4EuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0 )
            {
              goto LABEL_19;
            }
          }
          else if ( !IsDPIDWMSysMet(v9)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v15 = 0)
                   : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v15) )
          {
LABEL_19:
            if ( IsDPIDWMSysMet(0x4EuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v12 = 0)
                : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v12) )
            {
              v16 = (int *)(gpsi + 2968LL);
            }
            else
            {
              v16 = (int *)(gpsi + 2192LL);
            }
LABEL_35:
            v31 = *v16;
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0 )
              {
                goto LABEL_38;
              }
            }
            else if ( !IsDPIDWMSysMet(v17)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     ? (v23 = 0)
                     : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v23) )
            {
LABEL_38:
              if ( IsDPIDWMSysMet(0x4FuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v20 = 0)
                  : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v20) )
              {
                v24 = (int *)(gpsi + 2972LL);
              }
              else
              {
                v24 = (int *)(gpsi + 2196LL);
              }
LABEL_54:
              v32 = *v24;
              if ( (unsigned int)IsWindowDesktopComposed(v2) )
              {
                UserSessionSwitchLeaveCrit(v26, v25);
                NtGdiPatBlt(DCEx, v30.x, v30.y, v31 - v30.x, v32 - v30.y, 5570569);
                EnterCrit(0LL, 1LL);
LABEL_58:
                _ReleaseDC(DCEx);
                return 1LL;
              }
LABEL_57:
              NtGdiPatBlt(DCEx, v30.x, v30.y, v31 - v30.x, v32 - v30.y, 5570569);
              goto LABEL_58;
            }
            v24 = (int *)(gpsi + 2584LL);
            goto LABEL_54;
          }
          v16 = (int *)(gpsi + 2580LL);
          goto LABEL_35;
        }
      }
    }
  }
  return 1LL;
}
