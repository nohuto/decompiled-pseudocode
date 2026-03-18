/*
 * XREFs of xxxMinMaximizeEx @ 0x1C003E778
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C00FE300 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206950 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209AF0 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020A7DC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     NtUserMinMaximize @ 0x1C021E5C0 (NtUserMinMaximize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     SetMinimize @ 0x1C003F74C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C003F7A8 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C003F8D8 (ParkIcon.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C003FB28 (DwmAsyncNotifyAnimationChange.c)
 *     DwmSyncNotifyMinimizing @ 0x1C003FBB4 (DwmSyncNotifyMinimizing.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C004061C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 *     CheckForegroundRight @ 0x1C0045328 (CheckForegroundRight.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     ClrFTrueVis @ 0x1C008101C (ClrFTrueVis.c)
 *     _DeferWindowPos @ 0x1C00851D8 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C008537C (InternalBeginDeferWindowPos.c)
 *     CkptRestore @ 0x1C0085C30 (CkptRestore.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     IsThreadDesktopComposed @ 0x1C008BBD0 (IsThreadDesktopComposed.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     xxxSendMinRectMessages @ 0x1C00F95D8 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     xxxFlushPalette @ 0x1C0215780 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4, _OWORD *a5)
{
  int v5; // esi
  __int64 v8; // r15
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  void *v13; // rax
  _OWORD *Prop; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // r10
  unsigned int v18; // r11d
  _OWORD *v19; // rdi
  int v20; // eax
  __int128 v21; // xmm7
  __int128 v22; // xmm6
  unsigned int v23; // r14d
  void *v24; // rax
  int v26; // r12d
  int v27; // ecx
  int v28; // r13d
  __int64 v29; // rcx
  char v30; // al
  int v31; // r15d
  char v32; // al
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  char v36; // al
  char v37; // r15
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // r14
  int v42; // eax
  __int64 i; // rcx
  __int64 v44; // rcx
  char v45; // cl
  unsigned int v46; // eax
  int v47; // r15d
  char v48; // cl
  __int64 j; // rdi
  __int64 DesktopWindow; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // edi
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // ecx
  _DWORD *v61; // rcx
  __int64 v62; // rdi
  char v63; // cl
  __int64 v64; // rax
  __int64 v65; // rcx
  char v66; // r8
  int v67; // r9d
  __int128 v68; // xmm6
  int v69; // ecx
  struct tagWND *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // ecx
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // ecx
  _DWORD *v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // rdi
  int v81; // r8d
  char v82; // [rsp+58h] [rbp-B0h]
  BOOL v83; // [rsp+64h] [rbp-A4h]
  __int128 v84; // [rsp+68h] [rbp-A0h]
  unsigned int v85; // [rsp+78h] [rbp-90h]
  BOOL v86; // [rsp+80h] [rbp-88h]
  BOOL v87; // [rsp+88h] [rbp-80h]
  unsigned int v88; // [rsp+8Ch] [rbp-7Ch]
  int v89; // [rsp+94h] [rbp-74h]
  int v90; // [rsp+98h] [rbp-70h]
  int v91; // [rsp+9Ch] [rbp-6Ch]
  __int64 v92; // [rsp+A0h] [rbp-68h]
  _QWORD v93[3]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v94[3]; // [rsp+C0h] [rbp-48h] BYREF
  int v95; // [rsp+D8h] [rbp-30h] BYREF
  int v96; // [rsp+E0h] [rbp-28h]
  struct tagRECT v97; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v98[5]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = 0;
  v82 = a3;
  v85 = a2;
  v84 = 0LL;
  v90 = 0;
  v91 = 0;
  v87 = 0;
  v86 = 0;
  v83 = 0;
  v92 = 0LL;
  memset(v98, 0, sizeof(v98));
  v8 = *((_QWORD *)a1 + 11);
  v9 = ((unsigned __int8)a3 >> 5) & 1;
  v88 = 0;
  v89 = 1;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 392LL),
      24,
      (_DWORD)a1,
      0,
      a2,
      a3 & 0xFFFDFFFF,
      0LL);
    return 0LL;
  }
  if ( (a3 & 0x80u) != 0 )
    v5 = 0x200000;
  if ( (a3 & 0x40) != 0 )
    v5 |= 0x10u;
  if ( (a3 & 0x100) != 0 )
    v5 |= 4u;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v12 = v11;
    LODWORD(v11) = v11 & 0xFFFEFFFF;
    v82 = v11;
    v89 = v12 & 0x10000;
    if ( (v12 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1, v10, v11) )
      {
        v13 = (void *)ReferenceDwmApiPort();
        DwmAsyncNotifyAnimationChange(v13);
      }
    }
  }
  GetRect(a1, &v95, 66LL);
  if ( (v82 & 4) != 0 )
  {
    Prop = (_OWORD *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
  }
  else
  {
    Prop = (_OWORD *)CkptRestore(a1, &v95);
    v17 = v82;
    v18 = 1;
  }
  v19 = Prop;
  if ( !Prop )
    goto LABEL_28;
  if ( a5 && (v17 & 8) != 0 )
    *Prop = *a5;
  if ( (*(_BYTE *)(v8 + 50) & 0x40) != 0 && (*((_BYTE *)a1 + 55) & 0x40) == 0 )
  {
    v20 = *(_DWORD *)(v8 + 120) - v96;
    v96 = *(_DWORD *)(v8 + 120) - v95;
    v95 = v20;
    v88 = v18;
  }
  v21 = *v19;
  if ( v9 )
    v22 = *a5;
  else
    v22 = *(_OWORD *)((char *)v19 + 36);
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 608LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x40) != 0 )
  {
    v23 = v85;
    if ( (unsigned int)xxxCallHook(v18, *(_QWORD *)a1, v85) )
      goto LABEL_28;
  }
  else
  {
    v23 = v85;
  }
  if ( v23 == 204 )
  {
    v5 |= 0x14u;
    v23 = ((v19[2] & 4) != 0) + 1;
    v85 = v23;
  }
  v15 = 63745LL;
  if ( v23 == 1 )
    goto LABEL_74;
  if ( v23 == 2 )
    goto LABEL_54;
  if ( v23 != 3 )
  {
    if ( v23 == 4 )
    {
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 80LL) )
        v5 |= 0x10u;
LABEL_61:
      v32 = *((_BYTE *)a1 + 55);
      if ( (v32 & 0x20) == 0 && ((v32 & 1) == 0 || !v9) )
      {
        v23 = 1;
        SetOrClrWF(0LL, a1, 63745LL, 1LL);
        SetOrClrWF(0LL, a1, 63746LL, 1LL);
        v33 = 64257LL;
        v34 = 0LL;
        goto LABEL_65;
      }
      v35 = *((_DWORD *)v19 + 8);
      if ( (v35 & 2) == 0 )
      {
        if ( (v35 & 0x60) == 0x60 )
        {
          v23 = 12;
          goto LABEL_74;
        }
        if ( (v35 & 0x20) != 0 )
        {
          v23 = 14;
          goto LABEL_74;
        }
        if ( (v35 & 0x40) != 0 )
        {
          v23 = 13;
          goto LABEL_74;
        }
        v23 = 1;
        SetOrClrWF(0LL, a1, 63745LL, 1LL);
        v33 = 63746LL;
        v34 = 1LL;
LABEL_65:
        SetOrClrWF(0LL, a1, v33, v34);
LABEL_74:
        v38 = *((_BYTE *)a1 + 55);
        if ( (v38 & 0x21) != 0 )
          v5 |= 0x8000u;
        v37 = v82;
        v86 = (v38 & 1) != 0;
        goto LABEL_77;
      }
      v23 = 3;
      goto LABEL_68;
    }
    if ( v23 <= 5 )
    {
LABEL_42:
      v26 = 0;
      v27 = 0;
      v28 = 0;
LABEL_189:
      v31 = 0;
LABEL_190:
      if ( (v82 & 1) != 0 )
        goto LABEL_210;
      if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
      {
        v5 |= 0x40u;
        goto LABEL_210;
      }
      if ( v27 )
        v5 |= 0x40u;
      if ( !(unsigned int)IsVisible(a1, v15)
        || (v67 & 0x10000) == 0
        || !v26
        || (v66 & 0x40) != 0 && (*((_BYTE *)a1 + 47) & 0x10) != 0 )
      {
LABEL_210:
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 || !v83 )
        {
LABEL_236:
          v80 = InternalBeginDeferWindowPos(1LL, v15);
          if ( v80 )
          {
            if ( v92 )
            {
              LOBYTE(v15) = 1;
              v81 = HMValidateHandleNoSecure(v92, v15);
            }
            else
            {
              v81 = 0;
            }
            v16 = DeferWindowPos(
                    v80,
                    (_DWORD)a1,
                    v81,
                    v84,
                    DWORD1(v84),
                    DWORD2(v84) - (int)v84,
                    HIDWORD(v84) - DWORD1(v84),
                    v5,
                    0);
            if ( v16 )
            {
              if ( v86 && *(_DWORD *)(gpDispInfo + 80LL) > 1u )
              {
                if ( (*((_BYTE *)a1 + 55) & 1) != 0 && *((_QWORD *)a1 + 11) == GetDesktopWindow(a1) )
                {
                  *(_QWORD *)(*(_QWORD *)(v16 + 40) + 112LL) = 2LL;
                }
                else if ( (*((_BYTE *)a1 + 45) & 8) != 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v16 + 40) + 112LL) = 1LL;
                }
              }
              xxxEndDeferWindowPosEx((struct tagSMWP *)v16);
            }
          }
          if ( v28 )
            xxxWindowEvent(v28, (_DWORD)a1, 0, 0, 1);
          if ( v23 == 2
            && (*((_BYTE *)a1 + 45) & 2) == 0
            && (*((_BYTE *)a1 + 55) & 0x10) != 0
            && (*((_BYTE *)a1 + 54) & 0x40) != 0 )
          {
            if ( *(_QWORD *)(*((_QWORD *)a1 + 19) + 112LL) )
              PostMessage(a1, 38LL);
            else
              PostMessage(a1, 15LL);
          }
          if ( v91 )
            xxxShowOwnedWindows(a1, 3LL, 0LL);
          if ( v23 == 6 && *((_QWORD *)a1 + 11) == GetDesktopWindow(a1) && !(unsigned int)xxxActivateOnMinimize(a1) )
            xxxActivateWindow(a1);
          if ( v90 )
            xxxSetFocus(a1);
          if ( v87 )
            xxxSendMessage(a1, 6LL, 1LL);
          if ( v31 )
            xxxFlushPalette(a1);
          goto LABEL_28;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(56LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) != 0 )
          {
            goto LABEL_215;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v71)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v77 = 0)
                 : (v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v77) )
        {
LABEL_215:
          if ( (unsigned int)IsDPIDWMSysMet(56LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v74 = 0)
              : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v74) )
          {
            v78 = (_DWORD *)(gpsi + 2880LL);
          }
          else
          {
            v78 = (_DWORD *)(gpsi + 2104LL);
          }
LABEL_231:
          if ( (*v78 & 8) != 0 )
          {
            v79 = *(_QWORD *)a1;
            v15 = *(unsigned int *)(gptiCurrent + 608LL);
            if ( (((unsigned int)v15 | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
              xxxCallHook(1LL, *(_QWORD *)a1, 0LL);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
              PostShellHookMessagesEx(1uLL, v79, 0LL);
          }
          goto LABEL_236;
        }
        v78 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_231;
      }
      v68 = 0LL;
      if ( v88 )
      {
        v68 = v84;
        v69 = *(_DWORD *)(*((_QWORD *)a1 + 11) + 120LL) - v84;
        LODWORD(v84) = *(_DWORD *)(*((_QWORD *)a1 + 11) + 120LL) - DWORD2(v84);
        DWORD2(v84) = v69;
      }
      if ( v26 == 3 || !(unsigned int)IsTrayWindow(a1) )
      {
        v70 = a1;
      }
      else
      {
        *(_QWORD *)&v97.left = 0LL;
        *(_QWORD *)&v97.right = 0LL;
        xxxSendMinRectMessages(a1, &v97);
        if ( (unsigned int)IsRectEmptyInl(&v97) )
          goto LABEL_207;
        v70 = a1;
      }
      xxxDrawAnimatedRects(v70);
LABEL_207:
      if ( v88 )
        v84 = v68;
      goto LABEL_210;
    }
    if ( v23 > 7 )
    {
      if ( v23 != 9 )
        goto LABEL_42;
      goto LABEL_61;
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 80LL) )
      v5 |= 0x10u;
    v15 = 0LL;
    v29 = *((_QWORD *)a1 + 9);
    LOBYTE(v16) = *((_BYTE *)a1 + 48) & 8;
    if ( !v29 )
      goto LABEL_57;
    do
    {
      if ( (*(_BYTE *)(v29 + 44) & 0x20) != 0 || (*(_BYTE *)(v29 + 48) & 8) != (_BYTE)v16 )
        break;
      if ( *(_QWORD *)(v29 + 104) == *((_QWORD *)a1 + 13) )
        v15 = v29;
      v29 = *(_QWORD *)(v29 + 72);
    }
    while ( v29 );
    if ( v15 )
      v92 = *(_QWORD *)v15;
    else
LABEL_57:
      v5 |= 4u;
LABEL_54:
    v30 = *((_BYTE *)a1 + 55);
    v27 = 1;
    if ( (v30 & 0x20) != 0 )
    {
      if ( (v30 & 0x10) != 0 )
        goto LABEL_28;
      v26 = 0;
      v5 |= 0x17u;
      v28 = 0;
      v31 = 0;
      goto LABEL_190;
    }
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1, v15, v16) )
    {
      v41 = (void *)ReferenceDwmApiPort();
      if ( v41 )
      {
        UserSessionSwitchLeaveCrit(v40, v39);
        DwmSyncNotifyMinimizing(v41);
        EnterCrit(1LL);
      }
      v23 = v85;
    }
    v42 = *((_DWORD *)v19 + 8);
    v26 = 2;
    if ( (v42 & 1) == 0 )
      *((_DWORD *)v19 + 8) = v42 & 0xFFFFFFF7;
    if ( (v19[2] & 8) == 0 )
    {
      ParkIcon(a1, v19 + 1);
      *((_DWORD *)v19 + 8) |= 8u;
    }
    *(_QWORD *)&v84 = *((_QWORD *)v19 + 2);
    DWORD2(v84) = v84 + GetSystemMetricsForWindow(a1, 57LL);
    HIDWORD(v84) = *((_DWORD *)v19 + 5) + GetSystemMetricsForWindow(a1, 58LL);
    xxxShowOwnedWindows(a1, 1LL, 0LL);
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( (struct tagWND *)i == a1 )
      {
        v94[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v94;
        v94[1] = i;
        ++*(_DWORD *)(i + 8);
        if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
        {
          v44 = *((_QWORD *)a1 + 11);
          v93[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v93;
          v93[1] = v44;
          if ( v44 )
            ++*(_DWORD *)(v44 + 8);
          xxxSetFocus(*((struct tagWND **)a1 + 11));
          ThreadUnlock1();
        }
        else
        {
          xxxSetFocus(0LL);
        }
        ThreadUnlock1();
        break;
      }
    }
    if ( (*((_BYTE *)a1 + 55) & 1) != 0 )
    {
      v86 = 1;
      *((_DWORD *)v19 + 8) = v19[2] & 0xFFFFFF9D | 2;
      goto LABEL_122;
    }
    v45 = *((_BYTE *)a1 + 289);
    if ( (v45 & 3) == 3 )
    {
      v46 = v19[2] & 0xFFFFFF9D | 0x60;
    }
    else if ( (v45 & 1) != 0 )
    {
      v46 = v19[2] & 0xFFFFFF9D | 0x20;
    }
    else
    {
      if ( (v45 & 2) == 0 )
      {
        *((_DWORD *)v19 + 8) &= 0xFFFFFF9D;
LABEL_122:
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
        {
          v47 = 0;
        }
        else
        {
          v47 = IsTrayWindow(a1);
          v83 = v47;
        }
        v48 = *((_BYTE *)a1 + 55);
        if ( (v48 & 0x20) != 0 )
        {
          if ( (v48 & 0x10) != 0 )
            goto LABEL_28;
          v5 |= 0x17u;
          v27 = 1;
          v84 = 0uLL;
          v28 = 0;
          v31 = 0;
        }
        else
        {
          SetMinimize(a1, 1LL);
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v28 = 22;
          if ( (*((_BYTE *)a1 + 45) & 2) == 0 )
            v83 = v47 != IsTrayWindow(a1);
          for ( j = *((_QWORD *)a1 + 12); j; j = *(_QWORD *)(j + 72) )
            ClrFTrueVis(j);
          v5 |= 0x8120u;
          DesktopWindow = GetDesktopWindow(a1);
          v27 = 1;
          if ( *((_QWORD *)a1 + 11) == DesktopWindow )
            v31 = *((_BYTE *)a1 + 42) & 0x20;
          else
            v31 = 0;
        }
        goto LABEL_190;
      }
      v46 = v19[2] & 0xFFFFFF9D | 0x40;
    }
    *((_DWORD *)v19 + 8) = v46;
    goto LABEL_122;
  }
LABEL_68:
  v36 = *((_BYTE *)a1 + 55);
  v37 = v82;
  if ( (v36 & 1) == 0 )
  {
    v5 |= 0x8000u;
LABEL_88:
    v86 = 1;
    if ( (v82 & 1) != 0 )
      v5 |= 0x10u;
    if ( (v36 & 0x20) != 0 )
      *((_DWORD *)v19 + 8) |= 4u;
    xxxInitSendValidateMinMaxInfoEx(a1, v98, a4, 0LL);
LABEL_77:
    if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 )
    {
      if ( !xxxSendMessage(a1, 19LL, 0LL) )
        goto LABEL_28;
      v91 = 1;
      v26 = 1;
      if ( (v5 & 0x10) == 0 )
      {
        v90 = 1;
        v87 = (*((_BYTE *)a1 + 55) & 0x40) == 0;
      }
      v5 |= 0x100u;
    }
    else
    {
      v26 = 3;
    }
    switch ( v23 )
    {
      case 3u:
        *(_QWORD *)&v84 = v98[2];
        DWORD2(v84) = LODWORD(v98[1]) + LODWORD(v98[2]);
        HIDWORD(v84) = HIDWORD(v98[2]) + HIDWORD(v98[1]);
        SetOrClrWF(1LL, a1, 3841LL, 1LL);
        SetOrClrWF(0LL, a1, 63745LL, 1LL);
        SetOrClrWF(0LL, a1, 63746LL, 1LL);
        *((_BYTE *)a1 + 291) &= ~1u;
        if ( (v37 & 0x10) == 0 && gSqmIsOptedIn )
          WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
LABEL_150:
        if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 )
        {
          v28 = 0;
LABEL_188:
          v27 = 0;
          v5 |= 0x20u;
          goto LABEL_189;
        }
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
          v53 = 0;
        else
          v53 = IsTrayWindow(a1);
        SetMinimize(a1, 0LL);
        v28 = 23;
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 || v53 == (unsigned int)IsTrayWindow(a1) )
        {
LABEL_180:
          v63 = *((_BYTE *)a1 + 55);
          v83 = 0;
          if ( (v63 & 0xC0) != 0x40 && (v63 & 0x10) != 0 )
          {
            v64 = *((_QWORD *)a1 + 2);
            if ( *(_DWORD *)(v64 + 784) == 1 )
            {
              v65 = *(_QWORD *)(v64 + 392);
              if ( v65 != gpqForeground && ((v5 & 0x10) == 0 || *(struct tagWND **)(v65 + 80) == a1) )
              {
                CheckForegroundRight(a1);
                xxxSetForegroundWindow2(a1);
              }
            }
          }
          goto LABEL_188;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(56LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0 )
          {
            goto LABEL_159;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v54)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v60 = 0)
                 : (v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v60) )
        {
LABEL_159:
          if ( (unsigned int)IsDPIDWMSysMet(56LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v57 = 0)
              : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v57) )
          {
            v61 = (_DWORD *)(gpsi + 2880LL);
          }
          else
          {
            v61 = (_DWORD *)(gpsi + 2104LL);
          }
LABEL_175:
          if ( (*v61 & 8) != 0 )
          {
            v62 = *(_QWORD *)a1;
            v15 = *(unsigned int *)(gptiCurrent + 608LL);
            if ( (((unsigned int)v15 | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
              xxxCallHook(2LL, *(_QWORD *)a1, 0LL);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
              PostShellHookMessagesEx(2uLL, v62, 0LL);
          }
          goto LABEL_180;
        }
        v61 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_175;
      case 0xCu:
        v84 = v22;
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
        v51 = 1LL;
        break;
      case 0xEu:
        v84 = v22;
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
        SetOrClrWF(1LL, a1, 63745LL, 1LL);
        v52 = 0LL;
LABEL_148:
        SetOrClrWF(v52, a1, 63746LL, 1LL);
        v5 |= 0x100000u;
        goto LABEL_150;
      case 0xDu:
        v84 = v22;
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
        v51 = 0LL;
        break;
      default:
        v84 = v21;
        SetOrClrWF(0LL, a1, 3841LL, 1LL);
        goto LABEL_150;
    }
    SetOrClrWF(v51, a1, 63745LL, 1LL);
    v52 = 1LL;
    goto LABEL_148;
  }
  if ( (v36 & 0x10) == 0 || (v82 & 2) != 0 )
    goto LABEL_88;
LABEL_28:
  if ( !v89 && (unsigned int)IsToplevelWindowDesktopComposed(a1, v15, v16) )
  {
    v24 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v24);
  }
  return 0LL;
}
