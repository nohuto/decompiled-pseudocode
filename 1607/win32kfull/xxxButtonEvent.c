/*
 * XREFs of xxxButtonEvent @ 0x1C00DDEA4
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00EC208 (xxxRemoteStopScreenUpdates.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01E4A50 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00072B4 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0058710 (IsPointerPromotedMouseMessage.c)
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     UpdateAsyncKeyState @ 0x1C00A3520 (UpdateAsyncKeyState.c)
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 *     GetActiveHKL @ 0x1C00A41B4 (GetActiveHKL.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     ProcessHungWindow @ 0x1C00D5348 (ProcessHungWindow.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C00DC5C0 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C00DEF30 (FixupPromotedMouseExtraInfoForHook.c)
 *     IsCurrentDesktopComposed @ 0x1C00DF580 (IsCurrentDesktopComposed.c)
 *     RawInputRequestedForMouse @ 0x1C00E15EC (RawInputRequestedForMouse.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     CheckAccessForIntegrityLevel @ 0x1C01CAB10 (CheckAccessForIntegrityLevel.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01CF5E8 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C01E55A8 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     xxxCancelCoolSwitch @ 0x1C01F8800 (xxxCancelCoolSwitch.c)
 */

__int64 __fastcall xxxButtonEvent(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 *a15,
        _DWORD *a16)
{
  int v16; // edi
  unsigned __int8 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // r14d
  __int64 *v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 result; // rax
  int v27; // r10d
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  BOOL v53; // ecx
  _DWORD *v54; // rcx
  unsigned int v55; // r11d
  __int64 v56; // rdx
  unsigned __int16 v57; // di
  __int64 v58; // r8
  unsigned int v59; // r13d
  int v60; // r15d
  __int64 v61; // rcx
  unsigned int v62; // ebx
  unsigned int v63; // edi
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // r15
  __int64 v68; // rcx
  __int64 *v69; // r9
  char v70; // r9
  __int64 v71; // r10
  int v72; // r11d
  __int64 v73; // r12
  __int64 v74; // rbx
  __int64 v75; // rdi
  _QWORD *v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r10
  struct _MOUSE_INPUT_DATA *v80; // rdx
  void *v81; // r8
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  __int64 v90; // rdx
  __int64 v91; // r8
  int v92; // ebx
  struct tagWND *v93; // rcx
  struct tagWND *v94; // rax
  unsigned int v95; // ebx
  __int64 v96; // r15
  __int64 v97; // r12
  int v98; // eax
  __int64 v99; // r9
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v101; // rbx
  __int64 v102; // rcx
  unsigned int v103; // r15d
  int v104; // r12d
  int v105; // esi
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rcx
  bool v109; // zf
  __int64 v110; // rcx
  int v111; // r15d
  __int64 v112; // rbx
  struct tagWND *v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 *v118; // r9
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  _QWORD *v127; // r9
  __int64 v128; // [rsp+28h] [rbp-D8h]
  __int64 v129; // [rsp+28h] [rbp-D8h]
  __int64 v130; // [rsp+40h] [rbp-C0h]
  __int64 v131; // [rsp+40h] [rbp-C0h]
  int v132; // [rsp+60h] [rbp-A0h]
  unsigned int v134; // [rsp+68h] [rbp-98h]
  unsigned int v135; // [rsp+6Ch] [rbp-94h]
  __int64 v136; // [rsp+78h] [rbp-88h]
  unsigned int v137; // [rsp+80h] [rbp-80h]
  int v138; // [rsp+84h] [rbp-7Ch] BYREF
  struct tagPOINT v139; // [rsp+88h] [rbp-78h] BYREF
  __int64 v140; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v141; // [rsp+98h] [rbp-68h]
  __int64 v142; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v143; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v144; // [rsp+B0h] [rbp-50h]
  __int64 v145; // [rsp+B8h] [rbp-48h]
  __int64 v146; // [rsp+C0h] [rbp-40h]
  _WORD v147[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v148; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v149; // [rsp+D8h] [rbp-28h]
  int v150; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v151; // [rsp+F0h] [rbp-10h]
  __int64 v152; // [rsp+F8h] [rbp-8h]
  __int64 v153; // [rsp+100h] [rbp+0h]
  _QWORD v154[3]; // [rsp+108h] [rbp+8h] BYREF
  struct tagPOINT v155; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v156; // [rsp+128h] [rbp+28h]
  BOOL v157; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v158; // [rsp+130h] [rbp+30h]
  __int64 v159; // [rsp+138h] [rbp+38h]
  _BYTE v160[64]; // [rsp+140h] [rbp+40h] BYREF

  v16 = 0;
  v17 = 0;
  v138 = 0;
  v144 = a6;
  v152 = a8;
  v139 = a2;
  v141 = a16;
  v151 = a3;
  v135 = a1;
  v18 = gptiCurrent;
  v146 = a9;
  v134 = 0;
  v19 = *(_QWORD *)(gptiCurrent + 376LL);
  v20 = *(_QWORD *)(v19 + 824);
  v21 = *(_DWORD *)(v19 + 12) >> 31;
  v132 = v21;
  v140 = v20;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))IsDwmInputThread)(a1, a2) )
  {
    if ( a14 )
    {
      v20 = *a15;
      v21 = *((_DWORD *)a15 + 2);
      v140 = *a15;
      v132 = v21;
    }
    v145 = gptiRit;
  }
  else
  {
    a14 = 0;
    v145 = gptiCurrent;
  }
  if ( gspwndAltTab )
  {
    xxxCancelCoolSwitch();
    if ( !a11
      && a10
      && gpqForeground
      && !(unsigned int)CheckAccessForIntegrityLevel(v20, *(_QWORD *)(gpqForeground + 380LL))
      && !v21 )
    {
      v23 = *v22;
      v24 = 0LL;
LABEL_13:
      v25 = v18;
      return EtwTraceUIPIInputError(v25, v24, v23, *(_QWORD *)(v23 + 380), 1);
    }
  }
  v27 = v135;
  v137 = v135;
  if ( (v135 & 3) == 0 )
    goto LABEL_49;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) != 0 )
      goto LABEL_18;
LABEL_28:
    v54 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_33;
  }
  if ( IsDPIDWMSysMet(v29) && (W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46) & 0xF) == 0 )
  {
    v53 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 408)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52) + 408)
                                + 8LL)
                    + 244LL) & 1;
    v20 = v140;
    if ( v53 )
      goto LABEL_28;
  }
LABEL_18:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 408)
      ? (v42 = 0)
      : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v20 = v140,
        v42) )
  {
    v54 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v54 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_33:
  if ( !*v54 || a9 && *(char *)(a9 + 2) < 0 )
  {
    v27 = v135;
  }
  else
  {
    v27 = v135 ^ 3;
    v135 ^= 3u;
  }
  if ( v27 == 2 )
  {
    v17 = 2;
    v134 = 2;
    v16 = 1;
  }
  else if ( v27 == 1 )
  {
    v17 = 1;
    v134 = 1;
    v16 = 2;
  }
  if ( !gbMouseButtonsRecentlySwapped || a9 && *(char *)(a9 + 2) < 0 )
  {
LABEL_49:
    v55 = a4;
    goto LABEL_50;
  }
  v55 = a4;
  if ( (a4 == 0) == (((unsigned __int8)(1 << (2 * (v17 & 3))) & gafAsyncKeyState[(unsigned __int64)v17 >> 2]) != 0)
    && a4 == (((unsigned __int8)(1 << (2 * (v16 & 3))) & gafAsyncKeyState[(unsigned __int64)(unsigned __int8)v16 >> 2]) != 0) )
  {
    v27 ^= 3u;
    v134 = v16;
    v135 = v27;
  }
  gbMouseButtonsRecentlySwapped = 0;
LABEL_50:
  v56 = 514LL;
  v57 = 0;
  v58 = 513LL;
  switch ( v27 )
  {
    case 1:
      if ( v55 )
      {
        v59 = 514;
      }
      else
      {
        if ( !a13 )
        {
          v59 = 513;
          v60 = 2;
          goto LABEL_74;
        }
        v59 = 515;
      }
LABEL_72:
      v60 = 0;
      goto LABEL_74;
    case 2:
      v60 = 0;
      if ( v55 )
        v59 = 517;
      else
        v59 = a13 != 0 ? 518 : 516;
      goto LABEL_74;
    case 4:
      if ( v55 )
        v59 = 520;
      else
        v59 = a13 != 0 ? 521 : 519;
      v134 = 4;
      goto LABEL_72;
  }
  result = (unsigned int)(v27 - 8);
  if ( v27 != 8 && v27 != 16 )
    return result;
  if ( v55 )
    v59 = 524;
  else
    v59 = a13 != 0 ? 525 : 523;
  v60 = 0;
  if ( v27 == 8 )
  {
    v134 = 5;
    v57 = 1;
  }
  else
  {
    v134 = 6;
    v57 = 2;
  }
LABEL_74:
  result = 2147516416LL;
  v61 = (unsigned int)gpdwCPUserPreferencesMask & 0x80008000;
  if ( (_DWORD)v61 == -2147450880 )
  {
    if ( v59 == 513 )
    {
      if ( gfStartClickLock )
      {
        gfStartClickLock = 0;
        return result;
      }
      gdwStartClickLockTick = a5;
      gfStartClickLock = 1;
    }
    else if ( v59 == 514 && gfStartClickLock )
    {
      v62 = a5 - gdwStartClickLockTick;
      result = UPDWORDPointer(8200LL);
      if ( v62 > *(_DWORD *)result )
        return result;
      gfStartClickLock = 0;
    }
  }
  v63 = v57 << 16;
  v136 = v63;
  v143 = v139;
  v64 = IsCurrentDesktopComposed(v61, v56, v58);
  v65 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( v64 )
    v66 = DCESpeedHitTest(v65, 4u, v60, v144, (__int64 *)&v139, v151, &v138, (__int64)v160, 0LL, 0LL);
  else
    v66 = SpeedHitTest(v65, 4u, v60, v144, *(_QWORD *)&v139, *(_QWORD *)&v139, (__int64)v160, 0LL, 0LL);
  v67 = v66;
  if ( PhkFirstValid(v145, 14) )
  {
    v155 = v139;
    v156 = v63;
    v158 = a5;
    v157 = a10 != 0;
    v159 = FixupPromotedMouseExtraInfoForHook(v146, a7);
    v73 = *(_QWORD *)(gptiCurrent + 1232LL);
    v74 = *(_QWORD *)(gptiCurrent + 1216LL);
    v75 = *(_QWORD *)(gptiCurrent + 1224LL);
    *(_QWORD *)(gptiCurrent + 1232LL) = &v155;
    if ( v67 )
    {
      v76 = *(_QWORD **)(*(_QWORD *)(v67 + 16) + 376LL);
      if ( *v76 == gpepCSRSS )
      {
        *(_DWORD *)(gptiCurrent + 1228LL) = 0;
        *(_DWORD *)(gptiCurrent + 1224LL) = 0x2000;
      }
      else
      {
        *(_QWORD *)(gptiCurrent + 1224LL) = v76[103];
      }
      v70 = 1;
    }
    else
    {
      *(_DWORD *)(gptiCurrent + 1224LL) = -1;
      *(_DWORD *)(gptiCurrent + 1228LL) = -1;
    }
    if ( !v72 || v132 )
    {
      *(_DWORD *)(gptiCurrent + 1216LL) = -1;
      *(_DWORD *)(gptiCurrent + 1220LL) = -1;
    }
    else
    {
      *(_QWORD *)(gptiCurrent + 1216LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    }
    v148 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v148;
    v149 = v67;
    if ( v67 )
      ++*(_DWORD *)(v67 + 8);
    if ( xxxCallHook2(v71, 0, v59, (int *)&v155, &v150, v70) )
    {
      result = ThreadUnlock1(v78, v77);
      *(_QWORD *)(gptiCurrent + 1216LL) = v74;
      *(_QWORD *)(gptiCurrent + 1224LL) = v75;
      *(_QWORD *)(gptiCurrent + 1232LL) = v73;
      return result;
    }
    v67 = ThreadUnlock1(v78, v77);
    v79 = gptiCurrent;
    *(_QWORD *)(gptiCurrent + 1216LL) = v74;
    *(_QWORD *)(gptiCurrent + 1224LL) = v75;
    *(_QWORD *)(gptiCurrent + 1232LL) = v73;
    if ( !a11 )
    {
      if ( a10 )
      {
        v69 = (__int64 *)gpqForeground;
        if ( gpqForeground )
        {
          if ( !(unsigned int)CheckAccessForIntegrityLevel(v20, *(_QWORD *)(gpqForeground + 380LL)) && !v132 )
          {
            v23 = *v69;
            v24 = 0LL;
            v25 = v79;
            return EtwTraceUIPIInputError(v25, v24, v23, *(_QWORD *)(v23 + 380), 1);
          }
        }
      }
    }
    v18 = v79;
  }
  if ( v152 && v146 && (unsigned int)RawInputRequestedForMouse(v68, v146, v152, v69) )
    PostRawMouseInput(gpqForeground, a5, v81, v80);
  result = gpqForeground;
  if ( gpqForeground )
  {
    v82 = *(_QWORD *)(gpqForeground + 72LL);
    v83 = v82 ? *(_QWORD *)(v82 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    result = HasHidTable(v83);
    if ( (_DWORD)result )
    {
      v84 = *(_QWORD *)(gpqForeground + 72LL);
      v85 = v84 ? *(_QWORD *)(v84 + 16) : *(_QWORD *)(gpqForeground + 56LL);
      result = *(_QWORD *)(v85 + 376);
      if ( (*(_DWORD *)(*(_QWORD *)(result + 776) + 100LL) & 0x100) != 0 )
      {
        v86 = *(_QWORD *)(gpqForeground + 72LL);
        v87 = v86 ? *(_QWORD *)(v86 + 16) : *(_QWORD *)(gpqForeground + 56LL);
        result = *(_QWORD *)(v87 + 376);
        v88 = *(_QWORD *)(*(_QWORD *)(result + 776) + 64LL);
        if ( v88 )
          return UpdateAsyncKeyState(*(_QWORD *)(*(_QWORD *)(v88 + 16) + 384LL), v134, a4);
      }
    }
  }
  CompositionInputWindowUIOwner = (struct tagWND *)v67;
  if ( v67 )
  {
    v138 = IsPointerPromotedMouseMessage(v59, v141);
    v92 = v138;
    if ( v138
      && !(unsigned int)CheckAccessForIntegrityLevel(
                          v20,
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 + 16) + 376LL) + 824LL)) )
    {
      v24 = *(_QWORD *)(v67 + 16);
LABEL_130:
      v23 = *(_QWORD *)(v24 + 384);
      goto LABEL_13;
    }
    v142 = (LOWORD(v139.y) << 16) | LOWORD(v139.x);
    if ( (*gpsi & 4) != 0
      && !a4
      && (GetActiveHKL(gpsi, v90, v91, 0LL) & 0x3FF) == 0x12
      && (*(_BYTE *)(*(_QWORD *)(v67 + 152) + 86LL) & 1) == 0
      && gpqForeground )
    {
      FinalizeKoreanImeCompStrOnMouseClick((struct tagWND *)v67);
    }
    v93 = gspwndScreenCapture;
    if ( gspwndScreenCapture )
    {
      CompositionInputWindowUIOwner = gspwndScreenCapture;
      if ( v92
        && !(unsigned int)CheckAccessForIntegrityLevel(
                            v20,
                            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)gspwndScreenCapture + 2) + 376LL) + 824LL)) )
      {
        v24 = *((_QWORD *)CompositionInputWindowUIOwner + 2);
        goto LABEL_130;
      }
      UpdateMouseButtonTarget(CompositionInputWindowUIOwner, (struct tagWND *)v67, v143, &v139, &v142);
      v93 = gspwndScreenCapture;
    }
    v94 = gspwndMouseOwner;
    if ( gspwndMouseOwner )
    {
      if ( v93 )
      {
        v95 = a4;
      }
      else
      {
        if ( v92 )
        {
          v109 = (unsigned int)CheckAccessForIntegrityLevel(
                                 v20,
                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)gspwndMouseOwner + 2) + 376LL) + 824LL)) == 0;
          v94 = gspwndMouseOwner;
          if ( v109 )
          {
            v24 = *((_QWORD *)gspwndMouseOwner + 2);
            goto LABEL_130;
          }
        }
        v95 = a4;
        if ( a4 )
        {
          v110 = *((_QWORD *)CompositionInputWindowUIOwner + 2);
          if ( v110 != *((_QWORD *)v94 + 2) )
          {
            SetLastInputWoken(v110, 0LL);
            v94 = gspwndMouseOwner;
          }
        }
        CompositionInputWindowUIOwner = v94;
        UpdateMouseButtonTarget(v94, (struct tagWND *)v67, v143, &v139, &v142);
      }
      if ( v95 )
      {
        v104 = 2;
        if ( a12 )
          PostEventMessageEx(
            *((_QWORD *)CompositionInputWindowUIOwner + 2),
            *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL),
            2u,
            0LL,
            0,
            0LL,
            0LL,
            0LL);
        v103 = v137;
        gwMouseOwnerButton &= ~v137;
        if ( !gwMouseOwnerButton )
          HMAssignmentUnlock(&gspwndMouseOwner);
LABEL_161:
        UpdateAsyncKeyState(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL), v134, v95);
        if ( v95
          || (result = *((_QWORD *)CompositionInputWindowUIOwner + 2), *(_QWORD *)(result + 384) == gpqForeground) )
        {
          result = *((_QWORD *)CompositionInputWindowUIOwner + 2);
          v119 = *(_QWORD *)(result + 384);
          if ( v119 == gpqForeground || !a10 )
            goto LABEL_168;
          result = CheckAccessForIntegrityLevel(v20, *(_QWORD *)(v119 + 380));
          v105 = v132;
          if ( (_DWORD)result || v132 )
            goto LABEL_169;
          v24 = *((_QWORD *)CompositionInputWindowUIOwner + 2);
        }
        else
        {
          if ( gpqForeground )
          {
            result = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( CompositionInputWindowUIOwner == *(struct tagWND **)(result + 16)
              && ((gwMouseOwnerButton & v103) != 0 || !gwMouseOwnerButton) )
            {
              result = PostEventMessageEx(*(_QWORD *)(gpqForeground + 56LL), gpqForeground, 2u, 0LL, 0, 0LL, 0LL, 0LL);
LABEL_168:
              v105 = v132;
LABEL_169:
              if ( CompositionInputWindowUIOwner )
              {
                if ( !v138
                  || (result = *((_QWORD *)CompositionInputWindowUIOwner + 2), (*(_DWORD *)(result + 440) & 1) == 0) )
                {
                  v106 = *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL);
                  v107 = *(_QWORD *)(v106 + 72);
                  v108 = v107 ? *(_QWORD *)(v107 + 16) : *(_QWORD *)(v106 + 56);
                  if ( !(unsigned int)HasHidTable(v108)
                    || ((v120 = *(_QWORD *)(v106 + 72)) == 0
                      ? (v121 = *(_QWORD *)(v106 + 56))
                      : (v121 = *(_QWORD *)(v120 + 16)),
                        result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v121 + 376) + 776LL) + 100LL),
                        (result & 2) == 0) )
                  {
                    if ( (*(_DWORD *)(v106 + 340) & 0x20) != 0 )
                      PostMoveToPwnd(v106, 0LL, 0);
                    v122 = *((_QWORD *)CompositionInputWindowUIOwner + 39);
                    if ( v122 )
                    {
                      v123 = *(_QWORD *)(v122 + 384);
                      if ( (*(_DWORD *)(v123 + 340) & 0x20) != 0 )
                        PostMoveToPwnd(v123, 0LL, 0);
                    }
                    if ( !a14 || (v124 = &v140, v105) )
                      v124 = 0LL;
                    if ( !a14 || v105 )
                      v104 = 0;
                    LODWORD(v130) = v104;
                    LODWORD(v128) = a5;
                    PostInputMessage(
                      *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL),
                      (__int64)CompositionInputWindowUIOwner,
                      v59,
                      v136,
                      v142,
                      v128,
                      v144,
                      a7,
                      v130,
                      v141,
                      0LL,
                      v124);
                    v126 = gptiCurrent;
                    v148 = *(_QWORD *)(gptiCurrent + 368LL);
                    *(_QWORD *)(gptiCurrent + 368LL) = &v148;
                    v149 = (__int64)CompositionInputWindowUIOwner;
                    ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
                    if ( !a4 )
                      goto LABEL_256;
                    v126 = (unsigned int)xmmword_1C0326F04;
                    if ( (dword_1C0326F2C & 1) == 0 && (xmmword_1C0326F04 & 1) == 0 )
                      goto LABEL_256;
                    if ( (xmmword_1C0326F04 & 1) != 0 )
                    {
                      v126 = v135;
                      LOWORD(v126) = ~(_WORD)v135;
                      gwMKButtonState &= ~(_WORD)v135;
                    }
                    if ( (dword_1C0326F2C & 1) != 0 )
                      xxxUnlatchStickyKeys();
                    if ( a10
                      && (v125 = gpqForeground) != 0
                      && !(unsigned int)CheckAccessForIntegrityLevel(v140, *(_QWORD *)(gpqForeground + 380LL))
                      && !v105 )
                    {
                      EtwTraceUIPIInputError(gptiCurrent, 0LL, *v127, *(_QWORD *)(*v127 + 380LL), 1);
                    }
                    else
                    {
LABEL_256:
                      if ( v59 == 513 )
                      {
                        v126 = *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 408LL);
                        if ( v126 )
                        {
                          if ( *(_QWORD *)(v126 + 24) )
                          {
                            if ( IsHungWindow((__int64)CompositionInputWindowUIOwner) )
                              ProcessHungWindow();
                          }
                        }
                      }
                    }
                    return ThreadUnlock1(v126, v125);
                  }
                }
              }
              return result;
            }
          }
          if ( (gwMouseOwnerButton & v103) != 0 )
          {
            v111 = 0;
          }
          else
          {
            v111 = 0;
            if ( gwMouseOwnerButton )
              goto LABEL_168;
          }
          v112 = (__int64)CompositionInputWindowUIOwner;
          if ( (unsigned int)IsCompositionInputWindow(CompositionInputWindowUIOwner)
            && *((_QWORD *)CompositionInputWindowUIOwner + 11) == GetMessageWindow((__int64)CompositionInputWindowUIOwner) )
          {
            CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v113);
          }
          if ( !a10
            || (unsigned int)CheckAccessForIntegrityLevel(
                               v20,
                               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v112 + 16) + 384LL) + 380LL))
            || v132 )
          {
            result = GetNonChildAncestor((__int64)CompositionInputWindowUIOwner);
            if ( (*(_BYTE *)(result + 51) & 8) != 0 || (*((_BYTE *)CompositionInputWindowUIOwner + 289) & 0x10) != 0 )
              goto LABEL_213;
            if ( CompositionInputWindowUIOwner != (struct tagWND *)v112 )
            {
              v111 = 1;
              v154[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v154;
              v154[1] = v112;
              ++*(_DWORD *)(v112 + 8);
            }
            v148 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v148;
            v149 = (__int64)CompositionInputWindowUIOwner;
            ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
            xxxSetForegroundWindow2((LARGE_INTEGER *)CompositionInputWindowUIOwner, 0LL, 0, 0);
            result = ThreadUnlock1(v115, v114);
            if ( v111 == 1 )
            {
              result = ThreadUnlock1(v117, v116);
              v112 = result;
            }
            if ( !a10
              || !gpqForeground
              || (result = CheckAccessForIntegrityLevel(v20, *(_QWORD *)(gpqForeground + 380LL)), (_DWORD)result)
              || v132 )
            {
LABEL_213:
              CompositionInputWindowUIOwner = (struct tagWND *)v112;
              goto LABEL_168;
            }
            v23 = *v118;
            v24 = 0LL;
LABEL_201:
            v25 = gptiCurrent;
            return EtwTraceUIPIInputError(v25, v24, v23, *(_QWORD *)(v23 + 380), 1);
          }
          v24 = *(_QWORD *)(v112 + 16);
        }
        v23 = *(_QWORD *)(v24 + 384);
        goto LABEL_201;
      }
      goto LABEL_159;
    }
    v95 = a4;
    if ( a4 )
    {
      v103 = v137;
      gwMouseOwnerButton &= ~v137;
      goto LABEL_160;
    }
    v96 = gpqForeground;
    if ( gpqForeground )
      v96 = *(_QWORD *)(gpqForeground + 72LL);
    if ( !v96
      || *(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 2) + 384LL) == *(_QWORD *)(*(_QWORD *)(v96 + 16) + 384LL) )
    {
      goto LABEL_158;
    }
    v97 = v142;
    v98 = IsWindowDesktopComposed(v96);
    v99 = 0LL;
    if ( v98 && ((*((_BYTE *)CompositionInputWindowUIOwner + 352) ^ *(_BYTE *)(v96 + 352)) & 0xF) != 0 )
    {
      v153 = ValidateHmonitorNoRip(*(_QWORD *)(v96 + 344));
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v96);
      PhysicalToLogicalDPIPoint(v147, &v143, MonitorFlagsFromWindow);
      v97 = v147[0] | (v147[2] << 16);
      v99 = 0LL;
    }
    if ( !a10
      || (unsigned int)CheckAccessForIntegrityLevel(
                         v20,
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v96 + 16) + 384LL) + 380LL))
      || v132 != (_DWORD)v99 )
    {
      v101 = *(_QWORD *)(*(_QWORD *)(v96 + 16) + 384LL);
      LODWORD(v130) = v99;
      LODWORD(v128) = v99;
      PostInputMessage(v101, v96, v59, 0LL, v97, v128, v99, v99, v130, v141, v99, v99);
      LODWORD(v131) = 0;
      LODWORD(v129) = 0;
      PostInputMessage(v101, v96, v59 + 1, 0LL, v97, v129, 0LL, 0LL, v131, v141, 0LL, 0LL);
      v95 = 0;
      v99 = 0LL;
    }
    result = *(_QWORD *)(v96 + 16);
    if ( *(_QWORD *)(result + 592) == v99
      || (v102 = *(_QWORD *)(result + 528)) != 0 && (result = *(unsigned int *)(v102 + 8), (result & 1) != 0) )
    {
LABEL_158:
      HMAssignmentLock(&gspwndMouseOwner, CompositionInputWindowUIOwner);
LABEL_159:
      v103 = v137;
      gwMouseOwnerButton |= v137;
LABEL_160:
      v104 = 2;
      goto LABEL_161;
    }
  }
  return result;
}
