/*
 * XREFs of xxxSoundSentry @ 0x1C01357C8
 * Callers:
 *     NtUserSoundSentry @ 0x1C000E5B0 (NtUserSoundSentry.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C0152DE0 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C01F66B4 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C0228C40 (UserBeep.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GreTransformPoints @ 0x1C00FB364 (GreTransformPoints.c)
 *     GreEnableAppContainerRestriction @ 0x1C012BF28 (GreEnableAppContainerRestriction.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _GetWindowRect @ 0x1C0245D58 (_GetWindowRect.c)
 */

__int64 xxxSoundSentry()
{
  __int64 v0; // rcx
  __int64 v2; // rdi
  int v3; // edx
  __int64 v4; // r8
  int v5; // edx
  int v6; // edx
  __int64 v7; // rax
  HDC DCEx; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ecx
  int *v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ecx
  int *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 DesktopWindow; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  _QWORD v69[3]; // [rsp+30h] [rbp-30h] BYREF
  int v70[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_1C032BBAC & 1) == 0 )
  {
    v0 = 50LL;
LABEL_3:
    UserSetLastError(v0);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v2 = *(_QWORD *)(gpqForeground + 88LL);
    if ( v2 )
    {
      if ( !gtmridSoundSentry )
      {
        v3 = HIDWORD(xmmword_1C032BBBC);
        if ( (unsigned int)(HIDWORD(xmmword_1C032BBBC) - 1) <= 2 )
        {
          gdwCurrentEffect = HIDWORD(xmmword_1C032BBBC);
          v4 = *(unsigned int *)(gpsi + 5392LL);
          if ( (int)v4 < 1 )
            v4 = 1200LL;
          ghwndSoundSentry = *(HWND *)v2;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v4, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v0 = 170LL;
            goto LABEL_3;
          }
          v3 = HIDWORD(xmmword_1C032BBBC);
        }
        v5 = v3 - 1;
        if ( !v5 )
        {
          v69[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v69;
          v69[1] = v2;
          ++*(_DWORD *)(v2 + 8);
          xxxFlashWindow((struct tagWND *)v2, 3u, 0);
          ThreadUnlock1(v68, v67);
          return 1LL;
        }
        v6 = v5 - 1;
        if ( !v6 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v2) )
          {
            *(_OWORD *)v70 = *(_OWORD *)(v2 + 112);
            MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v2);
            LogicalToPhysicalDPIRect(v70, v70, MonitorFlagsFromWindow, 0LL);
            grcScreenFlash = *(struct tagRECT *)v70;
            DesktopWindow = GetDesktopWindow(v2);
            DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
            GreEnableAppContainerRestriction(0, v61, v62, v63);
            v55 = gdwInAtomicOperation;
            if ( gdwInAtomicOperation )
            {
              v54 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            goto LABEL_54;
          }
          DCEx = (HDC)_GetDCEx(v2, 0LL, 65537LL);
          GetWindowRect(v2, v70);
          v70[2] -= v70[0];
          v70[3] -= v70[1];
          v70[0] = 0;
          v70[1] = 0;
          GreTransformPoints(DCEx, (struct _POINTL *)v70, (struct _POINTL *)v70, 2, 0);
          GreEnableAppContainerRestriction(0, v64, v65, v66);
LABEL_60:
          NtGdiPatBlt(DCEx, v70[0], v70[1], v70[2] - v70[0], v70[3] - v70[1], 5570569);
          goto LABEL_61;
        }
        if ( v6 == 1 )
        {
          v7 = GetDesktopWindow(v2);
          v70[1] = 0;
          v70[0] = 0;
          DCEx = (HDC)_GetDCEx(v7, 0LL, 3LL);
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x4EuLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) != 0 )
              goto LABEL_18;
          }
          else if ( !IsDPIDWMSysMet(v10)
                 || (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 408)
                   ? (v34 = 0)
                   : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v31,
                                                                  v32,
                                                                  v33)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v34) )
          {
LABEL_18:
            if ( IsDPIDWMSysMet(0x4EuLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
                ? (v23 = 0)
                : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v20,
                                                               v21,
                                                               v22)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v23) )
            {
              v35 = (int *)(gpsi + 2968LL);
            }
            else
            {
              v35 = (int *)(gpsi + 2192LL);
            }
LABEL_33:
            v70[2] = *v35;
            if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) != 0 )
                goto LABEL_35;
            }
            else if ( !IsDPIDWMSysMet(v37)
                   || (W32GetCurrentThreadDpiAwarenessContext(v46, v45, v47, v48) & 0xF) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 408)
                     ? (v52 = 0)
                     : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v40,
                                                                    v41,
                                                                    v42)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v52) )
            {
LABEL_35:
              if ( IsDPIDWMSysMet(0x4FuLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v43, v40, v41, v42) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 408)
                  ? (v44 = 0)
                  : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v40,
                                                                 v41,
                                                                 v42)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v44) )
              {
                v53 = (int *)(gpsi + 2972LL);
              }
              else
              {
                v53 = (int *)(gpsi + 2196LL);
              }
LABEL_50:
              v70[3] = *v53;
              GreEnableAppContainerRestriction(0, v40, v41, v42);
              if ( (unsigned int)IsWindowDesktopComposed(v2) )
              {
                v55 = gdwInAtomicOperation;
                if ( gdwInAtomicOperation )
                {
                  v54 = gdwExtraInstrumentations;
                  if ( (gdwExtraInstrumentations & 1) != 0 )
                    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                }
LABEL_54:
                UserSessionSwitchLeaveCrit(v54, v55);
                NtGdiPatBlt(DCEx, v70[0], v70[1], v70[2] - v70[0], v70[3] - v70[1], 5570569);
                EnterCrit(0LL, 1LL);
LABEL_61:
                GreEnableAppContainerRestriction(1, v56, v57, v58);
                _ReleaseDC(DCEx);
                return 1LL;
              }
              goto LABEL_60;
            }
            v53 = (int *)(gpsi + 2584LL);
            goto LABEL_50;
          }
          v35 = (int *)(gpsi + 2580LL);
          goto LABEL_33;
        }
      }
    }
  }
  return 1LL;
}
