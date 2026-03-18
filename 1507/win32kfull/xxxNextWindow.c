/*
 * XREFs of xxxNextWindow @ 0x1C02011B0
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 * Callees:
 *     _GetAsyncKeyState @ 0x1C00411FC (_GetAsyncKeyState.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     SetNewForegroundQueue @ 0x1C0047320 (SetNewForegroundQueue.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     xxxSetThreadDesktop @ 0x1C007EA90 (xxxSetThreadDesktop.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D2004 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF10C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF15C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01FFE60 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200BE4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C0200E20 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C0200FC8 (_GetNextQueueWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C0201158 (xxxCancelCoolSwitch.c)
 */

void __fastcall xxxNextWindow(__int64 a1, int a2)
{
  struct _LARGE_STRING *v3; // rbx
  __int64 NonChildAncestor; // r15
  struct tagWND *v6; // r12
  __int64 v7; // rdx
  struct tagWND *v8; // r13
  struct tagWND *v9; // rcx
  struct tagWND *inited; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 NextQueueWindow; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v23; // zf
  char v24; // al
  _DWORD *Window; // rax
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  struct tagWND *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagWND *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // r13
  struct tagSwitchWndInfo *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r15
  __int64 v51; // [rsp+90h] [rbp-80h] BYREF
  __int64 v52; // [rsp+98h] [rbp-78h]
  __int64 v53; // [rsp+A8h] [rbp-68h] BYREF
  struct tagWND *v54; // [rsp+B0h] [rbp-60h]
  __int64 v55; // [rsp+C0h] [rbp-50h] BYREF
  struct tagWND *v56; // [rsp+C8h] [rbp-48h]
  __int64 v57; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-30h]
  __int64 v59; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v60[11]; // [rsp+F8h] [rbp-18h] BYREF
  BOOL v61; // [rsp+160h] [rbp+50h]
  struct tagSwitchWndInfo *v63; // [rsp+170h] [rbp+60h] BYREF
  _DWORD *v64; // [rsp+178h] [rbp+68h]

  if ( !a1 )
    return;
  v3 = 0LL;
  v61 = (GetAsyncKeyState(0x10u) & 0x8000u) != 0LL;
  NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 72));
  if ( a2 == 9 )
  {
    v6 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v43 = 0LL;
      v60[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v60;
      v60[1] = v6;
      ++*((_DWORD *)v6 + 2);
      while ( 1 )
      {
        v44 = Getpswi(v6);
        v63 = v44;
        if ( !v44 )
        {
          ThreadUnlock1(v46, v45);
          goto LABEL_65;
        }
        v47 = xxxMoveSwitchWndHilite(v6, v44, v61);
        if ( v43 )
        {
          if ( v43 == v47 )
          {
            v50 = 0LL;
LABEL_62:
            ThreadUnlock1(v49, v48);
            HMAssignmentLock(&gspwndActivate, v50);
            if ( !gspwndActivate )
              xxxCancelCoolSwitch();
            return;
          }
        }
        else
        {
          v43 = v47;
        }
        v50 = HMValidateHandleNoSecure(v47, 1);
        if ( v50 )
          goto LABEL_62;
      }
    }
    v7 = *(_QWORD *)(a1 + 80);
    gLangToggleKeyState = 8;
    gwMouseOwnerButton = 0;
    HMAssignmentLock(&gspwndActivate, v7);
    if ( !gspwndActivate )
    {
      HMAssignmentLock(&gspwndActivate, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) + 96LL));
      if ( !gspwndActivate )
        return;
    }
    v51 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v51;
    v52 = NonChildAncestor;
    if ( NonChildAncestor )
      ++*(_DWORD *)(NonChildAncestor + 8);
    v8 = gspwndActivate;
    v53 = *(_QWORD *)(gptiCurrent + 376LL);
    v9 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 376LL) = &v53;
    v54 = v9;
    ++*((_DWORD *)v9 + 2);
    xxxSendTransformableMessageTimeout(v9, 0x1Fu, 0LL, 0LL, 2, 100, &v59, 1, 0);
    inited = InitSwitchWndInfo(&v63, v8, v61);
    v12 = *(_QWORD *)(gptiCurrent + 376LL);
    NextQueueWindow = (__int64)inited;
    v57 = v12;
    *(_QWORD *)(gptiCurrent + 376LL) = &v57;
    v58 = (__int64)inited;
    if ( inited )
      ++*((_DWORD *)inited + 2);
    if ( v63 )
    {
      if ( !inited )
      {
        RemoveSwitchWindowInfo(&v63);
        ThreadUnlock1(v15, v14);
        ThreadUnlock1(v17, v16);
        ThreadUnlock1(v19, v18);
        HMAssignmentUnlock(&gspwndActivate);
        return;
      }
      PushW32ThreadLock((__int64)&v63, v60, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v63 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v20)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21),
            v23 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v24 = 1,
            v23) )
      {
        v24 = 0;
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
                 v24,
                 0LL);
      v64 = Window;
      if ( gspwndAltTab )
      {
        PostMessage((__int64)gspwndAltTab, 0x10u, 0LL, 0LL);
        Window = v64;
      }
      HMAssignmentLock(&gspwndAltTab, Window);
      PopW32ThreadLock(v60);
      if ( gspwndAltTab )
      {
        v33 = safe_cast_fnid_to_PSWITCHWND((__int64)gspwndAltTab);
        if ( v33 )
          *(_QWORD *)(v33 + 376) = v63;
        HMAssignmentLock(&gspwndActivate, NextQueueWindow);
        if ( (*(_DWORD *)(gptiCurrent + 448LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
        v36 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        if ( gspwndFullScreen != (struct tagWND *)v36 )
        {
          v55 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v55;
          v56 = (struct tagWND *)v36;
          if ( v36 )
            ++*(_DWORD *)(v36 + 8);
          v37 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
          if ( v37 )
            v3 = *(struct _LARGE_STRING **)v37;
          xxxSendNotifyMessage(v37, 0x3Au, 2uLL, v3, 1);
          ThreadUnlock1(v39, v38);
        }
        v40 = gspwndAltTab;
        v55 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v55;
        v56 = v40;
        ++*((_DWORD *)v40 + 2);
        xxxShowSwitchWindow(v40, v34, v35);
        ThreadUnlock1(v42, v41);
        goto LABEL_41;
      }
      RemoveSwitchWindowInfo(&v63);
    }
    v26 = 2;
LABEL_23:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(NonChildAncestor + 55) & 0xC0) != 0x40 )
        {
          v27 = *(_QWORD *)(NonChildAncestor + 192);
          if ( v27 )
            *(_DWORD *)(v27 + 40) &= ~4u;
        }
      }
      if ( !v61 && (*((_BYTE *)v8 + 48) & 8) == 0 )
        xxxSetWindowPos(v8, 1LL, 0LL, 0LL, 0, 0, 19);
      if ( (*(_BYTE *)(NextQueueWindow + 55) & 0xC0) != 0x40 )
      {
        v28 = *(_QWORD *)(NextQueueWindow + 192);
        if ( v28 )
          *(_DWORD *)(v28 + 40) |= 4u;
      }
      if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 392LL) )
        SetNewForegroundQueue(0LL);
      SetLastInputWoken(*(_QWORD *)(NextQueueWindow + 16), 0LL);
      if ( a2 == 9 )
        v26 = 18;
      xxxSetForegroundWindow2((struct tagWND *)NextQueueWindow, 0LL, v26, 0);
      if ( a2 == 9 && (*(_BYTE *)(NextQueueWindow + 55) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 3);
    }
LABEL_41:
    ThreadUnlock1(v12, v11);
    ThreadUnlock1(v30, v29);
    ThreadUnlock1(v32, v31);
    return;
  }
  if ( a2 != 27 )
    return;
LABEL_65:
  if ( (*(_DWORD *)(a1 + 332) & 0x4000000) == 0 )
  {
    v8 = *(struct tagWND **)(a1 + 80);
    if ( v8
      || (v8 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 416LL) + 8LL) + 16LL)
                                 + 96LL)) != 0LL )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 72));
      v51 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v51;
      v52 = NonChildAncestor;
      if ( NonChildAncestor )
        ++*(_DWORD *)(NonChildAncestor + 8);
      v26 = 2;
      v53 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v53;
      v54 = v8;
      ++*((_DWORD *)v8 + 2);
      xxxSendTransformableMessageTimeout(v8, 0x1Fu, 0LL, 0LL, 2, 100, &v59, 1, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v8, v61, 1);
      v57 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v57;
      v58 = NextQueueWindow;
      if ( NextQueueWindow )
        ++*(_DWORD *)(NextQueueWindow + 8);
      if ( (struct tagWND *)NextQueueWindow == v8 )
        goto LABEL_41;
      goto LABEL_23;
    }
  }
}
