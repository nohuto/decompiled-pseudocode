/*
 * XREFs of xxxNextWindow @ 0x1C0201554
 * Callers:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 * Callees:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     SetNewForegroundQueue @ 0x1C008E570 (SetNewForegroundQueue.c)
 *     GetNonChildAncestor @ 0x1C00905C8 (GetNonChildAncestor.c)
 *     xxxSetThreadDesktop @ 0x1C00CEE94 (xxxSetThreadDesktop.c)
 *     _GetAsyncKeyState @ 0x1C00EB660 (_GetAsyncKeyState.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D3A54 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01FF7BC (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01FF80C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C0200250 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200F84 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C02011C0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C0201368 (_GetNextQueueWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C02014FC (xxxCancelCoolSwitch.c)
 */

void __fastcall xxxNextWindow(_QWORD *a1, int a2)
{
  struct _LARGE_STRING *v3; // rbx
  BOOL v5; // edi
  __int64 NonChildAncestor; // r15
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  struct tagWND *v9; // r13
  struct tagWND *v10; // rcx
  struct tagWND *inited; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 NextQueueWindow; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v24; // zf
  char v25; // al
  __int64 Window; // rax
  unsigned __int8 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  struct tagWND *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct tagWND *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // r13
  struct tagSwitchWndInfo *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r15
  __int64 v53; // [rsp+90h] [rbp-80h] BYREF
  __int64 v54; // [rsp+98h] [rbp-78h]
  __int64 v55; // [rsp+A8h] [rbp-68h] BYREF
  struct tagWND *v56; // [rsp+B0h] [rbp-60h]
  __int64 v57; // [rsp+C0h] [rbp-50h] BYREF
  struct tagWND *v58; // [rsp+C8h] [rbp-48h]
  __int64 v59; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-30h]
  __int64 v61; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v62[11]; // [rsp+F8h] [rbp-18h] BYREF
  unsigned int v63; // [rsp+160h] [rbp+50h]
  struct tagSwitchWndInfo *v65; // [rsp+170h] [rbp+60h] BYREF
  __int64 v66; // [rsp+178h] [rbp+68h]

  if ( !a1 )
    return;
  v3 = 0LL;
  v5 = (GetAsyncKeyState(0x10u) & 0x8000u) != 0LL;
  v63 = v5;
  NonChildAncestor = GetNonChildAncestor(a1[9]);
  if ( a2 == 9 )
  {
    v7 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v45 = 0LL;
      v62[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v62;
      v62[1] = v7;
      ++*((_DWORD *)v7 + 2);
      while ( 1 )
      {
        v46 = Getpswi(v7);
        v65 = v46;
        if ( !v46 )
        {
          ThreadUnlock1(v48, v47);
          v5 = v63;
          goto LABEL_65;
        }
        v49 = xxxMoveSwitchWndHilite(v7, v46, v63);
        if ( v45 )
        {
          if ( v45 == v49 )
          {
            v52 = 0LL;
LABEL_62:
            ThreadUnlock1(v51, v50);
            HMAssignmentLock(&gspwndActivate, v52);
            if ( !gspwndActivate )
              xxxCancelCoolSwitch();
            return;
          }
        }
        else
        {
          v45 = v49;
        }
        v52 = HMValidateHandleNoSecure(v49, 1);
        if ( v52 )
          goto LABEL_62;
      }
    }
    v8 = a1[10];
    gLangToggleKeyState = 8;
    gwMouseOwnerButton = 0;
    HMAssignmentLock(&gspwndActivate, v8);
    if ( !gspwndActivate )
    {
      HMAssignmentLock(&gspwndActivate, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) + 96LL));
      if ( !gspwndActivate )
        return;
    }
    v53 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v53;
    v54 = NonChildAncestor;
    if ( NonChildAncestor )
      ++*(_DWORD *)(NonChildAncestor + 8);
    v9 = gspwndActivate;
    v55 = *(_QWORD *)(gptiCurrent + 368LL);
    v10 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 368LL) = &v55;
    v56 = v10;
    ++*((_DWORD *)v10 + 2);
    xxxSendTransformableMessageTimeout(v10, 31LL, 0LL, 0LL, 2, 100, &v61, 1, 0);
    inited = InitSwitchWndInfo(&v65, v9, v63);
    v13 = *(_QWORD *)(gptiCurrent + 368LL);
    NextQueueWindow = (__int64)inited;
    v59 = v13;
    *(_QWORD *)(gptiCurrent + 368LL) = &v59;
    v60 = (__int64)inited;
    if ( inited )
      ++*((_DWORD *)inited + 2);
    if ( v65 )
    {
      if ( !inited )
      {
        RemoveSwitchWindowInfo(&v65);
        ThreadUnlock1(v16, v15);
        ThreadUnlock1(v18, v17);
        ThreadUnlock1(v20, v19);
        HMAssignmentUnlock(&gspwndActivate);
        return;
      }
      PushW32ThreadLock((__int64)&v65, v62, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v65 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v21)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22),
            v24 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v25 = 1,
            v24) )
      {
        v25 = 0;
      }
      Window = xxxCreateWindowEx(
                 385,
                 0x8003uLL,
                 32771LL,
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
                 v25,
                 0LL);
      v66 = Window;
      if ( gspwndAltTab )
      {
        PostMessage((__int64)gspwndAltTab, 16LL, 0LL, 0LL);
        Window = v66;
      }
      HMAssignmentLock(&gspwndAltTab, Window);
      PopW32ThreadLock(v62);
      if ( gspwndAltTab )
      {
        v34 = safe_cast_fnid_to_PSWITCHWND((__int64)gspwndAltTab);
        if ( v34 )
          *(_QWORD *)(v34 + 376) = v65;
        HMAssignmentLock(&gspwndActivate, NextQueueWindow);
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v36, v37);
        v38 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        if ( gspwndFullScreen != (struct tagWND *)v38 )
        {
          v57 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v57;
          v58 = (struct tagWND *)v38;
          if ( v38 )
            ++*(_DWORD *)(v38 + 8);
          v39 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
          if ( v39 )
            v3 = *(struct _LARGE_STRING **)v39;
          xxxSendNotifyMessage(v39, 0x3Au, 2uLL, v3, 1);
          ThreadUnlock1(v41, v40);
        }
        v42 = gspwndAltTab;
        v57 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v57;
        v58 = v42;
        ++*((_DWORD *)v42 + 2);
        xxxShowSwitchWindow(v42, v35, v36);
        ThreadUnlock1(v44, v43);
        goto LABEL_41;
      }
      RemoveSwitchWindowInfo(&v65);
    }
    v27 = 2;
LABEL_23:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(NonChildAncestor + 55) & 0xC0) != 0x40 )
        {
          v28 = *(_QWORD *)(NonChildAncestor + 192);
          if ( v28 )
            *(_DWORD *)(v28 + 40) &= ~4u;
        }
      }
      if ( !v63 && (*((_BYTE *)v9 + 48) & 8) == 0 )
        xxxSetWindowPos(v9, 1, 0, 0, 0, 0, 25619);
      if ( (*(_BYTE *)(NextQueueWindow + 55) & 0xC0) != 0x40 )
      {
        v29 = *(_QWORD *)(NextQueueWindow + 192);
        if ( v29 )
          *(_DWORD *)(v29 + 40) |= 4u;
      }
      if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 384LL) )
        SetNewForegroundQueue(0LL);
      SetLastInputWoken(*(_QWORD *)(NextQueueWindow + 16), 0LL);
      if ( a2 == 9 )
        v27 = 18;
      xxxSetForegroundWindow2((LARGE_INTEGER *)NextQueueWindow, 0LL, v27, 0);
      if ( a2 == 9 && (*(_BYTE *)(NextQueueWindow + 55) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)NextQueueWindow, 0, 0, 0, 0, 0, 16387);
    }
LABEL_41:
    ThreadUnlock1(v13, v12);
    ThreadUnlock1(v31, v30);
    ThreadUnlock1(v33, v32);
    return;
  }
  if ( a2 != 27 )
    return;
LABEL_65:
  v9 = (struct tagWND *)a1[10];
  if ( v9 || (v9 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[7] + 408LL) + 8LL) + 16LL) + 96LL)) != 0LL )
  {
    NonChildAncestor = GetNonChildAncestor(a1[9]);
    v53 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v53;
    v54 = NonChildAncestor;
    if ( NonChildAncestor )
      ++*(_DWORD *)(NonChildAncestor + 8);
    v27 = 2;
    v55 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v55;
    v56 = v9;
    ++*((_DWORD *)v9 + 2);
    xxxSendTransformableMessageTimeout(v9, 31LL, 0LL, 0LL, 2, 100, &v61, 1, 0);
    NextQueueWindow = GetNextQueueWindow((__int64)v9, v5, 1);
    v59 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v59;
    v60 = NextQueueWindow;
    if ( NextQueueWindow )
      ++*(_DWORD *)(NextQueueWindow + 8);
    if ( (struct tagWND *)NextQueueWindow == v9 )
      goto LABEL_41;
    goto LABEL_23;
  }
}
