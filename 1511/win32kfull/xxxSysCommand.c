/*
 * XREFs of xxxSysCommand @ 0x1C0109460
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206D70 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     _PostThreadMessage @ 0x1C0065710 (_PostThreadMessage.c)
 *     GetThreadDesktopWindow @ 0x1C006E690 (GetThreadDesktopWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     PlayEventSound @ 0x1C00F0C20 (PlayEventSound.c)
 *     xxxUnlockMenuState @ 0x1C010B940 (xxxUnlockMenuState.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013777C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxMNEndMenuState @ 0x1C01377F0 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxIsDragging @ 0x1C014C940 (xxxIsDragging.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxMNStartMenuState @ 0x1C01FD458 (xxxMNStartMenuState.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0202548 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C020268C (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C020275C (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C0202784 (MoveWithArrangementAllowed.c)
 *     StartScreenSaver @ 0x1C02027E0 (StartScreenSaver.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 *     xxxShowWindow @ 0x1C022422C (xxxShowWindow.c)
 *     xxxSBTrackInit @ 0x1C0233E10 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C023DB04 (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r15
  unsigned int v6; // esi
  unsigned int v8; // esi
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  int v16; // esi
  unsigned int v17; // ecx
  unsigned int v18; // esi
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  int *v23; // rcx
  struct tagMENUSTATE *v24; // rax
  struct tagMENUSTATE *v25; // rdi
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagWND *v35; // rax
  unsigned __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // ecx
  _DWORD *v47; // rcx
  int v48; // r8d
  __int64 v49; // rsi
  struct tagMENUSTATE *v50; // rax
  struct tagMENUSTATE *v51; // rsi
  _DWORD **v52; // rdx
  _DWORD *ThreadDesktopWindow; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct tagPOPUPMENU *v56; // rcx
  __int64 v57; // [rsp+50h] [rbp-49h] BYREF
  int v58; // [rsp+58h] [rbp-41h] BYREF
  __int64 v59; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v60[3]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v61[3]; // [rsp+80h] [rbp-19h] BYREF
  int v62; // [rsp+98h] [rbp-1h] BYREF
  __int64 v63; // [rsp+A0h] [rbp+7h]
  int v64; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v65; // [rsp+B0h] [rbp+17h]

  v3 = *((_QWORD *)a1 + 2);
  v4 = a2 & 0xF;
  v5 = a3;
  v6 = a2 - v4;
  if ( a3 == 0x10000 )
    v5 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 384) + 64LL) || (*((_BYTE *)a1 + 55) & 8) != 0)
    && a1 != gspwndFullScreen
    && (((v6 - 61744) & 0xFFFFFFAF) != 0 || v6 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8u, v6, (unsigned int)v5, 5u) )
  {
    return;
  }
  if ( v6 <= 0xF090 )
  {
    if ( v6 != 61584 )
    {
      v8 = v6 - 61440;
      if ( v8 )
      {
        v9 = v8 - 16;
        if ( v9 )
        {
          v10 = v9 - 16;
          if ( v10 )
          {
            v11 = v10 - 16;
            if ( v11 )
            {
              v12 = v11 - 16;
              if ( v12 && (v13 = v12 - 16) != 0 )
              {
                v14 = v13 - 16;
                if ( v14 )
                {
                  v15 = v14 - 16;
                  if ( !v15 || v15 == 16 )
                  {
                    GetKeyState(0x10u);
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
            v16 = 3;
            if ( (*((_BYTE *)a1 + 55) & 1) != 0 )
              return;
            v17 = 12;
          }
          else
          {
            v16 = 6;
            if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 )
              return;
            v17 = 11;
          }
LABEL_114:
          PlayEventSound(v17);
          xxxShowWindow(a1, v16 | gdwPUDFlags & 0x10000u);
          return;
        }
        v18 = *(unsigned __int16 *)(gptiCurrent + 676LL) | (*(unsigned __int16 *)(gptiCurrent + 680LL) << 16);
        LODWORD(v57) = *(__int16 *)(gptiCurrent + 676LL);
        HIDWORD(v57) = SHIWORD(v18);
        if ( v4 && (!word_1C03235F0 || qword_1C03235F8 != v3) && !(unsigned int)xxxIsDragging(a1, v57) )
        {
          xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 3);
          v19 = *((_BYTE *)a1 + 55);
          if ( (v19 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(a1, 274LL, 0xF100uLL, (v19 & 0x40) != 0 ? 45 : 32, 0, 0, 0LL, 1, 0);
          }
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          LODWORD(v20) = 10 - (v4 != 0);
          goto LABEL_36;
        }
        if ( (*((_BYTE *)a1 + 54) & 4) != 0
          && (*((_BYTE *)a1 + 55) & 1) != 0
          && !(unsigned int)DragOperationFromMaximizedAllowed(a1) )
        {
          return;
        }
        v21 = v18;
        v20 = 10 - (unsigned int)(v4 != 0);
      }
      else
      {
        if ( v4 > 0xA )
          return;
        v22 = ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61440);
        v20 = v4;
        if ( v22 )
        {
LABEL_36:
          DelegateMoveSizeToShell(a1, v20);
          return;
        }
        v21 = *(unsigned __int16 *)(gptiCurrent + 676LL) | (*(unsigned __int16 *)(gptiCurrent + 680LL) << 16);
      }
      xxxMoveSize(a1, v20, v21);
      return;
    }
    goto LABEL_62;
  }
  switch ( v6 )
  {
    case 0xF100u:
      v50 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v5);
      v51 = v50;
      if ( !v50 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v59, v50);
      **v52 |= 0x80000000;
      if ( gspwndFullScreen == a1 )
      {
        ThreadDesktopWindow = (_DWORD *)GetThreadDesktopWindow(0LL);
        v60[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v60;
        v60[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          ++ThreadDesktopWindow[2];
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v55, v54);
      }
      v56 = *(struct tagPOPUPMENU **)v51;
      *((_DWORD *)v51 + 2) |= 0x20u;
      xxxMNKeyFilter(v56);
      if ( (*((_DWORD *)v51 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v51);
      v27 = v59;
LABEL_123:
      if ( v27 )
        xxxUnlockMenuState();
      return;
    case 0xF120u:
      v16 = 9;
      if ( (*((_BYTE *)a1 + 55) & 0x21) == 1 )
      {
        MoveWithArrangementAllowed(a1);
        v17 = 10;
      }
      else
      {
        v17 = 9;
      }
      goto LABEL_114;
    case 0xF130u:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0 )
        {
          goto LABEL_83;
        }
      }
      else if ( !IsDPIDWMSysMet(v40)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v46 = 0)
               : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v46) )
      {
LABEL_83:
        if ( IsDPIDWMSysMet(0x38uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v43 = 0)
            : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v43) )
        {
          v47 = (_DWORD *)(gpsi + 2880LL);
        }
        else
        {
          v47 = (_DWORD *)(gpsi + 2104LL);
        }
        goto LABEL_99;
      }
      v47 = (_DWORD *)(gpsi + 2492LL);
LABEL_99:
      if ( (*v47 & 8) == 0
        || (v48 = (*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) == 0
        && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
      {
        if ( gptiTasklist )
        {
          SetLastInputWoken(gptiTasklist, 0LL);
          PostThreadMessage(gptiTasklist, 0x112u, 0xF130uLL, 0LL);
        }
        return;
      }
      if ( v48 )
        xxxCallHook(7u, *(_QWORD *)a1, 0LL, 0xAu);
      v49 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL);
      if ( !v49 )
        return;
      SetLastInputWoken(*(_QWORD *)(v49 + 16), 0LL);
      if ( v5 == 0xFFFFFFFFLL )
        v38 = -1LL;
      else
        v38 = *(_QWORD *)a1;
      v36 = 7LL;
      v39 = v49;
      v37 = *(unsigned int *)(gpsi + 912LL);
LABEL_78:
      PostMessage(v39, v37, v36, v38);
      return;
    case 0xF140u:
      v35 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, 1);
      if ( !v35 || a1 == v35 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v36 = 61760LL;
      v37 = 274LL;
      v38 = (*gpsi >> 9) & 1;
      v39 = (__int64)v35;
      goto LABEL_78;
    case 0xF150u:
      v28 = ValidateHwnd(v5);
      v31 = v28;
      if ( v28 )
      {
        v32 = *(_QWORD *)(v28 + 240);
        if ( !v32 )
          v32 = v31;
        if ( v32 )
          v31 = v32;
        v61[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v61;
        v61[1] = v31;
        ++*(_DWORD *)(v31 + 8);
        xxxSetForegroundWindow((struct tagWND *)v31, 0LL, v29, v30);
        if ( (*(_BYTE *)(v31 + 55) & 0x20) != 0 )
          PostMessage(v31, 274LL, 0xF120uLL, 0LL);
        ThreadUnlock1(v34, v33);
      }
      break;
    case 0xF160u:
LABEL_62:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != gpqForeground )
        return;
      v24 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v6, v5);
      v25 = v24;
      if ( !v24 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v57, v24);
      *(_DWORD *)*v26 |= 0x80000000;
      xxxMNLoop(*v26, v26, v5, v6 == 61792);
      if ( (*((_DWORD *)v25 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v25);
      v27 = v57;
      goto LABEL_123;
    case 0xF170u:
      if ( v5 == -1 )
      {
        v64 = 4;
        v23 = &v64;
        v65 = 3LL;
      }
      else
      {
        if ( v5 != 2 )
          return;
        v62 = 5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v58) )
          v63 = v58;
        else
          v63 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v23 = &v62;
      }
      QueuePowerRequest(v23, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
