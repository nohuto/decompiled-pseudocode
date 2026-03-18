/*
 * XREFs of xxxSysCommand @ 0x1C012ABE4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0F0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     _PostThreadMessage @ 0x1C0057CD8 (_PostThreadMessage.c)
 *     IsWindowDestroyed @ 0x1C0065CFC (IsWindowDestroyed.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 *     PlayEventSound @ 0x1C010F740 (PlayEventSound.c)
 *     xxxUnlockMenuState @ 0x1C012CFD0 (xxxUnlockMenuState.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013ECC4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxMNEndMenuState @ 0x1C0142C80 (xxxMNEndMenuState.c)
 *     xxxIsDragging @ 0x1C0150E5C (xxxIsDragging.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxMNStartMenuState @ 0x1C01F4A64 (xxxMNStartMenuState.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01F9864 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F99A8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C01F9A78 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C01F9AA0 (MoveWithArrangementAllowed.c)
 *     StartScreenSaver @ 0x1C01F9AF0 (StartScreenSaver.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 *     xxxShowWindow @ 0x1C0224DE0 (xxxShowWindow.c)
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C02354DC (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r15
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // esi
  int v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // esi
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  int *v26; // rcx
  struct tagMENUSTATE *v27; // rax
  struct tagMENUSTATE *v28; // rdi
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagWND *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // ecx
  _DWORD *v67; // rcx
  int v68; // r8d
  __int64 v69; // rsi
  struct tagMENUSTATE *v70; // rax
  struct tagMENUSTATE *v71; // rsi
  _DWORD **v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  _DWORD *ThreadDesktopWindow; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  struct tagPOPUPMENU *v78; // rcx
  __int64 v79; // [rsp+50h] [rbp-49h] BYREF
  int v80; // [rsp+58h] [rbp-41h] BYREF
  __int64 v81; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v82[3]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v83[3]; // [rsp+80h] [rbp-19h] BYREF
  int v84; // [rsp+98h] [rbp-1h] BYREF
  __int64 v85; // [rsp+A0h] [rbp+7h]
  int v86; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v87; // [rsp+B0h] [rbp+17h]

  v3 = *((_QWORD *)a1 + 2);
  v4 = a2 & 0xF;
  v5 = a3;
  v6 = a2 - v4;
  if ( a3 == 0x10000 )
    v5 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 384) + 72LL) || (*((_BYTE *)a1 + 55) & 8) != 0)
    && a1 != gspwndFullScreen
    && (((v6 - 61744) & 0xFFFFFFAF) != 0 || v6 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8u, v6, (int *)(unsigned int)v5, 5u)
    || IsWindowDestroyed((__int64)a1) )
  {
    return;
  }
  if ( v6 <= 0xF090 )
  {
    if ( v6 != 61584 )
    {
      v11 = v6 - 61440;
      if ( v11 )
      {
        v12 = v11 - 16;
        if ( v12 )
        {
          v13 = v12 - 16;
          if ( v13 )
          {
            v14 = v13 - 16;
            if ( v14 )
            {
              v15 = v14 - 16;
              if ( v15 && (v16 = v15 - 16) != 0 )
              {
                v17 = v16 - 16;
                if ( v17 )
                {
                  v18 = v17 - 16;
                  if ( !v18 || v18 == 16 )
                  {
                    GetKeyState(0x10u, 61440LL, v9, v10);
                    xxxSBTrackInit(a1, v5);
                  }
                }
                else
                {
                  xxxSendMessage(a1, 0x10u, 0LL, 0LL);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v5);
              }
              return;
            }
            v19 = 3;
            if ( (*((_BYTE *)a1 + 55) & 1) != 0 )
              return;
            v20 = 12;
          }
          else
          {
            v19 = 6;
            if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 )
              return;
            v20 = 11;
          }
LABEL_113:
          PlayEventSound(v20);
          xxxShowWindow(a1, v19 | gdwPUDFlags & 0x10000u);
          return;
        }
        v21 = *(unsigned __int16 *)(gptiCurrent + 676LL) | (*(unsigned __int16 *)(gptiCurrent + 680LL) << 16);
        LODWORD(v79) = *(__int16 *)(gptiCurrent + 676LL);
        HIDWORD(v79) = SHIWORD(v21);
        if ( v4 && (!word_1C0328C90 || qword_1C0328C98 != v3) && !(unsigned int)xxxIsDragging(a1, v79) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          v22 = *((_BYTE *)a1 + 55);
          if ( (v22 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(a1, 274LL, 61696LL, (v22 & 0x40) != 0 ? 45 : 32, 0, 0, 0LL, 1, 0);
          }
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          LODWORD(v23) = 10 - (v4 != 0);
          goto LABEL_37;
        }
        if ( (*((_BYTE *)a1 + 54) & 4) != 0
          && (*((_BYTE *)a1 + 55) & 1) != 0
          && !(unsigned int)DragOperationFromMaximizedAllowed(a1) )
        {
          return;
        }
        v24 = v21;
        v23 = 10 - (unsigned int)(v4 != 0);
      }
      else
      {
        if ( v4 > 0xA )
          return;
        v25 = ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61440);
        v23 = v4;
        if ( v25 )
        {
LABEL_37:
          DelegateMoveSizeToShell(a1, v23);
          return;
        }
        v24 = *(unsigned __int16 *)(gptiCurrent + 676LL) | (*(unsigned __int16 *)(gptiCurrent + 680LL) << 16);
      }
      xxxMoveSize(a1, v23, v24);
      return;
    }
    goto LABEL_63;
  }
  switch ( v6 )
  {
    case 0xF100u:
      v70 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v5);
      v71 = v70;
      if ( !v70 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v81, v70);
      **v72 |= 0x80000000;
      if ( gspwndFullScreen == a1 )
      {
        ThreadDesktopWindow = (_DWORD *)GetThreadDesktopWindow(0LL, (__int64)v72, v73, v74);
        v83[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v83;
        v83[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          ++ThreadDesktopWindow[2];
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v77, v76);
      }
      v78 = *(struct tagPOPUPMENU **)v71;
      *((_DWORD *)v71 + 2) |= 0x20u;
      xxxMNKeyFilter(v78);
      if ( (*((_DWORD *)v71 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v71);
      v30 = v81;
LABEL_122:
      if ( v30 )
        xxxUnlockMenuState(v30);
      return;
    case 0xF120u:
      v19 = 9;
      if ( (*((_BYTE *)a1 + 55) & 0x21) == 1 )
      {
        MoveWithArrangementAllowed(a1);
        v20 = 10;
      }
      else
      {
        v20 = 9;
      }
      goto LABEL_113;
    case 0xF130u:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v42, v41, v43, v44) & 0xF) != 0 )
          goto LABEL_83;
      }
      else if ( !IsDPIDWMSysMet(v42)
             || (W32GetCurrentThreadDpiAwarenessContext(v57, v56, v58, v59) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 408)
               ? (v66 = 0)
               : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v63,
                                                              v64,
                                                              v65)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v66) )
      {
LABEL_83:
        if ( IsDPIDWMSysMet(0x38uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v46, v45, v47, v48) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 408)
            ? (v55 = 0)
            : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v52,
                                                           v53,
                                                           v54)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v55) )
        {
          v67 = (_DWORD *)(gpsi + 2880LL);
        }
        else
        {
          v67 = (_DWORD *)(gpsi + 2104LL);
        }
        goto LABEL_98;
      }
      v67 = (_DWORD *)(gpsi + 2492LL);
LABEL_98:
      if ( (*v67 & 8) == 0
        || (v68 = (*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) == 0
        && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
      {
        if ( gptiTasklist )
        {
          SetLastInputWoken(gptiTasklist, 0LL);
          PostThreadMessage(gptiTasklist);
        }
        return;
      }
      if ( v68 )
        xxxCallHook(7u, *(_QWORD *)a1, 0LL, 0xAu);
      v69 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL);
      if ( !v69 )
        return;
      SetLastInputWoken(*(_QWORD *)(v69 + 16), 0LL);
      if ( v5 == 0xFFFFFFFFLL )
        v39 = -1LL;
      else
        v39 = *(_QWORD *)a1;
      v37 = 7LL;
      v40 = v69;
      v38 = *(unsigned int *)(gpsi + 912LL);
LABEL_79:
      PostMessage(v40, v38, v37, v39);
      return;
    case 0xF140u:
      LOBYTE(v8) = 1;
      v36 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, v8, v9, v10);
      if ( !v36 || a1 == v36 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v37 = 61760LL;
      v38 = 274LL;
      v39 = (*gpsi >> 9) & 1;
      v40 = (__int64)v36;
      goto LABEL_79;
    case 0xF150u:
      v31 = ValidateHwnd(v5);
      v32 = v31;
      if ( v31 )
      {
        v33 = *(_QWORD *)(v31 + 240);
        if ( !v33 )
          v33 = v32;
        if ( v33 )
          v32 = v33;
        v82[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v82;
        v82[1] = v32;
        ++*(_DWORD *)(v32 + 8);
        xxxSetForegroundWindow((struct tagWND *)v32, 0);
        if ( (*(_BYTE *)(v32 + 55) & 0x20) != 0 )
          PostMessage(v32, 274LL, 61728LL, 0LL);
        ThreadUnlock1(v35, v34);
      }
      break;
    case 0xF160u:
LABEL_63:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != gpqForeground )
        return;
      v27 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v6, v5);
      v28 = v27;
      if ( !v27 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v79, v27);
      *(_DWORD *)*v29 |= 0x80000000;
      xxxMNLoop(*v29, v29, v5, v6 == 61792);
      if ( (*((_DWORD *)v28 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v28);
      v30 = v79;
      goto LABEL_122;
    case 0xF170u:
      if ( v5 == -1 )
      {
        v86 = 4;
        v26 = &v86;
        v87 = 3LL;
      }
      else
      {
        if ( v5 != 2 )
          return;
        v84 = 5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v80) )
          v85 = v80;
        else
          v85 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v26 = &v84;
      }
      QueuePowerRequest(v26, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
