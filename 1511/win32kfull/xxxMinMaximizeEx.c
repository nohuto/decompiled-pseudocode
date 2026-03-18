/*
 * XREFs of xxxMinMaximizeEx @ 0x1C00C83F4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C010A2C4 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206D70 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207464 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209E38 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020AD20 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     NtUserMinMaximize @ 0x1C021E400 (NtUserMinMaximize.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     IsThreadDesktopComposed @ 0x1C00662F4 (IsThreadDesktopComposed.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _DeferWindowPos @ 0x1C00750A4 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C0075248 (InternalBeginDeferWindowPos.c)
 *     CkptRestore @ 0x1C007734C (CkptRestore.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     ClrFTrueVis @ 0x1C007D45C (ClrFTrueVis.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxSetFocus @ 0x1C0080BD4 (xxxSetFocus.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     xxxActivateWindow @ 0x1C008CA64 (xxxActivateWindow.c)
 *     CheckForegroundRight @ 0x1C008D2FC (CheckForegroundRight.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C7790 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00C93DC (DwmAsyncNotifyAnimationChange.c)
 *     SetMinimize @ 0x1C00C9468 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00C94C4 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C00C95F4 (ParkIcon.c)
 *     DwmSyncNotifyMinimizing @ 0x1C00C9844 (DwmSyncNotifyMinimizing.c)
 *     IsVisible @ 0x1C00CBE50 (IsVisible.c)
 *     xxxSendMinRectMessages @ 0x1C00FF20C (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxFlushPalette @ 0x1C0215630 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C0227878 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, unsigned int a3, __int64 a4, _OWORD *a5)
{
  int v5; // esi
  __int64 v7; // r12
  __int64 v9; // r13
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rax
  _OWORD *Prop; // rax
  _OWORD *v17; // rdi
  int v18; // eax
  __int128 v19; // xmm7
  __int128 v20; // xmm6
  int v21; // r14d
  int v22; // ecx
  BOOL v23; // r15d
  unsigned int v24; // r13d
  unsigned __int64 *v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  char v28; // al
  unsigned __int16 v29; // r8
  char v30; // al
  int v31; // ecx
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  void *v39; // r14
  int v40; // eax
  __int64 i; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v47; // cl
  unsigned int v48; // eax
  int v49; // r15d
  char v50; // cl
  __int64 j; // rdi
  __int64 DesktopWindow; // rax
  int v53; // ecx
  int v54; // ecx
  int v55; // edi
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // ecx
  _DWORD *v63; // rcx
  __int64 v64; // rdi
  char v65; // cl
  __int64 v66; // rax
  __int64 v67; // rcx
  char v68; // r8
  int v69; // r9d
  __int128 v70; // xmm6
  int v71; // ecx
  struct tagWND *v72; // rcx
  unsigned __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // ecx
  _DWORD *v80; // rcx
  __int64 v81; // rdi
  void *v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  void *v89; // rax
  int v91; // [rsp+58h] [rbp-B0h]
  __int64 v92; // [rsp+60h] [rbp-A8h]
  __int128 v93; // [rsp+68h] [rbp-A0h]
  BOOL v94; // [rsp+80h] [rbp-88h]
  int v95; // [rsp+84h] [rbp-84h]
  int v96; // [rsp+88h] [rbp-80h]
  int v97; // [rsp+8Ch] [rbp-7Ch]
  int v98; // [rsp+90h] [rbp-78h]
  int v99; // [rsp+94h] [rbp-74h]
  int v100; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v101; // [rsp+A0h] [rbp-68h]
  _QWORD v102[3]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v103[3]; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v104; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v105; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v106[5]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = 0;
  v92 = a3;
  v7 = a2;
  *(_QWORD *)&v104.left = a4;
  v93 = 0LL;
  v98 = 0;
  v95 = 0;
  v94 = 0;
  v91 = 0;
  v97 = 0;
  v101 = 0LL;
  memset(v106, 0, sizeof(v106));
  v9 = *((_QWORD *)a1 + 11);
  v10 = ((unsigned __int8)a3 >> 5) & 1;
  v99 = 0;
  v96 = 1;
  v100 = 0;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
      0x18u,
      (__int64)a1,
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
    LOBYTE(v92) = a3;
    v96 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v15 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
        DwmAsyncNotifyAnimationChange(v15);
      }
    }
  }
  GetRect((__int64)a1, (__int64)&v105, 66);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
  else
    Prop = CkptRestore((__int64)a1, &v105);
  v17 = Prop;
  if ( !Prop )
    goto LABEL_264;
  if ( a5 && (v92 & 8) != 0 )
    *Prop = *a5;
  if ( (*(_BYTE *)(v9 + 50) & 0x40) != 0 && (*((_BYTE *)a1 + 55) & 0x40) == 0 )
  {
    v18 = *(_DWORD *)(v9 + 120) - DWORD2(v105);
    DWORD2(v105) = *(_DWORD *)(v9 + 120) - v105;
    LODWORD(v105) = v18;
    v99 = 1;
  }
  v19 = *v17;
  v20 = v10 ? *a5 : *(_OWORD *)((char *)v17 + 36);
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(1u, *(_QWORD *)a1, v7, 5u) )
  {
    goto LABEL_264;
  }
  if ( (_DWORD)v7 == 204 )
  {
    v5 |= 0x14u;
    LODWORD(v7) = ((v17[2] & 4) != 0) + 1;
  }
  switch ( (_DWORD)v7 )
  {
    case 1:
      goto LABEL_61;
    case 2:
LABEL_49:
      v27 = *((_BYTE *)a1 + 55);
      v22 = 1;
      if ( (v27 & 0x20) != 0 )
      {
        if ( (v27 & 0x10) == 0 )
        {
          v21 = 0;
          v5 |= 0x17u;
          v23 = 0;
          v24 = 0;
          goto LABEL_184;
        }
        goto LABEL_264;
      }
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v39 = (void *)ReferenceDwmApiPort(v34, v33, v35, v36);
        if ( v39 )
        {
          UserSessionSwitchLeaveCrit(v38, v37);
          DwmSyncNotifyMinimizing(v39);
          EnterCrit(0LL, 1LL);
        }
      }
      v40 = *((_DWORD *)v17 + 8);
      v21 = 2;
      if ( (v40 & 1) == 0 )
        *((_DWORD *)v17 + 8) = v40 & 0xFFFFFFF7;
      if ( (v17[2] & 8) == 0 )
      {
        ParkIcon(a1, v17 + 1);
        *((_DWORD *)v17 + 8) |= 8u;
      }
      *(_QWORD *)&v93 = *((_QWORD *)v17 + 2);
      DWORD2(v93) = *((_DWORD *)v17 + 4) + GetSystemMetricsForWindow((__int64)a1, 0x39u);
      HIDWORD(v93) = *((_DWORD *)v17 + 5) + GetSystemMetricsForWindow((__int64)a1, 0x3Au);
      xxxShowOwnedWindows(a1, 1LL, 0LL);
      for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL); i; i = *(_QWORD *)(i + 88) )
      {
        if ( (struct tagWND *)i == a1 )
        {
          v103[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v103;
          v103[1] = i;
          ++*(_DWORD *)(i + 8);
          if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
          {
            v42 = *((_QWORD *)a1 + 11);
            v102[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v102;
            v102[1] = v42;
            if ( v42 )
              ++*(_DWORD *)(v42 + 8);
            xxxSetFocus(*((struct tagWND **)a1 + 11), 0LL);
            ThreadUnlock1(v44, v43);
          }
          else
          {
            xxxSetFocus(0LL, 0LL);
          }
          ThreadUnlock1(v46, v45);
          break;
        }
      }
      if ( (*((_BYTE *)a1 + 55) & 1) != 0 )
      {
        v91 = 1;
        *((_DWORD *)v17 + 8) = v17[2] & 0xFFFFFF9D | 2;
        goto LABEL_116;
      }
      v47 = *((_BYTE *)a1 + 289);
      if ( (v47 & 3) == 3 )
      {
        v48 = v17[2] & 0xFFFFFF9D | 0x60;
      }
      else if ( (v47 & 1) != 0 )
      {
        v48 = v17[2] & 0xFFFFFF9D | 0x20;
      }
      else
      {
        if ( (v47 & 2) == 0 )
        {
          *((_DWORD *)v17 + 8) &= 0xFFFFFF9D;
LABEL_116:
          if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
          {
            v49 = HIDWORD(v92);
          }
          else
          {
            v49 = IsTrayWindow((__int64)a1);
            HIDWORD(v92) = v49;
          }
          v50 = *((_BYTE *)a1 + 55);
          if ( (v50 & 0x20) == 0 )
          {
            SetMinimize(a1, 1LL);
            SetOrClrWF(0, a1, 0xF01u, 1);
            v24 = 22;
            if ( (*((_BYTE *)a1 + 45) & 2) == 0 )
              HIDWORD(v92) = v49 != IsTrayWindow((__int64)a1);
            for ( j = *((_QWORD *)a1 + 12); j; j = *(_QWORD *)(j + 72) )
              ClrFTrueVis(j);
            v5 |= 0x8120u;
            DesktopWindow = GetDesktopWindow((__int64)a1);
            v22 = 1;
            v23 = v91;
            if ( *((_QWORD *)a1 + 11) == DesktopWindow )
              v97 = *((_BYTE *)a1 + 42) & 0x20;
            goto LABEL_184;
          }
          if ( (v50 & 0x10) == 0 )
          {
            v23 = v91;
            v5 |= 0x17u;
            v22 = 1;
            v93 = 0uLL;
            v24 = 0;
            goto LABEL_184;
          }
          goto LABEL_264;
        }
        v48 = v17[2] & 0xFFFFFF9D | 0x40;
      }
      *((_DWORD *)v17 + 8) = v48;
      goto LABEL_116;
    case 3:
LABEL_71:
      v32 = *((_BYTE *)a1 + 55);
      if ( (v32 & 1) != 0 )
      {
        if ( (v32 & 0x10) != 0 && (v92 & 2) == 0 )
          goto LABEL_264;
      }
      else
      {
        v5 |= 0x8000u;
      }
      v23 = 1;
      if ( (v92 & 1) != 0 )
        v5 |= 0x10u;
      if ( (v32 & 0x20) != 0 )
        *((_DWORD *)v17 + 8) |= 4u;
      xxxInitSendValidateMinMaxInfoEx((__int64)a1, (__int64)v106, *(__int64 *)&v104.left, 0);
      goto LABEL_64;
    case 4:
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 80LL) )
        v5 |= 0x10u;
      goto LABEL_56;
  }
  if ( (unsigned int)v7 <= 5 )
  {
LABEL_37:
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
LABEL_184:
    if ( (v92 & 1) != 0 )
      goto LABEL_204;
    if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
    {
      v5 |= 0x40u;
      goto LABEL_204;
    }
    if ( v22 )
      v5 |= 0x40u;
    if ( !(unsigned int)IsVisible(a1)
      || (v69 & 0x10000) == 0
      || !v21
      || (v68 & 0x40) != 0 && (*((_BYTE *)a1 + 47) & 0x10) != 0 )
    {
LABEL_204:
      if ( (*((_BYTE *)a1 + 45) & 2) != 0 || !HIDWORD(v92) )
      {
LABEL_230:
        v82 = InternalBeginDeferWindowPos(1u);
        if ( v82 )
        {
          v83 = v101 ? HMValidateHandleNoSecure(v101, 1) : 0LL;
          v84 = DeferWindowPos(
                  (__int64)v82,
                  (__int64)a1,
                  v83,
                  v93,
                  SDWORD1(v93),
                  DWORD2(v93) - (int)v93,
                  HIDWORD(v93) - DWORD1(v93),
                  v5,
                  0);
          if ( v84 )
          {
            if ( v23 && *(_DWORD *)(gpDispInfo + 80LL) > 1u )
            {
              if ( (*((_BYTE *)a1 + 55) & 1) != 0 && *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
              {
                *(_QWORD *)(*(_QWORD *)(v84 + 40) + 112LL) = 2LL;
              }
              else if ( (*((_BYTE *)a1 + 45) & 8) != 0 )
              {
                *(_QWORD *)(*(_QWORD *)(v84 + 40) + 112LL) = 1LL;
              }
            }
            xxxEndDeferWindowPosEx((struct tagSMWP *)v84, 0);
          }
        }
        if ( v24 )
          xxxWindowEvent(v24, (__int64 *)a1, 0, 0, 1);
        if ( (_DWORD)v7 == 2
          && (*((_BYTE *)a1 + 45) & 2) == 0
          && (*((_BYTE *)a1 + 55) & 0x10) != 0
          && (*((_BYTE *)a1 + 54) & 0x40) != 0 )
        {
          if ( *(_QWORD *)(*((_QWORD *)a1 + 19) + 112LL) )
            PostMessage((__int64)a1, 38LL, 1uLL, 0LL);
          else
            PostMessage((__int64)a1, 15LL, 0LL, 0LL);
        }
        if ( v95 )
          xxxShowOwnedWindows(a1, 3LL, 0LL);
        if ( (_DWORD)v7 == 6
          && *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1)
          && !(unsigned int)xxxActivateOnMinimize(a1) )
        {
          xxxActivateWindow(a1, 3LL);
        }
        if ( v98 )
          xxxSetFocus(a1, 0LL);
        if ( v94 )
          xxxSendMessage(a1, 6u, 1uLL, 0LL);
        if ( v97 )
          xxxFlushPalette(a1);
        goto LABEL_264;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x4000) != 0 )
        {
          goto LABEL_209;
        }
      }
      else if ( !IsDPIDWMSysMet(v73)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v78) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v79 = 0)
               : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v79) )
      {
LABEL_209:
        if ( IsDPIDWMSysMet(0x38uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v76 = 0)
            : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v76) )
        {
          v80 = (_DWORD *)(gpsi + 2880LL);
        }
        else
        {
          v80 = (_DWORD *)(gpsi + 2104LL);
        }
LABEL_225:
        if ( (*v80 & 8) != 0 )
        {
          v81 = *(_QWORD *)a1;
          if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
            xxxCallHook(1u, *(_QWORD *)a1, 0LL, 0xAu);
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
            PostShellHookMessagesEx(1u, v81, 0LL);
        }
        goto LABEL_230;
      }
      v80 = (_DWORD *)(gpsi + 2492LL);
      goto LABEL_225;
    }
    v70 = 0LL;
    if ( v99 )
    {
      v70 = v93;
      v71 = *(_DWORD *)(*((_QWORD *)a1 + 11) + 120LL) - v93;
      LODWORD(v93) = *(_DWORD *)(*((_QWORD *)a1 + 11) + 120LL) - DWORD2(v93);
      DWORD2(v93) = v71;
    }
    if ( v21 == 3 || !(unsigned int)IsTrayWindow((__int64)a1) )
    {
      v72 = a1;
    }
    else
    {
      *(_QWORD *)&v104.left = 0LL;
      *(_QWORD *)&v104.right = 0LL;
      xxxSendMinRectMessages(a1, &v104);
      if ( IsRectEmptyInl(&v104) )
        goto LABEL_201;
      v72 = a1;
    }
    xxxDrawAnimatedRects(v72);
LABEL_201:
    if ( v99 )
      v93 = v70;
    goto LABEL_204;
  }
  if ( (unsigned int)v7 <= 7 )
  {
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 80LL) )
      v5 |= 0x10u;
    v25 = 0LL;
    v26 = *((_QWORD *)a1 + 9);
    if ( !v26 )
      goto LABEL_52;
    do
    {
      if ( (*(_BYTE *)(v26 + 44) & 0x20) != 0 || (*(_BYTE *)(v26 + 48) & 8) != (*((_BYTE *)a1 + 48) & 8) )
        break;
      if ( *(_QWORD *)(v26 + 104) == *((_QWORD *)a1 + 13) )
        v25 = (unsigned __int64 *)v26;
      v26 = *(_QWORD *)(v26 + 72);
    }
    while ( v26 );
    if ( v25 )
      v101 = *v25;
    else
LABEL_52:
      v5 |= 4u;
    goto LABEL_49;
  }
  if ( (_DWORD)v7 != 9 )
    goto LABEL_37;
LABEL_56:
  v28 = *((_BYTE *)a1 + 55);
  if ( (v28 & 0x20) == 0 && ((v28 & 1) == 0 || !v10) )
  {
    LODWORD(v7) = 1;
    SetOrClrWF(0, a1, 0xF901u, 1);
    SetOrClrWF(0, a1, 0xF902u, 1);
    v29 = -1279;
    goto LABEL_60;
  }
  v31 = *((_DWORD *)v17 + 8);
  if ( (v31 & 2) != 0 )
  {
    LODWORD(v7) = 3;
    goto LABEL_71;
  }
  if ( (v31 & 0x60) == 0x60 )
  {
    LODWORD(v7) = 12;
    goto LABEL_61;
  }
  if ( (v31 & 0x20) != 0 )
  {
    LODWORD(v7) = 14;
    goto LABEL_61;
  }
  if ( (v31 & 0x40) != 0 )
  {
    LODWORD(v7) = 13;
    goto LABEL_61;
  }
  LODWORD(v7) = 1;
  SetOrClrWF(0, a1, 0xF901u, 1);
  v29 = -1790;
LABEL_60:
  SetOrClrWF(0, a1, v29, 1);
LABEL_61:
  v30 = *((_BYTE *)a1 + 55);
  if ( (v30 & 0x21) != 0 )
    v5 |= 0x8000u;
  v23 = (v30 & 1) != 0;
LABEL_64:
  if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 )
  {
    v21 = 3;
    goto LABEL_130;
  }
  if ( xxxSendMessage(a1, 0x13u, 0LL, 0LL) )
  {
    v95 = 1;
    v21 = 1;
    if ( (v5 & 0x10) == 0 )
    {
      v98 = 1;
      v94 = (*((_BYTE *)a1 + 55) & 0x40) == 0;
    }
    v5 |= 0x100u;
LABEL_130:
    switch ( (_DWORD)v7 )
    {
      case 3:
        *(_QWORD *)&v93 = v106[2];
        DWORD2(v93) = LODWORD(v106[1]) + LODWORD(v106[2]);
        HIDWORD(v93) = HIDWORD(v106[2]) + HIDWORD(v106[1]);
        SetOrClrWF(1, a1, 0xF01u, 1);
        SetOrClrWF(0, a1, 0xF901u, 1);
        SetOrClrWF(0, a1, 0xF902u, 1);
        SetOrClrWF(0, a1, 0xFB01u, 1);
        if ( (v92 & 0x10) == 0 && gSqmIsOptedIn )
          WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
LABEL_143:
        if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 )
        {
          v24 = 0;
LABEL_183:
          v22 = 0;
          v5 |= 0x20u;
          goto LABEL_184;
        }
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
          v55 = HIDWORD(v92);
        else
          v55 = IsTrayWindow((__int64)a1);
        SetMinimize(a1, 0LL);
        v24 = 23;
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 || v55 == (unsigned int)IsTrayWindow((__int64)a1) )
        {
LABEL_173:
          v65 = *((_BYTE *)a1 + 55);
          HIDWORD(v92) = 0;
          if ( (v65 & 0xC0) != 0x40 && (v65 & 0x10) != 0 )
          {
            v66 = *((_QWORD *)a1 + 2);
            if ( *(_DWORD *)(v66 + 776) == 1 )
            {
              v67 = *(_QWORD *)(v66 + 384);
              if ( v67 != gpqForeground
                && ((v5 & 0x10) == 0 || *(struct tagWND **)(v67 + 80) == a1)
                && ((unsigned int)CheckForegroundRight(a1, &v100) || !v100) )
              {
                xxxSetForegroundWindow2((LARGE_INTEGER *)a1, *((_QWORD *)a1 + 2), 1u, 0);
              }
            }
          }
          goto LABEL_183;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) != 0 )
          {
            goto LABEL_152;
          }
        }
        else if ( !IsDPIDWMSysMet(v56)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v62 = 0)
                 : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v62) )
        {
LABEL_152:
          if ( IsDPIDWMSysMet(0x38uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v59 = 0)
              : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v59) )
          {
            v63 = (_DWORD *)(gpsi + 2880LL);
          }
          else
          {
            v63 = (_DWORD *)(gpsi + 2104LL);
          }
LABEL_168:
          if ( (*v63 & 8) != 0 )
          {
            v64 = *(_QWORD *)a1;
            if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
              xxxCallHook(2u, *(_QWORD *)a1, 0LL, 0xAu);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
              PostShellHookMessagesEx(2u, v64, 0LL);
          }
          goto LABEL_173;
        }
        v63 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_168;
      case 0xC:
        v93 = v20;
        SetOrClrWF(0, a1, 0xF01u, 1);
        v53 = 1;
        break;
      case 0xE:
        v93 = v20;
        SetOrClrWF(0, a1, 0xF01u, 1);
        SetOrClrWF(1, a1, 0xF901u, 1);
        v54 = 0;
LABEL_141:
        SetOrClrWF(v54, a1, 0xF902u, 1);
        v5 |= 0x100000u;
        goto LABEL_143;
      case 0xD:
        v93 = v20;
        SetOrClrWF(0, a1, 0xF01u, 1);
        v53 = 0;
        break;
      default:
        v93 = v19;
        SetOrClrWF(0, a1, 0xF01u, 1);
        goto LABEL_143;
    }
    SetOrClrWF(v53, a1, 0xF901u, 1);
    v54 = 1;
    goto LABEL_141;
  }
LABEL_264:
  if ( !v96 && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v89 = (void *)ReferenceDwmApiPort(v86, v85, v87, v88);
    DwmAsyncNotifyAnimationChange(v89);
  }
  return 0LL;
}
