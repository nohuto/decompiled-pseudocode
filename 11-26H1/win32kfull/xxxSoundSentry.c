/*
 * XREFs of xxxSoundSentry @ 0x1401B124C
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1401B1154 (xxxMessageBeep.c)
 *     NtUserSoundSentry @ 0x1401B1210 (NtUserSoundSentry.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x140251FAC (-xxxUserBeep@@YAHKK_N@Z.c)
 *     xxxOldMessageBeep @ 0x1402CB688 (xxxOldMessageBeep.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     GreDPtoLP @ 0x14003E6C0 (GreDPtoLP.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     GreEnableAppContainerRestriction @ 0x14021A9AC (GreEnableAppContainerRestriction.c)
 *     GetPrimaryMonitorRect @ 0x140252E48 (GetPrimaryMonitorRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  int v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  Gre::Base *DCEx; // rbx
  __int64 v24; // rdx
  __int128 v25; // xmm6
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 DesktopWindow; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int128 v32; // xmm0
  _BYTE v33[8]; // [rsp+30h] [rbp-40h] BYREF
  __m128i BugCheckParameter3; // [rsp+38h] [rbp-38h] BYREF
  struct tagPOINT v35[2]; // [rsp+48h] [rbp-28h] BYREF

  *(_OWORD *)&v35[0].x = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = *(unsigned int *)(W32GetUserSessionState(v4, v3) + 20980);
  if ( (v6 & 1) == 0 )
  {
    v7 = 50;
LABEL_3:
    UserSetLastError(v7);
    return 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18928) )
  {
    v12 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928) + 128LL);
    if ( v12 )
    {
      if ( !*(_QWORD *)(UserSessionState + 21040) )
      {
        v13 = (unsigned int)(*(_DWORD *)(UserSessionState + 21008) - 1);
        if ( *(_DWORD *)(UserSessionState + 21008) == 1
          || (v13 = (unsigned int)(*(_DWORD *)(UserSessionState + 21008) - 2), (unsigned int)v13 <= 1) )
        {
          v15 = *(_QWORD *)(W32GetUserSessionState(v13, v11) + 19904);
          if ( *(int *)(v15 + 4984) >= 1 )
          {
            v15 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904);
            v16 = *(_DWORD *)(v15 + 4984);
          }
          else
          {
            v16 = 1200;
          }
          v17 = *(_DWORD *)(UserSessionState + 21008);
          *(_DWORD *)(W32GetUserSessionState(v15, v14) + 21048) = v17;
          v18 = *v12;
          *(_QWORD *)(W32GetUserSessionState(v20, v19) + 21032) = v18;
          v21 = InternalSetTimer(0LL, 0LL, v16, (__int64)xxxSoundSentryTimer, 0, 20);
          *(_QWORD *)(UserSessionState + 21040) = v21;
          if ( !v21 )
          {
            v7 = 170;
            goto LABEL_3;
          }
        }
        switch ( *(_DWORD *)(UserSessionState + 21008) )
        {
          case 1:
            Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(&BugCheckParameter3, (__int64)v12);
            xxxFlashWindow(v12, 3LL, 0LL);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>(BugCheckParameter3.m128i_i64);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v12) )
            {
              *(_OWORD *)&v35[0].x = *(_OWORD *)(v12[5] + 88);
              LogicalToPhysicalDPIRect(v35, v35, *(unsigned int *)(v12[5] + 288), 0LL);
              v25 = *(_OWORD *)&v35[0].x;
              *(_OWORD *)(W32GetUserSessionState(v27, v26) + 21052) = v25;
              DesktopWindow = GetDesktopWindow((__int64)v12);
              DCEx = (Gre::Base *)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              LOBYTE(v29) = 1;
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v33, v29);
              GrePatBlt(DCEx, v35[0].x, v35[0].y, v35[1].x - v35[0].x, v35[1].y - v35[0].y, 5570569);
              goto LABEL_21;
            }
            v30 = _GetDCEx(v12, 0LL, 65537LL);
            v31 = v12[5];
            DCEx = (Gre::Base *)v30;
            if ( (*(_WORD *)(v31 + 42) & 0x2FFF) == 0x29D )
              v32 = *(_OWORD *)GetPrimaryMonitorRect(&BugCheckParameter3);
            else
              v32 = *(_OWORD *)(v31 + 88);
            v35[1].x = DWORD2(v32) - v32;
            v35[1].y = HIDWORD(v32) - DWORD1(v32);
            v35[0].y = 0;
            v35[0].x = 0;
            GreDPtoLP((HDC)DCEx, v35);
            GreEnableAppContainerRestriction(0LL);
LABEL_27:
            GrePatBlt(DCEx, v35[0].x, v35[0].y, v35[1].x - v35[0].x, v35[1].y - v35[0].y, 5570569);
            goto LABEL_22;
          case 3:
            v22 = GetDesktopWindow((__int64)v12);
            DCEx = (Gre::Base *)_GetDCEx(v22, 0LL, 3LL);
            *(__m128i *)&v35[0].x = *GetScreenRectForDpi(&BugCheckParameter3, 0LL);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v12) )
            {
              LOBYTE(v24) = 1;
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v33, v24);
              GrePatBlt(DCEx, v35[0].x, v35[0].y, v35[1].x - v35[0].x, v35[1].y - v35[0].y, 5570569);
LABEL_21:
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v33);
LABEL_22:
              GreEnableAppContainerRestriction(1LL);
              _ReleaseDC(DCEx);
              return 1LL;
            }
            goto LABEL_27;
        }
      }
    }
  }
  return 1LL;
}
