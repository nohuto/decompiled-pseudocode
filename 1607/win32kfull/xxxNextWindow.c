/*
 * XREFs of xxxNextWindow @ 0x1C01F8858
 * Callers:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     _GetAsyncKeyState @ 0x1C00A98E8 (_GetAsyncKeyState.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     SetNewForegroundQueue @ 0x1C00DC330 (SetNewForegroundQueue.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01CBD0C (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F6C9C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F6CEC (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F7A6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F82AC (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F84C0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F866C (_GetNextQueueWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C01F8800 (xxxCancelCoolSwitch.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 NextQueueWindow; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v27; // zf
  char v28; // al
  _DWORD *Window; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int8 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  struct tagWND *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct tagWND *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // r13
  struct tagSwitchWndInfo *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r15
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-80h] BYREF
  __int64 v61; // [rsp+98h] [rbp-78h] BYREF
  struct tagWND *v62; // [rsp+A0h] [rbp-70h]
  __int64 v63; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-58h]
  __int64 v65; // [rsp+C8h] [rbp-48h] BYREF
  struct tagWND *v66; // [rsp+D0h] [rbp-40h]
  __int64 v67; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-28h]
  _QWORD v69[11]; // [rsp+F8h] [rbp-18h] BYREF
  BOOL v70; // [rsp+160h] [rbp+50h]
  struct tagSwitchWndInfo *v72; // [rsp+170h] [rbp+60h] BYREF
  _DWORD *v73; // [rsp+178h] [rbp+68h]

  if ( !a1 )
    return;
  v3 = 0LL;
  v70 = (GetAsyncKeyState(0x10u) & 0x8000u) != 0LL;
  NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 80));
  if ( a2 == 9 )
  {
    v6 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v50 = 0LL;
      v69[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v69;
      v69[1] = v6;
      ++*((_DWORD *)v6 + 2);
      while ( 1 )
      {
        v51 = Getpswi(v6);
        v72 = v51;
        if ( !v51 )
        {
          ThreadUnlock1(v53, v52);
          goto LABEL_65;
        }
        v54 = xxxMoveSwitchWndHilite(v6, v51, v70);
        if ( v50 )
        {
          if ( v50 == v54 )
          {
            v59 = 0LL;
LABEL_62:
            ThreadUnlock1(v56, v55);
            HMAssignmentLock(&gspwndActivate, v59);
            if ( !gspwndActivate )
              xxxCancelCoolSwitch();
            return;
          }
        }
        else
        {
          v50 = v54;
        }
        LOBYTE(v55) = 1;
        v59 = HMValidateHandleNoSecure(v54, v55, v57, v58);
        if ( v59 )
          goto LABEL_62;
      }
    }
    v7 = *(_QWORD *)(a1 + 88);
    gLangToggleKeyState = 8;
    gwMouseOwnerButton = 0;
    HMAssignmentLock(&gspwndActivate, v7);
    if ( !gspwndActivate )
    {
      HMAssignmentLock(&gspwndActivate, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) + 96LL));
      if ( !gspwndActivate )
        return;
    }
    v63 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v63;
    v64 = NonChildAncestor;
    if ( NonChildAncestor )
      ++*(_DWORD *)(NonChildAncestor + 8);
    v8 = gspwndActivate;
    v65 = *(_QWORD *)(gptiCurrent + 368LL);
    v9 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 368LL) = &v65;
    v66 = v9;
    ++*((_DWORD *)v9 + 2);
    xxxSendTransformableMessageTimeout(v9, 31LL, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1, 0);
    inited = InitSwitchWndInfo(&v72, v8, v70);
    v14 = *(_QWORD *)(gptiCurrent + 368LL);
    NextQueueWindow = (__int64)inited;
    v67 = v14;
    *(_QWORD *)(gptiCurrent + 368LL) = &v67;
    v68 = (__int64)inited;
    if ( inited )
      ++*((_DWORD *)inited + 2);
    if ( v72 )
    {
      if ( !inited )
      {
        RemoveSwitchWindowInfo(&v72, v11, v12);
        ThreadUnlock1(v17, v16);
        ThreadUnlock1(v19, v18);
        ThreadUnlock1(v21, v20);
        HMAssignmentUnlock(&gspwndActivate);
        return;
      }
      PushW32ThreadLock((__int64)&v72, v69, (__int64)RemoveSwitchWindowInfo, v13);
      *((_DWORD *)v72 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v23, v22)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25, v24),
            v27 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v28 = 1,
            v27) )
      {
        v28 = 0;
      }
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 32771LL,
                 0LL,
                 -2004877312,
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
                 v28,
                 0LL);
      v73 = Window;
      if ( gspwndAltTab )
      {
        PostMessage((__int64)gspwndAltTab, 16LL, 0LL, 0LL);
        Window = v73;
      }
      HMAssignmentLock(&gspwndAltTab, Window);
      PopW32ThreadLock(v69, v30, v31, v32);
      if ( gspwndAltTab )
      {
        v42 = safe_cast_fnid_to_PSWITCHWND((__int64)gspwndAltTab);
        if ( v42 )
          *(_QWORD *)(v42 + 360) = v72;
        HMAssignmentLock(&gspwndActivate, NextQueueWindow);
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
        v43 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        if ( gspwndFullScreen != (struct tagWND *)v43 )
        {
          v61 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v61;
          v62 = (struct tagWND *)v43;
          if ( v43 )
            ++*(_DWORD *)(v43 + 8);
          v44 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
          if ( v44 )
            v3 = *(struct _LARGE_STRING **)v44;
          xxxSendNotifyMessage(v44, 0x3Au, 2LL, v3, 1);
          ThreadUnlock1(v46, v45);
        }
        v47 = gspwndAltTab;
        v61 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v61;
        v62 = v47;
        ++*((_DWORD *)v47 + 2);
        xxxShowSwitchWindow(v47);
        ThreadUnlock1(v49, v48);
        goto LABEL_41;
      }
      RemoveSwitchWindowInfo(&v72, v33, v34);
    }
    v35 = 2;
LABEL_23:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(NonChildAncestor + 55) & 0xC0) != 0x40 )
        {
          v36 = *(_QWORD *)(NonChildAncestor + 192);
          if ( v36 )
            *(_DWORD *)(v36 + 40) &= ~4u;
        }
      }
      if ( !v70 && (*((_BYTE *)v8 + 48) & 8) == 0 )
        xxxSetWindowPos(v8, 1LL, 0LL, 0LL, 0, 0, 19);
      if ( (*(_BYTE *)(NextQueueWindow + 55) & 0xC0) != 0x40 )
      {
        v37 = *(_QWORD *)(NextQueueWindow + 192);
        if ( v37 )
          *(_DWORD *)(v37 + 40) |= 4u;
      }
      if ( gpqForeground == *(_QWORD *)(*(_QWORD *)(NextQueueWindow + 16) + 384LL) )
        SetNewForegroundQueue(0LL);
      SetLastInputWoken(*(_QWORD *)(NextQueueWindow + 16), 0LL);
      if ( a2 == 9 )
        v35 = 18;
      xxxSetForegroundWindow2((LARGE_INTEGER *)NextQueueWindow, 0LL, v35, 0);
      if ( a2 == 9 && (*(_BYTE *)(NextQueueWindow + 55) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 3);
    }
LABEL_41:
    ThreadUnlock1(v14, v11);
    ThreadUnlock1(v39, v38);
    ThreadUnlock1(v41, v40);
    return;
  }
  if ( a2 != 27 )
    return;
LABEL_65:
  if ( (*(_DWORD *)(a1 + 340) & 0x4000000) == 0 )
  {
    v8 = *(struct tagWND **)(a1 + 88);
    if ( v8
      || (v8 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 408LL) + 8LL) + 16LL)
                                 + 96LL)) != 0LL )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 80));
      v63 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v63;
      v64 = NonChildAncestor;
      if ( NonChildAncestor )
        ++*(_DWORD *)(NonChildAncestor + 8);
      v35 = 2;
      v65 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v65;
      v66 = v8;
      ++*((_DWORD *)v8 + 2);
      xxxSendTransformableMessageTimeout(v8, 31LL, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v8, v70, 1);
      v67 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v67;
      v68 = NextQueueWindow;
      if ( NextQueueWindow )
        ++*(_DWORD *)(NextQueueWindow + 8);
      if ( (struct tagWND *)NextQueueWindow == v8 )
        goto LABEL_41;
      goto LABEL_23;
    }
  }
}
