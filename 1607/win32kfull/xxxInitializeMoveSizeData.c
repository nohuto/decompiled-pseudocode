/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C0203F8C
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FF19C (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     zzzSetCursor @ 0x1C0078168 (zzzSetCursor.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     _MonitorFromPoint @ 0x1C00AEF70 (_MonitorFromPoint.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     GetCaptionHeight @ 0x1C011CE48 (GetCaptionHeight.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     MoveWithArrangementAllowed @ 0x1C01F9AA0 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01F9AC8 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C01F9B88 (WindowArrangementAllowed.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC0C4 (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FCBA0 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FEF8C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FF6E4 (-xxxMS_FlushWigglies@@YAXXZ.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int *v12; // r9
  __int64 v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rax
  int *v16; // r14
  __int64 v17; // rax
  _OWORD *v18; // rax
  __int64 v19; // rax
  __int64 TopLevelWindow; // rax
  __int64 v21; // rcx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v23; // r8
  unsigned int v24; // r12d
  unsigned int v25; // ebx
  unsigned int v26; // r15d
  __int128 v27; // xmm0
  unsigned __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  BOOL v32; // eax
  int v33; // r8d
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  int *v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  int v76; // ecx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // ecx
  int *v88; // rcx
  int v89; // eax
  int v90; // ecx
  __int128 v91; // xmm0
  int *v92; // r14
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // ecx
  int v99; // eax
  int v100; // eax
  int v101; // ecx
  char v102; // cl
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  int v106; // eax
  int CaptionHeight; // ebx
  __int64 v108; // rdx
  unsigned __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  int v122; // ecx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  int v133; // ecx
  _DWORD *v134; // rcx
  int v135; // eax
  int v136; // eax
  int v137; // ecx
  int v138; // ecx
  int v139; // ecx
  unsigned int v140; // edx
  unsigned int v141; // edx
  unsigned int v142; // edx
  unsigned int v143; // edx
  int v144; // eax
  int v145; // eax
  int v146; // ecx
  __int64 result; // rax
  unsigned __int64 v148; // [rsp+20h] [rbp-60h]
  struct tagPOINT v149; // [rsp+20h] [rbp-60h]
  unsigned __int64 v150; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v151[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v152; // [rsp+40h] [rbp-40h] BYREF
  __int128 v153; // [rsp+50h] [rbp-30h] BYREF
  __int128 v154; // [rsp+60h] [rbp-20h] BYREF

  *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (16 * (*(_QWORD *)(gptiCurrent + 384LL) == gpqForeground))) & 0x10;
  *(_OWORD *)(a2 + 104) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(a1 + 112);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v10 != DesktopWindow )
  {
    v16 = (int *)(a2 + 72);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(v10 + 128);
    TransformRectBetweenCoordinateSpaces(a2 + 72, a2 + 72, a1, *(_QWORD *)(a1 + 88));
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( TopLevelWindow )
    {
      v21 = *(_QWORD *)(TopLevelWindow + 200);
      if ( v21 )
      {
        v154 = 0LL;
        GreGetRgnBox(v21, &v154);
        IntersectRect((_DWORD *)(a2 + 72), (int *)(a2 + 72), (int *)&v154);
      }
    }
    v152 = *(_OWORD *)v16;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(a1 + 352) & 0xF) != 2 )
    {
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
      LogicalToPhysicalDPIRect(&v152, &v152, MonitorFlagsFromWindow, 0LL);
    }
    goto LABEL_30;
  }
  if ( (*(_BYTE *)(a1 + 48) & 0x88) == 0 && *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
  {
    if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
      && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (v11 = *(unsigned int *)(*(_QWORD *)(v13 + 8) + 244LL), (v11 & 1) != 0) )
    {
      v14 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v11) + 88) + 92LL);
    }
    else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 1
           && (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (v11 = *(unsigned int *)(*(_QWORD *)(v15 + 8) + 244LL), (v11 & 1) != 0) )
    {
      v14 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v11) + 88) + 108LL);
    }
    else
    {
      v14 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v11) + 88) + 76LL);
    }
    v16 = (int *)(a2 + 72);
    *(_OWORD *)(a2 + 72) = *v14;
    v152 = *(_OWORD *)(*(_QWORD *)(GetDispInfo(v14) + 88) + 76LL);
LABEL_30:
    v12 = (int *)(a2 + 104);
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
    && (v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v17 + 8) + 244LL) & 1) != 0 )
  {
    v18 = (_OWORD *)(gpDispInfo + 120LL);
  }
  else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 1
         && (v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 244LL) & 1) != 0 )
  {
    v18 = (_OWORD *)(gpDispInfo + 136LL);
  }
  else
  {
    v18 = (_OWORD *)(gpDispInfo + 104LL);
  }
  v16 = (int *)(a2 + 72);
  *(_OWORD *)(a2 + 72) = *v18;
  v152 = *(_OWORD *)(gpDispInfo + 104LL);
LABEL_31:
  v23 = *(_QWORD *)(a1 + 88);
  v24 = (__int16)a4;
  v25 = HIWORD(a4);
  v26 = (__int16)v25;
  LODWORD(v148) = v24;
  HIDWORD(v148) = (__int16)v25;
  if ( *(_QWORD *)(v23 + 200) )
  {
    v27 = *(_OWORD *)v12;
    v28 = v148;
    v150 = v148;
    v153 = v27;
    TransformRectBetweenCoordinateSpaces(&v153, &v153, v23, a1);
    TransformPointBetweenCoordinateSpaces(&v150, &v150, *(_QWORD *)(a1 + 88), a1);
    v29 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 200LL), &v153);
    v30 = HIDWORD(v150);
    v31 = (unsigned int)v150;
    *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ ((v29 == 0) << 6)) & 0x40;
    *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (((unsigned int)GrePtInRegion(
                                                                        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 200LL),
                                                                        v31,
                                                                        v30) == 0) << 21)) & 0x200000;
  }
  else
  {
    v28 = v148;
    *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (((unsigned int)IntersectRect(v151, v12, v16) == 0) << 6)) & 0x40;
    v32 = PtInRect(v16, v148);
    *(_DWORD *)(a2 + 180) = v33 ^ (v33 ^ (!v32 << 21)) & 0x200000;
  }
  if ( (*(_DWORD *)(a2 + 180) & 0x100000) != 0 )
    zzzClipCursorEx((LONG *)&v152, 0);
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(a1 + 55) >> 5)) == 0 )
  {
    xxxGetMinMaxTrackInfo((struct _MOVESIZEDATA *)a2, a5 & 1);
    goto LABEL_73;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36, v37) & 0xF) != 0 )
      goto LABEL_39;
LABEL_49:
    v60 = (int *)(gpsi + 2496LL);
    goto LABEL_54;
  }
  if ( IsDPIDWMSysMet(v35)
    && (W32GetCurrentThreadDpiAwarenessContext(v50, v49, v51, v52) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_49;
  }
LABEL_39:
  if ( IsDPIDWMSysMet(0x39uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40, v41) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 408)
      ? (v48 = 0)
      : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v48) )
  {
    v60 = (int *)(gpsi + 2884LL);
  }
  else
  {
    v60 = (int *)(gpsi + 2108LL);
  }
LABEL_54:
  v61 = *v60;
  *(_DWORD *)(a2 + 96) = *v60;
  *(_DWORD *)(a2 + 88) = v61;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v63, v62, v64, v65) & 0xF) != 0 )
      goto LABEL_56;
  }
  else if ( !IsDPIDWMSysMet(v63)
         || (W32GetCurrentThreadDpiAwarenessContext(v78, v77, v79, v80) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v82, v83) + 408)
           ? (v87 = 0)
           : (v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v84,
                                                          v85,
                                                          v86)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v87) )
  {
LABEL_56:
    if ( IsDPIDWMSysMet(0x3AuLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v67, v66, v68, v69) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71, v72) + 408)
        ? (v76 = 0)
        : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v73,
                                                       v74,
                                                       v75)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v76) )
    {
      v88 = (int *)(gpsi + 2888LL);
    }
    else
    {
      v88 = (int *)(gpsi + 2112LL);
    }
    goto LABEL_71;
  }
  v88 = (int *)(gpsi + 2500LL);
LABEL_71:
  v89 = *v88;
  *(_DWORD *)(a2 + 100) = *v88;
  *(_DWORD *)(a2 + 92) = v89;
LABEL_73:
  v90 = *(_DWORD *)(a2 + 180);
  v91 = *(_OWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 220) = 0;
  v92 = (int *)(a2 + 216);
  *(_DWORD *)(a2 + 216) = 4;
  *(_DWORD *)(a2 + 260) = v24;
  *(_DWORD *)(a2 + 264) = v26;
  *(_DWORD *)(a2 + 268) = v24;
  *(_DWORD *)(a2 + 272) = v26;
  *(_DWORD *)(a2 + 180) = (v90 & 0xFFFFFFFC ^ (v90 & 0xFFFFFFFC ^ ((((unsigned __int8)~(_BYTE)a5 >> 1) & 1) << 26)) & 0x4000000) & 0x7CFBFF7F;
  *(_OWORD *)(a2 + 8) = v91;
  *(_OWORD *)(a2 + 24) = v91;
  *(_OWORD *)(a2 + 40) = v91;
  *(_OWORD *)(a2 + 56) = v91;
  v93 = (unsigned int)SizeWithSnapAllowed((struct tagWND *)a1)
     && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
     && (*(_BYTE *)(a1 + 54) & 4) != 0
     && ((*(_BYTE *)(a1 + 55) | *(_BYTE *)(a1 + 48)) & 0x40) == 0
     && (*(_BYTE *)(*(_QWORD *)a2 + 54LL) & 1) != 0
     && *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL);
  *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (v93 << 10)) & 0x400;
  v94 = (unsigned int)MoveWithArrangementAllowed((struct tagWND *)a1)
     && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
     && (*(_BYTE *)(a1 + 54) & 4) != 0
     && ((*(_BYTE *)(a1 + 55) | *(_BYTE *)(a1 + 48)) & 0x40) == 0
     && (*(_BYTE *)(*(_QWORD *)a2 + 54LL) & 1) != 0
     && *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL);
  v95 = *(_DWORD *)(a2 + 180) ^ (*(_DWORD *)(a2 + 180) ^ (v94 << 11)) & 0x800;
  *(_DWORD *)(a2 + 180) = v95;
  if ( (v95 & 0xC00) != 0xC00
    && ((*(_BYTE *)(a1 + 289) & 3) != 0
     || WindowArrangementAllowed((struct tagWND *)a1) && (*(_BYTE *)(a1 + 55) & 1) != 0) )
  {
    v96 = *(_DWORD *)(a2 + 180);
    if ( (v96 & 0x800) == 0 )
      *(_DWORD *)(a2 + 180) = v96 | 0x800800;
    v97 = *(_DWORD *)(a2 + 180);
    if ( (v97 & 0x400) == 0 )
      *(_DWORD *)(a2 + 180) = v97 | 0x400400;
  }
  v98 = *(_DWORD *)(a2 + 180);
  if ( (v98 & 0xC00) == 0 )
  {
    *(_QWORD *)(a2 + 208) = MonitorFromPoint(v28, 2u);
    goto LABEL_131;
  }
  v99 = (*(_BYTE *)(a1 + 289) & 3) != 0 || (*(_BYTE *)(a1 + 55) & 1) != 0;
  v100 = v98 ^ (v98 ^ (v99 << 12)) & 0x1000;
  *(_DWORD *)(a2 + 180) = v100;
  if ( (v100 & 0x1000) != 0 )
  {
    *(_DWORD *)(a2 + 180) = v100 | 0x40000;
    *(_DWORD *)(a2 + 220) = 2;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v28,
    (const struct _MOVESIZEDATA *const)a2,
    (struct tagMONITOR **)(a2 + 208),
    (enum eTHRESHOLD_MARGIN_DIRECTION *)(a2 + 216));
  v101 = *(_DWORD *)(a2 + 180);
  if ( (v101 & 0x38000) == 0 && (*(_BYTE *)(a1 + 289) & 3) != 0 && a3 == 9 )
    *(_DWORD *)(a2 + 180) = v101 & 0xFFFC7FFF | 0x20000;
  if ( (*(_BYTE *)(a1 + 55) & 1) != 0 || (v102 = *(_BYTE *)(a1 + 289), (v102 & 3) == 3) )
  {
    *v92 = 0;
    if ( (*(_BYTE *)(a1 + 289) & 3) == 3 )
    {
      v105 = *v92;
      if ( (unsigned int)(a3 - 6) <= 2 )
        v105 = 3;
      *v92 = v105;
    }
    goto LABEL_130;
  }
  if ( (v102 & 1) == 0 )
  {
    if ( (v102 & 2) == 0 )
    {
      *v92 = 4;
      goto LABEL_130;
    }
    v104 = (*(_DWORD *)(a2 + 180) >> 15) & 7;
    if ( v104 != 4 )
    {
      if ( v104 )
        goto LABEL_124;
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_115;
      if ( (unsigned int)(a3 - 3) > 2 )
      {
LABEL_124:
        *v92 = 2;
        goto LABEL_130;
      }
    }
LABEL_117:
    *v92 = 0;
    goto LABEL_130;
  }
  v103 = (*(_DWORD *)(a2 + 180) >> 15) & 7;
  if ( v103 == 4 )
    goto LABEL_117;
  if ( v103 )
    goto LABEL_118;
  if ( (unsigned int)(a3 - 6) > 2 )
  {
    if ( (unsigned int)(a3 - 3) <= 2 )
      goto LABEL_117;
LABEL_118:
    *v92 = 1;
    goto LABEL_130;
  }
LABEL_115:
  *v92 = 3;
LABEL_130:
  *(_DWORD *)(a2 + 180) ^= ((unsigned __int8)*(_DWORD *)(a2 + 180) ^ (unsigned __int8)(*(_DWORD *)(a2 + 180) >> 5)) & 0x80;
LABEL_131:
  *(_DWORD *)(a2 + 160) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_160;
    a3 = 9;
    *(_DWORD *)(a2 + 160) = 9;
  }
  zzzSetCursor(*(_QWORD *)&gasyscur[76]);
  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
    *(_DWORD *)(a2 + 180) |= 1u;
  v106 = *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 180) |= 2u;
  *(_DWORD *)(a2 + 172) = v24;
  *(_DWORD *)(a2 + 176) = v26;
  v24 = v106 / 2;
  v149.x = v106 / 2;
  if ( (*(_BYTE *)(a1 + 55) & 0x20) != 0 || *(_DWORD *)(a2 + 160) != 9 )
  {
    v26 = (*(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20)) / 2;
    v149.y = v26;
    goto LABEL_157;
  }
  CaptionHeight = GetCaptionHeight(a1);
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v109, v108, v110, v111) & 0xF) != 0 )
      goto LABEL_140;
  }
  else if ( !IsDPIDWMSysMet(v109)
         || (W32GetCurrentThreadDpiAwarenessContext(v124, v123, v125, v126) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v127, v128, v129) + 408)
           ? (v133 = 0)
           : (v133 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v130,
                                                           v131,
                                                           v132)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v133) )
  {
LABEL_140:
    if ( IsDPIDWMSysMet(8uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v113, v112, v114, v115) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v116, v117, v118) + 408)
        ? (v122 = 0)
        : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v119,
                                                        v120,
                                                        v121)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v122) )
    {
      v134 = (_DWORD *)(gpsi + 2688LL);
    }
    else
    {
      v134 = (_DWORD *)(gpsi + 1912LL);
    }
    goto LABEL_155;
  }
  v134 = (_DWORD *)(gpsi + 2300LL);
LABEL_155:
  v26 = *v134 + CaptionHeight / 2 + *(_DWORD *)(a2 + 12);
  v149.y = v26;
LABEL_157:
  zzzInternalSetCursorPos(v24, v26, 1);
  xxxMS_FlushWigglies();
  v135 = *(_DWORD *)(a2 + 180);
  if ( (v135 & 0x400) == 0 )
    *v92 = 4;
  v28 = (unsigned __int64)v149;
  *(_DWORD *)(a2 + 180) = v135 & 0xFFFFFF7F;
  *(_DWORD *)(a2 + 260) = v24;
  *(_DWORD *)(a2 + 264) = v26;
  *(_DWORD *)(a2 + 268) = v24;
  *(_DWORD *)(a2 + 272) = v26;
LABEL_160:
  v136 = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(a2 + 264) -= v136;
  *(_DWORD *)(a2 + 272) -= v136;
  *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 208);
  v137 = (*(_DWORD *)(a2 + 180) ^ (32 * ((gdwPUDFlags >> 20) & 1))) & 0x20;
  *(_DWORD *)(a2 + 200) = *v92;
  *(_DWORD *)(a2 + 180) ^= v137;
  v138 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 260) -= v138;
  *(_DWORD *)(a2 + 268) -= v138;
  *(_QWORD *)(a2 + 184) = ValidateHmonitorNoRip(*(_QWORD *)(a1 + 344));
  *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ ((((unsigned __int8)~*(_BYTE *)(a2 + 180) >> 5) & 1) << 28)) & 0x10000000;
  v139 = *(_DWORD *)(a2 + 180) ^ ((unsigned __int16)*(_DWORD *)(a2 + 180) ^ ((*(_BYTE *)(a1 + 289) & 1) << 13)) & 0x2000;
  *(_DWORD *)(a2 + 180) = v139;
  v140 = v139 ^ ((unsigned __int16)v139 ^ (((*(_BYTE *)(a1 + 289) & 2) != 0) << 14)) & 0x4000;
  v141 = ((unsigned __int16)v140 ^ (unsigned __int16)(v140 >> 5)) & 0x100 ^ v140;
  v142 = (((unsigned __int16)v141 ^ (unsigned __int16)(v141 >> 5)) & 0x200 ^ v141) & 0xDFF7FFFF;
  *(_DWORD *)(a2 + 180) = v142;
  if ( (v142 & 2) != 0 )
  {
    v143 = v142 & 0xFFFFF3FF;
    *(_DWORD *)(a2 + 180) = v143;
    if ( (*(_BYTE *)(a1 + 289) & 3) != 0 )
      *(_DWORD *)(a2 + 180) = v143 | 0xC00C00;
  }
  *(_DWORD *)(a2 + 164) = dword_1C02F02D8[a3];
  *(_DWORD *)(a2 + 168) = dword_1C02F02A8[a3];
  v144 = dword_1C02F0338[a3];
  if ( v144 != -1 )
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 4LL * (__int16)v144 + 104) - v24;
  v145 = dword_1C02F0308[a3];
  if ( v145 != -1 )
    *(_DWORD *)(a2 + 156) = *(_DWORD *)(a2 + 4LL * (__int16)v145 + 104) - v26;
  *(_DWORD *)(a2 + 316) = a5;
  *(_QWORD *)(a2 + 276) = v28;
  *(_QWORD *)(a2 + 240) = 0LL;
  *(_QWORD *)(a2 + 248) = 0LL;
  *(_QWORD *)(a2 + 224) = 0LL;
  *(_QWORD *)(a2 + 232) = 0LL;
  v146 = *(_DWORD *)(a2 + 256) ^ (*(_BYTE *)(a1 + 291) & 1 ^ *(_DWORD *)(a2 + 256)) & 1;
  result = v146 ^ (v146 ^ (2 * v146)) & 2 ^ ((unsigned __int8)(v146 ^ (v146 ^ (2 * v146)) & 2) ^ (unsigned __int8)(8 * ((a5 & 4) != 0))) & 8u;
  *(_DWORD *)(a2 + 256) = result;
  return result;
}
