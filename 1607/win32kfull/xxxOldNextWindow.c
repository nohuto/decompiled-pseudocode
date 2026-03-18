/*
 * XREFs of xxxOldNextWindow @ 0x1C01F8E9C
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ThreadLockExchange @ 0x1C00777C4 (ThreadLockExchange.c)
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     xxxWaitMessageEx @ 0x1C00DF5E4 (xxxWaitMessageEx.c)
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01CBD0C (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxCallMsgFilter @ 0x1C01DDE44 (xxxCallMsgFilter.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F6C9C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F6CEC (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F7A6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F82AC (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F84C0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F866C (_GetNextQueueWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C01F8800 (xxxCancelCoolSwitch.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v15; // zf
  char v16; // al
  __int64 v17; // rdx
  _DWORD *Window; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  struct tagWND *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagWND *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int16 v30; // ax
  __int64 NextQueueWindow; // rax
  __int64 v32; // rcx
  struct tagWND *v33; // r14
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int16 v39; // ax
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int16 v43; // ax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  BOOL v51; // edi
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rbx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD v74[3]; // [rsp+98h] [rbp-80h] BYREF
  _QWORD v75[6]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v76; // [rsp+E0h] [rbp-38h] BYREF
  struct tagWND *v77; // [rsp+E8h] [rbp-30h]
  __int64 v78; // [rsp+F8h] [rbp-20h] BYREF
  __int64 v79; // [rsp+100h] [rbp-18h]
  _QWORD v80[3]; // [rsp+110h] [rbp-8h] BYREF
  _QWORD v81[4]; // [rsp+128h] [rbp+10h] BYREF
  struct tagSwitchWndInfo *v82; // [rsp+180h] [rbp+68h] BYREF

  v1 = a1;
  memset(v75, 0, sizeof(v75));
  result = gptiCurrent;
  v3 = 0;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 384LL);
  v4 = *(_QWORD *)(result + 88);
  if ( !v4 )
    return result;
  v74[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v74;
  v74[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  xxxCapture(gptiCurrent, (__int64 *)v4, 4);
  v75[2] = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    KeyState = GetKeyState(0x10u, v5, v6, v7);
    inited = (__int64)InitSwitchWndInfo(&v82, (struct tagWND *)v4, KeyState < 0);
    if ( v82 )
    {
      *((_DWORD *)v82 + 27) = 1;
      v80[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v80;
      v80[1] = inited;
      if ( inited )
        ++*(_DWORD *)(inited + 8);
      PushW32ThreadLock((__int64)&v82, v81, (__int64)RemoveSwitchWindowInfo, v7);
      if ( !PsGetCurrentProcessWin32Process(v11, v10)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12),
            v15 = (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) == 0,
            v16 = 1,
            v15) )
      {
        v16 = 0;
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
                 v16,
                 0LL);
      if ( gspwndAltTab )
        PostMessage((__int64)gspwndAltTab, 16LL, 0LL, 0LL);
      PopW32ThreadLock(v81, v17, v19, v20);
      HMAssignmentLock(&gspwndAltTab, Window);
      v23 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v76 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v76;
        v77 = v23;
        ++*((_DWORD *)v23 + 2);
        v27 = safe_cast_fnid_to_PSWITCHWND((__int64)v23);
        if ( v27 )
          *(_QWORD *)(v27 + 360) = v82;
        xxxShowSwitchWindow(v26);
        ThreadUnlock1(v29, v28);
      }
      else
      {
        RemoveSwitchWindowInfo(&v82, v21, v22);
      }
      inited = ThreadUnlock1(v25, v24);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v30 = GetKeyState(0x10u, v5, v6, v7);
    NextQueueWindow = GetNextQueueWindow(v4, v30 < 0, 1);
    inited = NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v3 = 1;
    v4 = NextQueueWindow;
    v32 = NextQueueWindow;
    goto LABEL_38;
  }
  v33 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v34 = 0LL;
    v76 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v76;
    v77 = v33;
    ++*((_DWORD *)v33 + 2);
    while ( 1 )
    {
      v82 = Getpswi(v33);
      if ( !v82 )
        goto LABEL_31;
      v39 = GetKeyState(0x10u, v35, v37, v38);
      v40 = xxxMoveSwitchWndHilite(v33, v82, v39 < 0);
      if ( v34 )
      {
        if ( v34 == v40 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v36, v35);
LABEL_37:
          v32 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v32, (__int64)v74);
          goto LABEL_39;
        }
      }
      else
      {
        v34 = v40;
      }
      LOBYTE(v35) = 1;
      inited = HMValidateHandleNoSecure(v40, v35, v41, v42);
      if ( inited )
        goto LABEL_31;
    }
  }
  v43 = GetKeyState(0x10u, v5, v6, v7);
  v44 = GetNextQueueWindow(v4, v43 < 0, 0);
  inited = v44;
  if ( v44 && v44 != v4 )
  {
    if ( (*(_BYTE *)(v4 + 48) & 8) == 0 )
    {
      v78 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v78;
      v79 = v44;
      ++*(_DWORD *)(v44 + 8);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 19);
      inited = ThreadUnlock1(v46, v45);
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
              v47 = *(_QWORD *)v4;
            else
              v47 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage((__int64)v75, 0LL, 0, 0, 2u, 0) )
              xxxWaitMessageEx(0x3CFFu, 0, 0LL);
            LOBYTE(v48) = 1;
            v4 = HMValidateHandleNoSecure(v47, v48, v49, v50);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
              ThreadLockExchange(v4, (__int64)v74);
            }
            if ( !(unsigned int)xxxCallMsgFilter((int *)v75, 6u) )
              break;
            xxxInternalGetMessage((__int64)v75, 0LL, v75[1], v75[1], 1u, 0);
          }
          if ( LODWORD(v75[1]) == 260 )
          {
            if ( !gspwndAltTab || LOWORD(v75[2]) == 9 || LOWORD(v75[2]) == 27 )
              goto LABEL_78;
            if ( LOWORD(v75[2]) != 16 )
              goto LABEL_53;
          }
          if ( LODWORD(v75[1]) > 0x202 )
          {
            if ( LODWORD(v75[1]) >= 0x204
              && (LODWORD(v75[1]) <= 0x205
               || LODWORD(v75[1]) > 0x206
               && (LODWORD(v75[1]) <= 0x208
                || LODWORD(v75[1]) > 0x20A && (LODWORD(v75[1]) <= 0x20C || LODWORD(v75[1]) == 786))) )
            {
              goto LABEL_53;
            }
            goto LABEL_107;
          }
          if ( LODWORD(v75[1]) >= 0x201 || LODWORD(v75[1]) == 75 )
            goto LABEL_53;
          if ( LODWORD(v75[1]) <= 0xFF )
            goto LABEL_107;
          if ( LODWORD(v75[1]) <= 0x101 )
            break;
          if ( LODWORD(v75[1]) == 260 )
          {
LABEL_78:
            LOWORD(v1) = v75[2];
            if ( LOWORD(v75[2]) != 9 && LOWORD(v75[2]) != 16 && LOWORD(v75[2]) != 27 )
              goto LABEL_55;
            if ( v4 )
              v58 = *(_QWORD *)v4;
            else
              v58 = 0LL;
            xxxInternalGetMessage((__int64)v75, 0LL, 0x104u, 0x104u, 1u, 0);
            LOBYTE(v59) = 1;
            v4 = HMValidateHandleNoSecure(v58, v59, v60, v61);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
              ThreadLockExchange(v4, (__int64)v74);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v75[1]) > 0x104 && (LODWORD(v75[1]) <= 0x106 || LODWORD(v75[1]) == 512) )
              break;
LABEL_107:
            if ( v4 )
              v65 = *(_QWORD *)v4;
            else
              v65 = 0LL;
            xxxInternalGetMessage((__int64)v75, 0LL, v75[1], v75[1], 1u, 0);
            xxxTranslateMessage((__int64)v75, 0LL, v66, v67);
            xxxDispatchMessage(v75, v68, v69, v70);
            LOBYTE(v71) = 1;
            v4 = HMValidateHandleNoSecure(v65, v71, v72, v73);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
              v32 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v57 = *(_QWORD *)v4;
        else
          v57 = 0LL;
        xxxInternalGetMessage((__int64)v75, 0LL, v75[1], v75[1], 1u, 0);
        LOBYTE(v62) = 1;
        v4 = HMValidateHandleNoSecure(v57, v62, v63, v64);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
          ThreadLockExchange(v4, (__int64)v74);
        }
        if ( ((LODWORD(v75[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v75[1]) == 256 )
          goto LABEL_53;
      }
      if ( LOWORD(v75[2]) != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_54;
    }
  }
  while ( LOWORD(v75[2]) != 27 );
  if ( gspwndAltTab )
  {
LABEL_53:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
    ThreadLockExchange(v4, (__int64)v74);
LABEL_54:
    v3 = 0;
    goto LABEL_55;
  }
  v3 = 1;
LABEL_55:
  xxxReleaseCapture();
  v51 = gspwndAltTab != 0LL;
  if ( v3 == 1 )
  {
    if ( gpqForeground )
    {
      v52 = *(_QWORD *)(gpqForeground + 88LL);
      if ( v52 )
      {
        if ( v52 != v4 )
        {
          v78 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v78;
          v79 = v52;
          ++*(_DWORD *)(v52 + 8);
          xxxSetWindowPos((struct tagWND *)v52, 1LL, 0LL, 0LL, 0, 0, 19);
          ThreadUnlock1(v54, v53);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindow((struct tagWND *)v4, 0);
    if ( (*(_BYTE *)(v4 + 55) & 0x20) != 0 && !v3 )
    {
      if ( v51 )
        PostMessage(v4, 274LL, 61728LL, 0LL);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v56, v55);
}
