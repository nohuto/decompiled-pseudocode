/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098
 * Callers:
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AB30 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     SetMinimize @ 0x1C003F74C (SetMinimize.c)
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     CkptRestore @ 0x1C0085C30 (CkptRestore.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E62EC (TransformRegionBetweenCoordinateSpaces.c)
 *     WindowArrangementAllowed @ 0x1C02024D8 (WindowArrangementAllowed.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C0205830 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02060D4 (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020A7DC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     TransformVector @ 0x1C022D550 (TransformVector.c)
 */

void __fastcall xxxMS_TrackMove(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, struct _MOVESIZEDATA *a5)
{
  int v5; // edi
  __int64 v7; // r13
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  __int128 v12; // xmm1
  int v13; // ecx
  __int64 v14; // r8
  int v15; // eax
  __int64 DesktopWindow; // rax
  __int64 v17; // rdx
  int v18; // r12d
  int v19; // ebx
  __int64 v20; // rdx
  int v21; // r12d
  BOOL v22; // ecx
  bool v23; // zf
  unsigned __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  _DWORD *v39; // rcx
  int v40; // eax
  unsigned __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  _DWORD *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  _DWORD *v56; // rcx
  int v57; // ebx
  int v58; // r10d
  int v59; // r15d
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // r15
  __int16 v63; // bx
  __int64 v64; // r8
  __int16 v65; // ax
  unsigned __int64 v66; // r8
  __int64 v67; // rdx
  unsigned __int64 v68; // rbx
  int v69; // edi
  int v70; // ebx
  LONG x; // ecx
  LONG y; // edx
  int v73; // eax
  int v74; // eax
  _OWORD *v75; // r15
  char v76; // al
  char *v77; // rax
  __int128 v78; // xmm0
  __int64 v79; // rcx
  int v80; // ebx
  int v81; // eax
  int v82; // eax
  int v83; // ecx
  int v84; // edi
  __int64 v85; // rdx
  int *v86; // rcx
  unsigned __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // rcx
  int v93; // ecx
  int *v94; // rcx
  unsigned __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  int v98; // ecx
  __int64 v99; // rcx
  __int64 v100; // rcx
  int v101; // ecx
  int v102; // r12d
  unsigned __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rcx
  int v106; // ecx
  __int64 v107; // rcx
  __int64 v108; // rcx
  int v109; // ecx
  __int64 v110; // r8
  unsigned __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  int v114; // ecx
  __int64 v115; // rcx
  __int64 v116; // rcx
  int v117; // ecx
  __int64 v118; // rbx
  __int128 v119; // xmm0
  __int64 v120; // r11
  int v121; // ecx
  int v122; // r9d
  int v123; // r11d
  int v124; // r9d
  int v125; // r11d
  __int64 v126; // rbx
  __int64 v127; // rdx
  _DWORD *v128; // r12
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  int v133; // ecx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rbx
  int v137; // ecx
  __int64 v138; // rax
  int v139; // ecx
  __int64 v140; // rcx
  int v141; // ecx
  __int64 v142; // rcx
  int *v143; // r12
  int v144; // ecx
  int v145; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rbx
  int v151; // ecx
  int v152; // ecx
  __int64 v153; // rax
  __int64 v154; // rcx
  int v155; // ecx
  __int64 *v156; // rdx
  int v157; // [rsp+20h] [rbp-81h]
  int v158; // [rsp+20h] [rbp-81h]
  int v159; // [rsp+30h] [rbp-71h]
  int v160; // [rsp+30h] [rbp-71h]
  __int64 v162; // [rsp+40h] [rbp-61h]
  unsigned int v163; // [rsp+44h] [rbp-5Dh]
  unsigned __int64 v164; // [rsp+48h] [rbp-59h] BYREF
  int v165; // [rsp+50h] [rbp-51h] BYREF
  __int64 v166; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v167; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v168; // [rsp+68h] [rbp-39h]
  int v169; // [rsp+70h] [rbp-31h] BYREF
  __int128 v170; // [rsp+78h] [rbp-29h] BYREF
  __int64 v171; // [rsp+88h] [rbp-19h] BYREF
  __int64 v172; // [rsp+90h] [rbp-11h]
  __int128 v173; // [rsp+98h] [rbp-9h] BYREF
  int v174; // [rsp+A8h] [rbp+7h] BYREF
  int v175; // [rsp+ACh] [rbp+Bh]
  int v176; // [rsp+B0h] [rbp+Fh]
  int v177; // [rsp+B4h] [rbp+13h]

  v5 = 0;
  v168 = a3;
  v7 = a1;
  LODWORD(v167) = (__int16)a4;
  HIDWORD(v167) = SWORD1(a4);
  v172 = gptiCurrent;
  v8 = a2 - 256;
  if ( !v8 || (v9 = v8 - 4) == 0 )
  {
    v159 = 0;
    v21 = 0;
    v22 = (GetKeyState(0x11u) & 0x8000u) != 0LL;
    if ( a3 > 0x28 )
      return;
    if ( (_DWORD)a3 == 13 )
      goto LABEL_8;
    if ( (_DWORD)a3 == 27 )
    {
      bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
      if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x10) != 0 )
      {
        xxxDrawDragRectEx(a5, 0LL, 2LL, (char *)a5 + 8);
        *(_DWORD *)(gptiCurrent + 448LL) &= ~0x10u;
      }
      UpdateMoveSizeDataForCancelation(a5);
      goto LABEL_16;
    }
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
        goto LABEL_28;
      if ( (_DWORD)a3 != 39 )
      {
        if ( (_DWORD)a3 != 40 )
          return;
LABEL_28:
        if ( !*((_DWORD *)a5 + 42) )
        {
          v23 = *((_DWORD *)a5 + 41) == 0;
          *((_DWORD *)a5 + 42) = dword_1C02EBC54[a3];
LABEL_76:
          if ( !v23 )
          {
            v40 = *((_DWORD *)a5 + 45);
            *((_DWORD *)a5 + 64) &= ~2u;
            *((_DWORD *)a5 + 54) = 4;
            *((_DWORD *)a5 + 45) = v40 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 19) = 0LL;
          goto LABEL_123;
        }
        if ( v22 )
          goto LABEL_71;
        v25 = IsDPIAbsoluteSysMet(0x1FuLL);
        if ( v25 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0 )
          {
            goto LABEL_34;
          }
        }
        else if ( !IsDPIDWMSysMet(v24)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v31 = 0)
                 : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v31) )
        {
LABEL_34:
          if ( IsDPIDWMSysMet(0x1FuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v28 = 0)
              : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v28) )
          {
            v32 = (_DWORD *)(gpsi + 2780LL);
          }
          else
          {
            v32 = (_DWORD *)(gpsi + 2004LL);
          }
LABEL_50:
          if ( *v32 / 2 > 1 )
          {
            if ( v25 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0 )
              {
                goto LABEL_54;
              }
            }
            else if ( !IsDPIDWMSysMet(0x1FuLL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                     ? (v38 = 0)
                     : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 416)
                                                    + 8LL)
                                        + 260LL) & 1),
                       !v38) )
            {
LABEL_54:
              if ( IsDPIDWMSysMet(0x1FuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v35 = 0)
                  : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v35) )
              {
                v39 = (_DWORD *)(gpsi + 2780LL);
              }
              else
              {
                v39 = (_DWORD *)(gpsi + 2004LL);
              }
              goto LABEL_70;
            }
            v39 = (_DWORD *)(gpsi + 2392LL);
LABEL_70:
            v21 = *v39 / 2;
            goto LABEL_72;
          }
LABEL_71:
          v21 = 1;
LABEL_72:
          if ( a3 == 38 )
            v21 = -v21;
          goto LABEL_123;
        }
        v32 = (_DWORD *)(gpsi + 2392LL);
        goto LABEL_50;
      }
    }
    if ( !*((_DWORD *)a5 + 41) )
    {
      v23 = *((_DWORD *)a5 + 42) == 0;
      *((_DWORD *)a5 + 41) = dword_1C02EBC54[a3];
      goto LABEL_76;
    }
    if ( v22 )
      goto LABEL_120;
    v42 = IsDPIAbsoluteSysMet(0x1EuLL);
    if ( v42 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0 )
      {
        goto LABEL_83;
      }
    }
    else if ( !IsDPIDWMSysMet(v41)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v48 = 0)
             : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v48) )
    {
LABEL_83:
      if ( IsDPIDWMSysMet(0x1EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v45 = 0)
          : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v45) )
      {
        v49 = (_DWORD *)(gpsi + 2776LL);
      }
      else
      {
        v49 = (_DWORD *)(gpsi + 2000LL);
      }
LABEL_99:
      if ( *v49 / 2 > 1 )
      {
        if ( v42 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0 )
          {
            goto LABEL_103;
          }
        }
        else if ( !IsDPIDWMSysMet(0x1EuLL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v55 = 0)
                 : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v55) )
        {
LABEL_103:
          if ( IsDPIDWMSysMet(0x1EuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v52 = 0)
              : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v52) )
          {
            v56 = (_DWORD *)(gpsi + 2776LL);
          }
          else
          {
            v56 = (_DWORD *)(gpsi + 2000LL);
          }
          goto LABEL_119;
        }
        v56 = (_DWORD *)(gpsi + 2388LL);
LABEL_119:
        v57 = *v56 / 2;
        v159 = v57;
        goto LABEL_121;
      }
LABEL_120:
      v57 = 1;
      v159 = 1;
LABEL_121:
      if ( a3 == 37 )
        v159 = -v57;
LABEL_123:
      v58 = *((_DWORD *)a5 + 40);
      if ( v58 == 9 )
      {
        v59 = *((unsigned __int16 *)a5 + 6);
        v60 = *((unsigned __int16 *)a5 + 4);
      }
      else
      {
        v59 = *(unsigned __int16 *)(gptiCurrent + 688LL);
        v60 = *(unsigned __int16 *)(gptiCurrent + 684LL);
      }
      v61 = *((int *)a5 + 41);
      v62 = v60 | (unsigned int)(v59 << 16);
      v162 = v62;
      if ( (_DWORD)v61 )
      {
        v63 = v159 + *((_WORD *)a5 + 2 * dword_1C02EBCB8[v61] + 12);
        LOWORD(v162) = v63;
        v62 = v162;
      }
      else
      {
        v63 = v62;
      }
      v64 = *((int *)a5 + 42);
      if ( (_DWORD)v64 )
      {
        WORD1(v162) = v21 + *((_WORD *)a5 + 2 * dword_1C02EBC88[v64] + 12);
        v62 = v162;
      }
      if ( v58 != 9 )
      {
        v65 = v61 + v64;
        *((_DWORD *)a5 + 40) = v61 + v64;
        if ( a1 )
          v66 = *(_QWORD *)a1;
        else
          v66 = 0LL;
        xxxSendMessage((struct tagWND *)a1, 0x20u, v66, (unsigned __int16)(v65 + 9) | 0x2000000LL);
      }
      LODWORD(v167) = v63 - *((_DWORD *)a5 + 38);
      HIDWORD(v167) = SWORD1(v62) - *((_DWORD *)a5 + 39);
      v67 = *(_QWORD *)(a1 + 88);
      v68 = v167;
      v163 = HIDWORD(v167);
      if ( *(_QWORD *)(v67 + 200) )
      {
        v166 = *(_QWORD *)(v67 + 200);
        v69 = TransformRegionBetweenCoordinateSpaces(a1, v67, &v166);
        v70 = GrePtInRegion(v166, (unsigned int)v68, v163);
        if ( v69 )
          GreDeleteObject(v166);
        if ( !v70 )
          goto LABEL_154;
        v68 = v167;
      }
      else if ( !PtInRect((_DWORD *)a5 + 18, v167) )
      {
LABEL_154:
        v20 = v62;
        goto LABEL_155;
      }
      v171 = *((_QWORD *)a5 + 23);
      v164 = v68;
      LogicalToPhysicalDPIPoint(&v164, &v167, 0LL, &v171);
      if ( ((v168 - 38) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        x = v164;
        if ( ((v168 - 37) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
        {
          y = HIDWORD(v164);
        }
        else
        {
          y = gptCursorAsync.y;
          HIDWORD(v164) = gptCursorAsync.y;
          if ( (_DWORD)v164 == gptCursorAsync.x )
          {
            v73 = -1;
            if ( v159 > 0 )
              v73 = 1;
            x = v73 + v164;
            LODWORD(v164) = v73 + v164;
          }
        }
      }
      else
      {
        y = HIDWORD(v164);
        x = gptCursorAsync.x;
        LODWORD(v164) = gptCursorAsync.x;
        if ( HIDWORD(v164) == gptCursorAsync.y )
        {
          v74 = -1;
          if ( v21 > 0 )
            v74 = 1;
          y = v74 + HIDWORD(v164);
          HIDWORD(v164) += v74;
        }
      }
      zzzInternalSetCursorPos(x, y, 2);
      goto LABEL_154;
    }
    v49 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_99;
  }
  v10 = v9 - 252;
  if ( !v10 )
  {
    v20 = a4;
LABEL_155:
    xxxTM_MoveDragRect(a5, v20);
    return;
  }
  if ( v10 != 2 )
    return;
  xxxTM_MoveDragRect(a5, a4);
  v11 = *((_DWORD *)a5 + 45);
  if ( (v11 & 0x2000000) != 0 )
  {
    v12 = *(_OWORD *)((char *)a5 + 40);
    *(_OWORD *)((char *)a5 + 24) = *(_OWORD *)((char *)a5 + 56);
    *(_OWORD *)((char *)a5 + 8) = v12;
  }
  *((_DWORD *)a5 + 45) = v11 & 0xFFFFFFFD;
LABEL_8:
  bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x10) != 0 )
  {
    v13 = *((_DWORD *)a5 + 45);
    if ( (v13 & 0x800) == 0 || (*(_BYTE *)(v7 + 55) & 1) == 0 || (v13 & 0x20) == 0 )
    {
      v14 = 1LL;
      if ( (v13 & 0x2000000) != 0 )
        v14 = 2147483649LL;
      xxxDrawDragRectEx(a5, 0LL, v14, (char *)a5 + 8);
    }
    *(_DWORD *)(gptiCurrent + 448LL) &= ~0x10u;
  }
LABEL_16:
  zzzClipCursorEx(0LL, 0);
  zzzLockWindowUpdate2(0LL, 1);
  xxxReleaseCapture();
  v15 = *((_DWORD *)a5 + 45) | 8;
  *((_DWORD *)a5 + 45) = v15;
  if ( (v15 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 172), HIDWORD(*(_QWORD *)((char *)a5 + 172)), 1);
  DesktopWindow = GetDesktopWindow(v7);
  v18 = 0;
  if ( v17 == DesktopWindow )
  {
    v19 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(v17 + 128);
    v19 = *(_DWORD *)(v17 + 132);
  }
  v75 = (_OWORD *)((char *)a5 + 8);
  if ( *((_QWORD *)a5 + 1) != *((_QWORD *)a5 + 15) || *((_QWORD *)a5 + 2) != *((_QWORD *)a5 + 16) )
  {
    if ( (unsigned int)xxxCallHook(0, *(_QWORD *)v7, (__int64)a5 + 8, 5u) )
    {
      v78 = *(_OWORD *)((char *)a5 + 120);
      *((_QWORD *)a5 + 23) = *((_QWORD *)a5 + 24);
      *v75 = v78;
    }
    else if ( *((_DWORD *)a5 + 40) == 9 )
    {
      if ( (*(_BYTE *)(v7 + 55) & 0x20) != 0 )
      {
        LODWORD(v173) = *((_DWORD *)a5 + 30) - v5;
        DWORD2(v173) = *((_DWORD *)a5 + 32) - v5;
        DWORD1(v173) = *((_DWORD *)a5 + 31) - v19;
        HIDWORD(v173) = *((_DWORD *)a5 + 33) - v19;
        v77 = CkptRestore(v7, &v173);
        if ( v77 )
          *((_DWORD *)v77 + 8) |= 1u;
      }
    }
    else
    {
      v76 = *(_BYTE *)(v7 + 55);
      if ( (v76 & 0x20) != 0 )
      {
        LODWORD(v173) = *((_DWORD *)a5 + 30) - v5;
        DWORD2(v173) = *((_DWORD *)a5 + 32) - v5;
        DWORD1(v173) = *((_DWORD *)a5 + 31) - v19;
        HIDWORD(v173) = *((_DWORD *)a5 + 33) - v19;
        CkptRestore(v7, &v173);
        SetMinimize(v7, 0);
      }
      else if ( (v76 & 1) != 0 )
      {
        SetOrClrWF(0, (_DWORD *)v7, 0xF01u, 1);
      }
    }
  }
  v79 = *(_QWORD *)(v7 + 88);
  v80 = -v19;
  if ( (*(_BYTE *)(v79 + 50) & 0x40) != 0 )
  {
    v81 = *(_DWORD *)(v79 + 136);
    *((_DWORD *)a5 + 5) += v80;
    v82 = -v81;
    *(_DWORD *)v75 += v82;
    *((_DWORD *)a5 + 4) += v82;
    *((_DWORD *)a5 + 3) += v80;
    v83 = -*(_DWORD *)v75;
    *(_DWORD *)v75 = -*((_DWORD *)a5 + 4);
    *((_DWORD *)a5 + 4) = v83;
  }
  else
  {
    *((_DWORD *)a5 + 5) += v80;
    v84 = -v5;
    *(_DWORD *)v75 += v84;
    *((_DWORD *)a5 + 4) += v84;
    *((_DWORD *)a5 + 3) += v80;
  }
  if ( *(_QWORD *)(v7 + 88) == GetDesktopWindow(v7) )
  {
    LODWORD(v168) = *(_BYTE *)(v7 + 48) & 0x88;
    if ( !WindowArrangementAllowed((struct tagWND *)v7) )
    {
      if ( *(char *)(a1 + 48) < 0 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x33uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v87) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x4000) != 0 )
          {
            goto LABEL_181;
          }
        }
        else if ( !IsDPIDWMSysMet(v87)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v93 = 0)
                 : (v93 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v93) )
        {
LABEL_181:
          if ( IsDPIDWMSysMet(0x33uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v90 = 0)
              : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v90) )
          {
            v94 = (int *)(gpsi + 2860LL);
          }
          else
          {
            v94 = (int *)(gpsi + 2084LL);
          }
          goto LABEL_216;
        }
        v94 = (int *)(gpsi + 2472LL);
        goto LABEL_216;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(4uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x4000) != 0 )
        {
          goto LABEL_200;
        }
      }
      else if ( !IsDPIDWMSysMet(v95)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v101 = 0)
               : (v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v101) )
      {
LABEL_200:
        if ( IsDPIDWMSysMet(4uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v98 = 0)
            : (v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v98) )
        {
          v94 = (int *)(gpsi + 2672LL);
        }
        else
        {
          v94 = (int *)(gpsi + 1896LL);
        }
LABEL_216:
        v102 = *v94;
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v103) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v104) + 776) & 0x4000) != 0 )
          {
            goto LABEL_219;
          }
        }
        else if ( !IsDPIDWMSysMet(v103)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v107) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v108) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v109 = 0)
                 : (v109 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v109) )
        {
LABEL_219:
          if ( IsDPIDWMSysMet(6uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v105) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v106 = 0)
              : (v106 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v106) )
          {
            v86 = (int *)(gpsi + 2680LL);
          }
          else
          {
            v86 = (int *)(gpsi + 1904LL);
          }
          goto LABEL_235;
        }
        v86 = (int *)(gpsi + 2292LL);
LABEL_235:
        v18 = v102 - *v86;
LABEL_257:
        v110 = a1;
LABEL_258:
        v160 = v18;
        if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
        {
          v119 = *v75;
          v120 = *(_QWORD *)(v110 + 272);
          v121 = v18 + *((_DWORD *)a5 + 3);
          v165 = v121;
          v170 = v119;
          if ( v120 )
          {
            v169 = 0;
            TransformVector(v120, (unsigned int)&v169, (unsigned int)&v165, 0, 0);
            TransformVector(v123, (unsigned int)&v170, (unsigned int)&v170 + 4, v122, v122 & v157);
            TransformVector(v125, (unsigned int)&v170 + 8, (unsigned int)&v170 + 12, v124, v124 & v158);
            v121 = v165;
            v110 = a1;
          }
          v126 = *(_QWORD *)(gpDispInfo + 96LL);
          if ( v126 )
          {
            v127 = (int)v168;
            v166 = (int)v168;
            while ( 1 )
            {
              if ( (*(_DWORD *)(v126 + 24) & 1) != 0 )
              {
                v128 = (_DWORD *)(v126 + 28);
                if ( !v127 )
                  v128 = (_DWORD *)(v126 + 76);
                if ( v121 >= v128[1] && v121 < v128[3] )
                {
                  if ( !WindowArrangementAllowed((struct tagWND *)v110)
                    || SDWORD2(v170) >= *v128 && SDWORD2(v170) < v128[2]
                    || (int)v170 >= *v128 && (int)v170 < v128[2] )
                  {
                    v7 = a1;
                    goto LABEL_401;
                  }
                  v127 = v166;
                }
              }
              v126 = *(_QWORD *)(v126 + 16);
              v121 = v165;
              v110 = a1;
              if ( !v126 )
              {
                v18 = v160;
                break;
              }
            }
          }
          v118 = MonitorFromRect((int *)a5 + 2, 2LL, v110);
        }
        else
        {
          v118 = *(_QWORD *)(GetDispInfo(v86, v85, v110) + 88);
        }
        if ( WindowArrangementAllowed((struct tagWND *)a1) )
        {
          v142 = *(_QWORD *)(a1 + 200);
          if ( v142 )
          {
            GreGetRgnBox(v142, &v174);
            v143 = &v174;
            v144 = *((_DWORD *)a5 + 3);
            v174 = *(_DWORD *)v75;
            v145 = *((_DWORD *)a5 + 4);
            v142 = (unsigned int)(v144 - *(_DWORD *)(a1 + 116));
            v175 += v142;
            v176 = v145;
            v177 = *(_DWORD *)(a1 + 124) + *((_DWORD *)a5 + 5) - v177;
          }
          else
          {
            v143 = (int *)((char *)a5 + 8);
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v142);
          if ( (_DWORD)v168 )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v147 = 0LL)
                : (v147 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  !(_DWORD)v147) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v147 = 0LL)
                  : (v147 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                    v148 = v118 + 60,
                    !(_DWORD)v147) )
              {
                v148 = v118 + 28;
              }
            }
            else
            {
              v148 = v118 + 44;
            }
            if ( v143[1] >= *(_DWORD *)(v148 + 4) )
              goto LABEL_371;
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v149 = 0LL)
                : (v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  !(_DWORD)v149) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v151 = 0)
                  : (v151 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                    v151) )
              {
                v150 = v118 + 60;
              }
              else
              {
                v150 = v118 + 28;
              }
            }
            else
            {
              v150 = v118 + 44;
            }
          }
          else
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v147 = 0LL)
                : (v147 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  !(_DWORD)v147) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v147 = 0LL)
                  : (v147 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                    v153 = v118 + 108,
                    !(_DWORD)v147) )
              {
                v153 = v118 + 76;
              }
            }
            else
            {
              v153 = v118 + 92;
            }
            if ( v143[1] >= *(_DWORD *)(v153 + 4) )
              goto LABEL_371;
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v154) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v154 = 0LL)
                : (v154 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  !(_DWORD)v154) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v154) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v155 = 0)
                  : (v155 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                    v155) )
              {
                v150 = v118 + 108;
              }
              else
              {
                v150 = v118 + 76;
              }
            }
            else
            {
              v150 = v118 + 92;
            }
          }
          v152 = *(_DWORD *)(v150 + 4) - v143[1];
          *((_DWORD *)a5 + 3) += v152;
          *((_DWORD *)a5 + 5) += v152;
LABEL_371:
          v7 = a1;
          goto LABEL_401;
        }
        v130 = PsGetCurrentProcessWin32Process(v129);
        if ( (_DWORD)v168 )
        {
          if ( (*(_DWORD *)(v130 + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v131 = 0LL)
              : (v131 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                !(_DWORD)v131) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v133 = 0)
                : (v133 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v132 = v118 + 60,
                  !v133) )
            {
              v132 = v118 + 28;
            }
          }
          else
          {
            v132 = v118 + 44;
          }
          v134 = *((unsigned int *)a5 + 3);
          if ( (int)v134 > *(_DWORD *)(v132 + 4) - v18 )
            goto LABEL_337;
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v135 = 0LL)
              : (v135 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                !(_DWORD)v135) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v135) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v137 = 0)
                : (v137 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v137) )
            {
              v136 = v118 + 60;
            }
            else
            {
              v136 = v118 + 28;
            }
          }
          else
          {
            v136 = v118 + 44;
          }
        }
        else
        {
          if ( (*(_DWORD *)(v130 + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v131 = 0LL)
              : (v131 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                !(_DWORD)v131) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v131) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v139 = 0)
                : (v139 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v138 = v118 + 108,
                  !v139) )
            {
              v138 = v118 + 76;
            }
          }
          else
          {
            v138 = v118 + 92;
          }
          v134 = *((unsigned int *)a5 + 3);
          if ( (int)v134 > *(_DWORD *)(v138 + 4) - v18 )
            goto LABEL_337;
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v134) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v140) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v140 = 0LL)
              : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                !(_DWORD)v140) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v140) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v141 = 0)
                : (v141 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                  v141) )
            {
              v136 = v118 + 108;
            }
            else
            {
              v136 = v118 + 76;
            }
          }
          else
          {
            v136 = v118 + 92;
          }
        }
        LODWORD(v134) = *(_DWORD *)(v136 + 4) - v18;
LABEL_337:
        *((_DWORD *)a5 + 3) = v134;
        goto LABEL_371;
      }
      v94 = (int *)(gpsi + 2284LL);
      goto LABEL_216;
    }
    v110 = a1;
    if ( *(char *)(a1 + 48) >= 0 )
      goto LABEL_258;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x33uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v111) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v112) + 776) & 0x4000) != 0 )
      {
        goto LABEL_240;
      }
    }
    else if ( !IsDPIDWMSysMet(v111)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v115) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v117 = 0)
             : (v117 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
               !v117) )
    {
LABEL_240:
      if ( IsDPIDWMSysMet(0x33uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v113) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v114 = 0)
          : (v114 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
            v114) )
      {
        v86 = (int *)(gpsi + 2860LL);
      }
      else
      {
        v86 = (int *)(gpsi + 2084LL);
      }
      goto LABEL_256;
    }
    v86 = (int *)(gpsi + 2472LL);
LABEL_256:
    v18 = *v86;
    goto LABEL_257;
  }
LABEL_401:
  xxxCommitMoveSize((struct tagWND *)v7, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)v7) )
  {
    GreLockVisRgn(*gpDispInfo);
    *(_DWORD *)(v7 + 288) &= ~0x80000u;
    RecreateRedirectionBitmap((struct tagWND *)v7, 0LL, 0LL, 0LL, 0, 0LL);
    GreUnlockVisRgn(*gpDispInfo);
  }
  if ( gpqForeground )
  {
    v156 = *(__int64 **)(gpqForeground + 72LL);
    if ( v156 )
    {
      if ( gpqForeground == *(_QWORD *)(v172 + 392) )
        xxxWindowEvent(0x80000005, v156, 0, 2, 33);
    }
  }
  xxxWindowEvent(0xBu, (__int64 *)v7, 0, 0, 0);
  xxxSendMessage((struct tagWND *)v7, 0x232u, 0LL, 0LL);
}
