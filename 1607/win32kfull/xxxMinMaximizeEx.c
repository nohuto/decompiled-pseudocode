/*
 * XREFs of xxxMinMaximizeEx @ 0x1C00B1498
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C012C5A8 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0F0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FE80C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0200F20 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C0201E1C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     NtUserMinMaximize @ 0x1C0217FF0 (NtUserMinMaximize.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     _DeferWindowPos @ 0x1C00A6664 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C00A6808 (InternalBeginDeferWindowPos.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     CheckForegroundRight @ 0x1C00AA97C (CheckForegroundRight.c)
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     SetMinimize @ 0x1C00B2954 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00B29B0 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C00B2AE0 (ParkIcon.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00B2D9C (DwmAsyncNotifyAnimationChange.c)
 *     DwmSyncNotifyMinimizing @ 0x1C00B3930 (DwmSyncNotifyMinimizing.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0117C3C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ClrFTrueVis @ 0x1C0118F3C (ClrFTrueVis.c)
 *     xxxSendMinRectMessages @ 0x1C0120D8C (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxFlushPalette @ 0x1C020E340 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4, _OWORD *a5)
{
  int v5; // esi
  __int64 v6; // rdi
  __int64 v9; // r13
  int v10; // r15d
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rax
  _OWORD *Prop; // rax
  char v18; // r10
  unsigned int v19; // r11d
  _OWORD *v20; // rdi
  int v21; // eax
  __int128 v22; // xmm7
  __int128 v23; // xmm6
  unsigned int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  void *v29; // rax
  int v31; // r12d
  int v32; // ecx
  unsigned __int64 *v33; // rdx
  __int64 v34; // rcx
  char v35; // al
  BOOL v36; // r13d
  int v37; // r15d
  char v38; // al
  unsigned __int16 v39; // r8
  int v40; // ecx
  char v41; // al
  char v42; // r15
  char v43; // al
  bool v44; // zf
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  void *v50; // r14
  int v51; // eax
  __int64 i; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  char v58; // cl
  unsigned int v59; // eax
  int v60; // r15d
  char v61; // cl
  __int64 j; // rdi
  __int64 DesktopWindow; // rax
  int v64; // ecx
  int v65; // ecx
  int v66; // edi
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // ecx
  _DWORD *v93; // rcx
  __int64 v94; // rdi
  char v95; // cl
  __int64 v96; // rax
  __int64 v97; // rcx
  char v98; // r8
  int v99; // r9d
  unsigned int v100; // edi
  __int128 v101; // xmm6
  int v102; // ecx
  struct tagWND *v103; // rcx
  __int64 v104; // rdx
  unsigned __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // ecx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  int v129; // ecx
  _DWORD *v130; // rcx
  __int64 v131; // rdi
  __int64 v132; // rdx
  void *v133; // rdi
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // r8
  __int64 v137; // r8
  __int64 v138; // rax
  __int64 v139; // r9
  __int64 v140; // rcx
  __m128i *v141; // rax
  __int64 v142; // rax
  int v143; // ecx
  __int64 v144; // r10
  unsigned __int64 v145; // rdx
  unsigned __int64 v146; // xmm0_8
  __int64 v147; // r8
  __int64 v148; // rdx
  int v149; // [rsp+50h] [rbp-B0h]
  BOOL v151; // [rsp+60h] [rbp-A0h]
  __int128 v152; // [rsp+70h] [rbp-90h]
  unsigned int v153; // [rsp+80h] [rbp-80h]
  unsigned int v154; // [rsp+88h] [rbp-78h]
  BOOL v155; // [rsp+8Ch] [rbp-74h]
  int v156; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v157; // [rsp+94h] [rbp-6Ch]
  int v158; // [rsp+98h] [rbp-68h]
  int v159; // [rsp+9Ch] [rbp-64h]
  int v160; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v161; // [rsp+A8h] [rbp-58h]
  _QWORD v162[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v163[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v164; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v165; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v166[5]; // [rsp+100h] [rbp+0h] BYREF

  v5 = 0;
  v6 = a2;
  v153 = a2;
  v152 = 0LL;
  v159 = 0;
  v158 = 0;
  v155 = 0;
  v149 = 0;
  v161 = 0LL;
  v151 = 0;
  memset(v166, 0, sizeof(v166));
  v9 = *((_QWORD *)a1 + 11);
  v10 = ((unsigned __int8)a3 >> 5) & 1;
  v154 = 0;
  v157 = 0;
  v160 = 1;
  v156 = 0;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
      0x18u,
      (__int64)a1,
      0,
      v6,
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
    LOBYTE(a3) = v11;
    v160 = v11 & 0x10000;
    if ( (v11 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v16 = (void *)ReferenceDwmApiPort(v13, v12, v14, v15);
        DwmAsyncNotifyAnimationChange(v16);
      }
    }
  }
  GetRect((__int64)a1, (__int64)&v164, 66);
  if ( (a3 & 4) != 0 )
  {
    Prop = (_OWORD *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
  }
  else
  {
    Prop = (_OWORD *)CkptRestore((__int64)a1, &v164);
    v18 = a3;
    v19 = 1;
  }
  v20 = Prop;
  if ( !Prop )
    goto LABEL_28;
  if ( a5 && (v18 & 8) != 0 )
    *Prop = *a5;
  if ( (*(_BYTE *)(v9 + 50) & 0x40) != 0 && (*((_BYTE *)a1 + 55) & 0x40) == 0 )
  {
    v21 = *(_DWORD *)(v9 + 120) - DWORD2(v164);
    DWORD2(v164) = *(_DWORD *)(v9 + 120) - v164;
    LODWORD(v164) = v21;
    v157 = v19;
  }
  v22 = *v20;
  if ( v10 )
    v23 = *a5;
  else
    v23 = *(_OWORD *)((char *)v20 + 36);
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0 )
  {
    v24 = v153;
    if ( (unsigned int)xxxCallHook(v19, *(_QWORD *)a1, (int *)v153, 5u) )
      goto LABEL_28;
  }
  else
  {
    v24 = v153;
  }
  if ( v24 == 204 )
  {
    v5 |= 0x14u;
    v24 = ((v20[2] & 4) != 0) + 1;
    v153 = v24;
  }
  if ( v24 == 1 )
    goto LABEL_75;
  if ( v24 == 2 )
    goto LABEL_54;
  if ( v24 != 3 )
  {
    if ( v24 == 4 )
    {
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 88LL) )
        v5 |= 0x10u;
LABEL_62:
      v38 = *((_BYTE *)a1 + 55);
      if ( (v38 & 0x20) == 0 && ((v38 & 1) == 0 || !v10) )
      {
        v24 = 1;
        SetOrClrWF(0, a1, 0xF901u, 1);
        SetOrClrWF(0, a1, 0xF902u, 1);
        v39 = -1279;
        goto LABEL_66;
      }
      v40 = *((_DWORD *)v20 + 8);
      if ( (v40 & 2) == 0 )
      {
        if ( (v40 & 0x60) == 0x60 )
        {
          v24 = 12;
          goto LABEL_75;
        }
        if ( (v40 & 0x20) != 0 )
        {
          v24 = 14;
          goto LABEL_75;
        }
        if ( (v40 & 0x40) != 0 )
        {
          v24 = 13;
          goto LABEL_75;
        }
        v24 = 1;
        SetOrClrWF(0, a1, 0xF901u, 1);
        v39 = -1790;
LABEL_66:
        SetOrClrWF(0, a1, v39, 1);
LABEL_75:
        v43 = *((_BYTE *)a1 + 55);
        if ( (v43 & 0x21) != 0 )
          v5 |= 0x8000u;
        v42 = a3;
        v36 = (v43 & 1) != 0;
        goto LABEL_78;
      }
      v24 = 3;
      goto LABEL_69;
    }
    if ( v24 <= 5 )
    {
LABEL_42:
      v31 = 0;
      v32 = 0;
LABEL_57:
      v36 = 0;
      v37 = 0;
LABEL_192:
      if ( (a3 & 1) != 0 )
        goto LABEL_212;
      if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
      {
        v5 |= 0x40u;
        goto LABEL_212;
      }
      if ( v32 )
        v5 |= 0x40u;
      if ( !(unsigned int)IsVisible((__int64)a1)
        || (v99 & 0x10000) == 0
        || !v31
        || (v98 & 0x40) != 0 && (*((_BYTE *)a1 + 47) & 0x10) != 0 )
      {
LABEL_212:
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 || !v151 )
        {
LABEL_236:
          v133 = InternalBeginDeferWindowPos(1u);
          if ( v133 )
          {
            if ( v161 )
            {
              LOBYTE(v132) = 1;
              v136 = HMValidateHandleNoSecure(v161, v132, v134, v135);
            }
            else
            {
              v136 = 0LL;
            }
            v137 = DeferWindowPos(
                     (__int64)v133,
                     (__int64)a1,
                     v136,
                     v152,
                     SDWORD1(v152),
                     DWORD2(v152) - (int)v152,
                     HIDWORD(v152) - DWORD1(v152),
                     v5,
                     0);
            if ( v137 )
            {
              if ( v36 && *(_DWORD *)(gpDispInfo + 80LL) > 1u )
              {
                if ( (*((_BYTE *)a1 + 55) & 1) != 0 && *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
                {
                  *(_QWORD *)(*(_QWORD *)(v137 + 40) + 112LL) = 2LL;
                }
                else if ( (*((_BYTE *)a1 + 45) & 8) != 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v137 + 40) + 112LL) = 1LL;
                }
              }
              xxxEndDeferWindowPosEx((struct tagSMWP *)v137, 0LL, v137);
              if ( (*((_DWORD *)a1 + 72) & 0x20000000) != 0 )
                xxxNotifyMonitorChanged(a1, 0LL, 0LL);
            }
          }
          if ( v154 )
            xxxWindowEvent(v154, (__int64 *)a1, 0, 0, 1);
          *((_DWORD *)a1 + 72) &= ~0x80u;
          if ( (*((_BYTE *)a1 + 55) & 1) != 0 )
          {
            v138 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 43));
            v139 = v138;
            if ( (*((_DWORD *)a1 + 88) & 0xF) == 0
              && (v140 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
              && (*(_DWORD *)(*(_QWORD *)(v140 + 8) + 244LL) & 1) != 0 )
            {
              v141 = (__m128i *)(v138 + 92);
            }
            else if ( (*((_DWORD *)a1 + 88) & 0xF) != 1
                   || (v142 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) == 0
                   || (v143 = *(_DWORD *)(*(_QWORD *)(v142 + 8) + 244LL), v141 = (__m128i *)(v139 + 108),
                                                                          (v143 & 1) == 0) )
            {
              v141 = (__m128i *)(v139 + 76);
            }
            v144 = *((_QWORD *)a1 + 14);
            v145 = _mm_srli_si128(*v141, 8).m128i_u64[0];
            v146 = _mm_srli_si128(*((__m128i *)a1 + 7), 8).m128i_u64[0];
            if ( (int)v146 - (int)v144 < (int)(v145 - v141->m128i_i64[0])
              && HIDWORD(v146) - HIDWORD(v144) < (int)(HIDWORD(v145) - HIDWORD(v141->m128i_i64[0])) )
            {
              *((_DWORD *)a1 + 72) |= 0x80u;
            }
          }
          if ( v24 == 2
            && (*((_BYTE *)a1 + 45) & 2) == 0
            && (*((_BYTE *)a1 + 55) & 0x10) != 0
            && (*((_BYTE *)a1 + 54) & 0x40) != 0 )
          {
            if ( *(_QWORD *)(*((_QWORD *)a1 + 19) + 112LL) )
            {
              v147 = 1LL;
              v148 = 38LL;
            }
            else
            {
              v147 = 0LL;
              v148 = 15LL;
            }
            PostMessage((__int64)a1, v148, v147, 0LL);
          }
          if ( v158 )
            xxxShowOwnedWindows(a1, 3LL, 0LL);
          if ( v24 == 6
            && *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1)
            && !(unsigned int)xxxActivateOnMinimize(a1) )
          {
            xxxActivateWindow(a1, 3LL);
          }
          if ( v159 )
            xxxSetFocus(a1, 0LL);
          if ( v155 )
            xxxSendMessage(a1, 6u, 1uLL, 0LL);
          if ( v37 )
            xxxFlushPalette(a1);
          goto LABEL_28;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v105, v104, v106, v107) & 0xF) != 0 )
            goto LABEL_216;
        }
        else if ( !IsDPIDWMSysMet(v105)
               || (W32GetCurrentThreadDpiAwarenessContext(v120, v119, v121, v122) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v123, v124, v125) + 408)
                 ? (v129 = 0)
                 : (v129 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v126,
                                                                 v127,
                                                                 v128)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v129) )
        {
LABEL_216:
          if ( IsDPIDWMSysMet(0x38uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v109, v108, v110, v111) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v112, v113, v114) + 408)
              ? (v118 = 0)
              : (v118 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v115,
                                                              v116,
                                                              v117)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v118) )
          {
            v130 = (_DWORD *)(gpsi + 2880LL);
          }
          else
          {
            v130 = (_DWORD *)(gpsi + 2104LL);
          }
LABEL_231:
          if ( (*v130 & 8) != 0 )
          {
            v131 = *(_QWORD *)a1;
            if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
              xxxCallHook(1u, *(_QWORD *)a1, 0LL, 0xAu);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
              PostShellHookMessagesEx(1u, v131, 0LL);
          }
          goto LABEL_236;
        }
        v130 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_231;
      }
      v100 = v157;
      v101 = 0LL;
      if ( v157 )
      {
        v101 = v152;
        v102 = *(_DWORD *)(*((_QWORD *)a1 + 11) + 120LL) - v152;
        LODWORD(v152) = *(_DWORD *)(*((_QWORD *)a1 + 11) + 120LL) - DWORD2(v152);
        DWORD2(v152) = v102;
      }
      if ( v31 == 3 || !(unsigned int)IsTrayWindow((__int64)a1) )
      {
        v103 = a1;
      }
      else
      {
        *(_QWORD *)&v165.left = 0LL;
        *(_QWORD *)&v165.right = 0LL;
        xxxSendMinRectMessages(a1, &v165);
        if ( IsRectEmptyInl(&v165) )
          goto LABEL_209;
        v103 = a1;
      }
      xxxDrawAnimatedRects(v103);
LABEL_209:
      if ( v100 )
        v152 = v101;
      goto LABEL_212;
    }
    if ( v24 > 7 )
    {
      if ( v24 != 9 )
        goto LABEL_42;
      goto LABEL_62;
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 88LL) )
      v5 |= 0x10u;
    v33 = 0LL;
    v34 = *((_QWORD *)a1 + 9);
    if ( !v34 )
      goto LABEL_58;
    do
    {
      if ( (*(_BYTE *)(v34 + 44) & 0x20) != 0 || (*(_BYTE *)(v34 + 48) & 8) != (*((_BYTE *)a1 + 48) & 8) )
        break;
      if ( *(_QWORD *)(v34 + 104) == *((_QWORD *)a1 + 13) )
        v33 = (unsigned __int64 *)v34;
      v34 = *(_QWORD *)(v34 + 72);
    }
    while ( v34 );
    if ( v33 )
      v161 = *v33;
    else
LABEL_58:
      v5 |= 4u;
LABEL_54:
    v35 = *((_BYTE *)a1 + 55);
    v32 = 1;
    if ( (v35 & 0x20) != 0 )
    {
      if ( (v35 & 0x10) != 0 )
        goto LABEL_28;
      v31 = 0;
      v5 |= 0x17u;
      goto LABEL_57;
    }
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    {
      v50 = (void *)ReferenceDwmApiPort(v46, v45, v47, v48);
      if ( v50 )
      {
        if ( gdwInAtomicOperation )
        {
          v49 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v49, gdwInAtomicOperation);
        DwmSyncNotifyMinimizing(v50);
        EnterCrit(0LL, 1LL);
      }
      v24 = v153;
    }
    v51 = *((_DWORD *)v20 + 8);
    v31 = 2;
    if ( (v51 & 1) == 0 )
      *((_DWORD *)v20 + 8) = v51 & 0xFFFFFFF7;
    if ( (v20[2] & 8) == 0 )
    {
      ParkIcon(a1, v20 + 1);
      *((_DWORD *)v20 + 8) |= 8u;
    }
    *(_QWORD *)&v152 = *((_QWORD *)v20 + 2);
    DWORD2(v152) = *((_DWORD *)v20 + 4) + GetSystemMetricsForWindow((__int64)a1, 0x39u);
    HIDWORD(v152) = *((_DWORD *)v20 + 5) + GetSystemMetricsForWindow((__int64)a1, 0x3Au);
    xxxShowOwnedWindows(a1, 1LL, 0LL);
    for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL); i; i = *(_QWORD *)(i + 88) )
    {
      if ( (struct tagWND *)i == a1 )
      {
        v162[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v162;
        v162[1] = i;
        ++*(_DWORD *)(i + 8);
        if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
        {
          v53 = *((_QWORD *)a1 + 11);
          v163[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v163;
          v163[1] = v53;
          if ( v53 )
            ++*(_DWORD *)(v53 + 8);
          xxxSetFocus(*((struct tagWND **)a1 + 11), 0LL);
          ThreadUnlock1(v55, v54);
        }
        else
        {
          xxxSetFocus(0LL, 0LL);
        }
        ThreadUnlock1(v57, v56);
        break;
      }
    }
    if ( (*((_BYTE *)a1 + 55) & 1) != 0 )
    {
      v149 = 1;
      *((_DWORD *)v20 + 8) = v20[2] & 0xFFFFFF9D | 2;
      goto LABEL_126;
    }
    v58 = *((_BYTE *)a1 + 289);
    if ( (v58 & 3) == 3 )
    {
      v59 = v20[2] & 0xFFFFFF9D | 0x60;
    }
    else if ( (v58 & 1) != 0 )
    {
      v59 = v20[2] & 0xFFFFFF9D | 0x20;
    }
    else
    {
      if ( (v58 & 2) == 0 )
      {
        *((_DWORD *)v20 + 8) &= 0xFFFFFF9D;
LABEL_126:
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
        {
          v60 = 0;
        }
        else
        {
          v60 = IsTrayWindow((__int64)a1);
          v151 = v60;
        }
        v61 = *((_BYTE *)a1 + 55);
        if ( (v61 & 0x20) != 0 )
        {
          if ( (v61 & 0x10) != 0 )
            goto LABEL_28;
          v32 = 1;
          v5 |= 0x17u;
          v36 = v149;
          v152 = 0uLL;
          v37 = 0;
        }
        else
        {
          SetMinimize(a1, 1LL);
          SetOrClrWF(0, a1, 0xF01u, 1);
          v154 = 22;
          if ( (*((_BYTE *)a1 + 45) & 2) == 0 )
            v151 = v60 != IsTrayWindow((__int64)a1);
          for ( j = *((_QWORD *)a1 + 12); j; j = *(_QWORD *)(j + 72) )
            ClrFTrueVis(j);
          v5 |= 0x8120u;
          DesktopWindow = GetDesktopWindow((__int64)a1);
          v32 = 1;
          v36 = v149;
          if ( *((_QWORD *)a1 + 11) == DesktopWindow )
            v37 = *((_BYTE *)a1 + 42) & 0x20;
          else
            v37 = 0;
        }
        goto LABEL_192;
      }
      v59 = v20[2] & 0xFFFFFF9D | 0x40;
    }
    *((_DWORD *)v20 + 8) = v59;
    goto LABEL_126;
  }
LABEL_69:
  v41 = *((_BYTE *)a1 + 55);
  v42 = a3;
  if ( (v41 & 1) == 0 )
  {
    v5 |= 0x8000u;
LABEL_89:
    v36 = 1;
    if ( (a3 & 1) != 0 )
      v5 |= 0x10u;
    if ( (v41 & 0x20) != 0 )
      *((_DWORD *)v20 + 8) |= 4u;
    xxxInitSendValidateMinMaxInfoEx((__int64)a1, (__int64)v166, a4, 0);
LABEL_78:
    if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 )
    {
      if ( !xxxSendMessage(a1, 0x13u, 0LL, 0LL) )
        goto LABEL_28;
      v158 = 1;
      v31 = 1;
      if ( (v5 & 0x10) == 0 )
      {
        v44 = (*((_BYTE *)a1 + 55) & 0x40) == 0;
        v159 = 1;
        v155 = v44;
      }
      v5 |= 0x100u;
    }
    else
    {
      v31 = 3;
    }
    switch ( v24 )
    {
      case 3u:
        *(_QWORD *)&v152 = v166[2];
        DWORD2(v152) = LODWORD(v166[1]) + LODWORD(v166[2]);
        HIDWORD(v152) = HIDWORD(v166[2]) + HIDWORD(v166[1]);
        SetOrClrWF(1, a1, 0xF01u, 1);
        SetOrClrWF(0, a1, 0xF901u, 1);
        SetOrClrWF(0, a1, 0xF902u, 1);
        SetOrClrWF(0, a1, 0xFB01u, 1);
        if ( (v42 & 0x10) == 0 && gSqmIsOptedIn )
          WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
LABEL_154:
        if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 )
        {
LABEL_191:
          v32 = 0;
          v5 |= 0x20u;
          v37 = 0;
          goto LABEL_192;
        }
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
          v66 = 0;
        else
          v66 = IsTrayWindow((__int64)a1);
        SetMinimize(a1, 0LL);
        v154 = 23;
        if ( (*((_BYTE *)a1 + 45) & 2) != 0 || v66 == (unsigned int)IsTrayWindow((__int64)a1) )
        {
LABEL_182:
          v95 = *((_BYTE *)a1 + 55);
          v151 = 0;
          if ( (v95 & 0xC0) != 0x40 && (v95 & 0x10) != 0 )
          {
            v96 = *((_QWORD *)a1 + 2);
            if ( *(_DWORD *)(v96 + 784) == 1 )
            {
              v97 = *(_QWORD *)(v96 + 384);
              if ( v97 != gpqForeground
                && ((v5 & 0x10) == 0 || *(struct tagWND **)(v97 + 88) == a1)
                && ((unsigned int)CheckForegroundRight(a1, &v156) || !v156) )
              {
                xxxSetForegroundWindow2((LARGE_INTEGER *)a1, *((_QWORD *)a1 + 2), 1u, 0);
              }
            }
          }
          goto LABEL_191;
        }
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v68, v67, v69, v70) & 0xF) != 0 )
            goto LABEL_162;
        }
        else if ( !IsDPIDWMSysMet(v68)
               || (W32GetCurrentThreadDpiAwarenessContext(v83, v82, v84, v85) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88) + 408)
                 ? (v92 = 0)
                 : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v89,
                                                                v90,
                                                                v91)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v92) )
        {
LABEL_162:
          if ( IsDPIDWMSysMet(0x38uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v72, v71, v73, v74) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
              ? (v81 = 0)
              : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v78,
                                                             v79,
                                                             v80)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v81) )
          {
            v93 = (_DWORD *)(gpsi + 2880LL);
          }
          else
          {
            v93 = (_DWORD *)(gpsi + 2104LL);
          }
LABEL_177:
          if ( (*v93 & 8) != 0 )
          {
            v94 = *(_QWORD *)a1;
            if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
              xxxCallHook(2u, *(_QWORD *)a1, 0LL, 0xAu);
            if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
              PostShellHookMessagesEx(2u, v94, 0LL);
          }
          goto LABEL_182;
        }
        v93 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_177;
      case 0xCu:
        v152 = v23;
        SetOrClrWF(0, a1, 0xF01u, 1);
        v64 = 1;
        break;
      case 0xEu:
        v152 = v23;
        SetOrClrWF(0, a1, 0xF01u, 1);
        SetOrClrWF(1, a1, 0xF901u, 1);
        v65 = 0;
LABEL_152:
        SetOrClrWF(v65, a1, 0xF902u, 1);
        v5 |= 0x100000u;
        goto LABEL_154;
      case 0xDu:
        v152 = v23;
        SetOrClrWF(0, a1, 0xF01u, 1);
        v64 = 0;
        break;
      default:
        v152 = v22;
        SetOrClrWF(0, a1, 0xF01u, 1);
        goto LABEL_154;
    }
    SetOrClrWF(v64, a1, 0xF901u, 1);
    v65 = 1;
    goto LABEL_152;
  }
  if ( (v41 & 0x10) == 0 || (a3 & 2) != 0 )
    goto LABEL_89;
LABEL_28:
  if ( !v160 && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v29 = (void *)ReferenceDwmApiPort(v26, v25, v27, v28);
    DwmAsyncNotifyAnimationChange(v29);
  }
  return 0LL;
}
