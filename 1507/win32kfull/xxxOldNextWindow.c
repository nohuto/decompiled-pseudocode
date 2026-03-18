/*
 * XREFs of xxxOldNextWindow @ 0x1C02017F4
 * Callers:
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 * Callees:
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ThreadLockExchange @ 0x1C0062A1C (ThreadLockExchange.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x1C007C75C (xxxWaitMessageEx.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     xxxTranslateMessage @ 0x1C00DA330 (xxxTranslateMessage.c)
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D2004 (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxCallMsgFilter @ 0x1C01E7174 (xxxCallMsgFilter.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF10C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF15C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01FFE60 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200BE4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C0200E20 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C0200FC8 (_GetNextQueueWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C0201158 (xxxCancelCoolSwitch.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // r15d
  __int64 v4; // rbx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v10; // zf
  char v11; // al
  _DWORD *Window; // rdi
  struct tagWND *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct tagWND *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 NextQueueWindow; // rax
  __int64 v23; // rcx
  struct tagWND *v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // ax
  unsigned __int64 v29; // rax
  __int16 v30; // ax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  BOOL v37; // edi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  _QWORD v46[3]; // [rsp+98h] [rbp-80h] BYREF
  _OWORD v47[3]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-38h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-30h]
  __int64 v50; // [rsp+F8h] [rbp-20h] BYREF
  struct tagWND *v51; // [rsp+100h] [rbp-18h]
  _QWORD v52[3]; // [rsp+110h] [rbp-8h] BYREF
  _QWORD v53[4]; // [rsp+128h] [rbp+10h] BYREF
  struct tagSwitchWndInfo *v54; // [rsp+180h] [rbp+68h] BYREF

  v1 = a1;
  memset(v47, 0, sizeof(v47));
  result = gptiCurrent;
  v3 = 0;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 392LL);
  v4 = *(_QWORD *)(result + 80);
  if ( !v4 )
    return result;
  v46[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v46;
  v46[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  xxxCapture(gptiCurrent, (__int64 *)v4, 4);
  *(_QWORD *)&v47[1] = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    KeyState = GetKeyState(0x10u);
    inited = (__int64)InitSwitchWndInfo(&v54, (struct tagWND *)v4, KeyState < 0);
    if ( v54 )
    {
      *((_DWORD *)v54 + 27) = 1;
      v52[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v52;
      v52[1] = inited;
      if ( inited )
        ++*(_DWORD *)(inited + 8);
      PushW32ThreadLock((__int64)&v54, v53, (__int64)RemoveSwitchWindowInfo);
      if ( !PsGetCurrentProcessWin32Process(v7)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8),
            v10 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v11 = 1,
            v10) )
      {
        v11 = 0;
      }
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 (char **)0x8003,
                 0LL,
                 0x88800000,
                 0,
                 0,
                 10,
                 10,
                 0LL,
                 0LL,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v11,
                 0LL);
      if ( gspwndAltTab )
        PostMessage((__int64)gspwndAltTab, 0x10u, 0LL, 0LL);
      PopW32ThreadLock(v53);
      HMAssignmentLock(&gspwndAltTab, Window);
      v13 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v50 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v50;
        v51 = v13;
        ++*((_DWORD *)v13 + 2);
        v18 = safe_cast_fnid_to_PSWITCHWND((__int64)v13);
        if ( v18 )
          *(_QWORD *)(v18 + 376) = v54;
        xxxShowSwitchWindow(v17, v16, v18);
        ThreadUnlock1(v20, v19);
      }
      else
      {
        RemoveSwitchWindowInfo(&v54);
      }
      inited = ThreadUnlock1(v15, v14);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v21 = GetKeyState(0x10u);
    NextQueueWindow = GetNextQueueWindow(v4, v21 < 0, 1);
    inited = NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v3 = 1;
    v4 = NextQueueWindow;
    v23 = NextQueueWindow;
    goto LABEL_38;
  }
  v24 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v25 = 0LL;
    v50 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v50;
    v51 = v24;
    ++*((_DWORD *)v24 + 2);
    while ( 1 )
    {
      v54 = Getpswi(v24);
      if ( !v54 )
        goto LABEL_31;
      v28 = GetKeyState(0x10u);
      v29 = xxxMoveSwitchWndHilite(v24, v54, v28 < 0);
      if ( v25 )
      {
        if ( v25 == v29 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v27, v26);
LABEL_37:
          v23 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v23, (__int64)v46);
          goto LABEL_39;
        }
      }
      else
      {
        v25 = v29;
      }
      inited = HMValidateHandleNoSecure(v29, 1);
      if ( inited )
        goto LABEL_31;
    }
  }
  v30 = GetKeyState(0x10u);
  v31 = GetNextQueueWindow(v4, v30 < 0, 0);
  inited = v31;
  if ( v31 && v31 != v4 )
  {
    if ( (*(_BYTE *)(v4 + 48) & 8) == 0 )
    {
      v48 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v48;
      v49 = v31;
      ++*(_DWORD *)(v31 + 8);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 19);
      inited = ThreadUnlock1(v33, v32);
    }
    if ( inited )
      goto LABEL_37;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_39:
            if ( v4 )
              v34 = *(_QWORD *)v4;
            else
              v34 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage(v47, 0LL, 0, 0, 2u, 0) )
              xxxWaitMessageEx(0x3CFFu, 0, 0LL);
            v4 = HMValidateHandleNoSecure(v34, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
              ThreadLockExchange(v4, (__int64)v46);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v47, 6) )
              break;
            xxxInternalGetMessage(v47, 0LL, DWORD2(v47[0]), DWORD2(v47[0]), 1u, 0);
          }
          if ( DWORD2(v47[0]) == 260 )
          {
            if ( !gspwndAltTab || LOWORD(v47[1]) == 9 || LOWORD(v47[1]) == 27 )
              goto LABEL_78;
            if ( LOWORD(v47[1]) != 16 )
              goto LABEL_53;
          }
          if ( DWORD2(v47[0]) > 0x202 )
          {
            if ( DWORD2(v47[0]) >= 0x204
              && (DWORD2(v47[0]) <= 0x205
               || DWORD2(v47[0]) > 0x206
               && (DWORD2(v47[0]) <= 0x208
                || DWORD2(v47[0]) > 0x20A && (DWORD2(v47[0]) <= 0x20C || DWORD2(v47[0]) == 786))) )
            {
              goto LABEL_53;
            }
            goto LABEL_107;
          }
          if ( DWORD2(v47[0]) >= 0x201 || DWORD2(v47[0]) == 75 )
            goto LABEL_53;
          if ( DWORD2(v47[0]) <= 0xFF )
            goto LABEL_107;
          if ( DWORD2(v47[0]) <= 0x101 )
            break;
          if ( DWORD2(v47[0]) == 260 )
          {
LABEL_78:
            LOWORD(v1) = v47[1];
            if ( LOWORD(v47[1]) != 9 && LOWORD(v47[1]) != 16 && LOWORD(v47[1]) != 27 )
              goto LABEL_55;
            if ( v4 )
              v44 = *(_QWORD *)v4;
            else
              v44 = 0LL;
            xxxInternalGetMessage(v47, 0LL, 0x104u, 0x104u, 1u, 0);
            v4 = HMValidateHandleNoSecure(v44, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
              ThreadLockExchange(v4, (__int64)v46);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( DWORD2(v47[0]) > 0x104 && (DWORD2(v47[0]) <= 0x106 || DWORD2(v47[0]) == 512) )
              break;
LABEL_107:
            if ( v4 )
              v45 = *(_QWORD *)v4;
            else
              v45 = 0LL;
            xxxInternalGetMessage(v47, 0LL, DWORD2(v47[0]), DWORD2(v47[0]), 1u, 0);
            xxxTranslateMessage((__int64)v47, 0);
            xxxDispatchMessage(v47);
            v4 = HMValidateHandleNoSecure(v45, 1);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
              v23 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v43 = *(_QWORD *)v4;
        else
          v43 = 0LL;
        xxxInternalGetMessage(v47, 0LL, DWORD2(v47[0]), DWORD2(v47[0]), 1u, 0);
        v4 = HMValidateHandleNoSecure(v43, 1);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
          ThreadLockExchange(v4, (__int64)v46);
        }
        if ( ((DWORD2(v47[0]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( DWORD2(v47[0]) == 256 )
          goto LABEL_53;
      }
      if ( LOWORD(v47[1]) != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_54;
    }
  }
  while ( LOWORD(v47[1]) != 27 );
  if ( gspwndAltTab )
  {
LABEL_53:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
    ThreadLockExchange(v4, (__int64)v46);
LABEL_54:
    v3 = 0;
    goto LABEL_55;
  }
  v3 = 1;
LABEL_55:
  xxxReleaseCapture();
  v37 = gspwndAltTab != 0LL;
  if ( v3 == 1 )
  {
    if ( gpqForeground )
    {
      v38 = *(_QWORD *)(gpqForeground + 80LL);
      if ( v38 )
      {
        if ( v38 != v4 )
        {
          v48 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v48;
          v49 = v38;
          ++*(_DWORD *)(v38 + 8);
          xxxSetWindowPos((struct tagWND *)v38, 1LL, 0LL, 0LL, 0, 0, 19);
          ThreadUnlock1(v40, v39);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindow((struct tagWND *)v4, 0LL, v35, v36);
    if ( (*(_BYTE *)(v4 + 55) & 0x20) != 0 && !v3 )
    {
      if ( v37 )
        PostMessage(v4, 0x112u, 0xF120uLL, 0LL);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v42, v41);
}
