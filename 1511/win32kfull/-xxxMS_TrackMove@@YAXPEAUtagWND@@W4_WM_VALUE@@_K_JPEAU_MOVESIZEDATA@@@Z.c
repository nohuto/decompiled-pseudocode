/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC
 * Callers:
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     CkptRestore @ 0x1C007734C (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     SetMinimize @ 0x1C00C9468 (SetMinimize.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C01019F4 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E677C (TransformRegionBetweenCoordinateSpaces.c)
 *     WindowArrangementAllowed @ 0x1C0202874 (WindowArrangementAllowed.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C0205BFC (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02064F8 (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207464 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020AD20 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     TransformVector @ 0x1C022D854 (TransformVector.c)
 */

void __fastcall xxxMS_TrackMove(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, struct _MOVESIZEDATA *a5)
{
  int v5; // edi
  __int64 v7; // r12
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // r8
  int v17; // eax
  __int64 DesktopWindow; // rax
  __int64 v19; // rdx
  int v20; // r13d
  int v21; // ebx
  __int64 v22; // rdx
  int v23; // r13d
  BOOL v24; // ecx
  bool v25; // zf
  unsigned __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  _DWORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  _DWORD *v41; // rcx
  int v42; // eax
  unsigned __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  _DWORD *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  _DWORD *v58; // rcx
  int v59; // ebx
  int v60; // r10d
  int v61; // r15d
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // r15
  __int16 v65; // bx
  __int64 v66; // r8
  __int16 v67; // ax
  unsigned __int64 v68; // r8
  __int64 v69; // rdx
  unsigned __int64 v70; // rbx
  int v71; // edi
  int v72; // ebx
  LONG x; // ecx
  LONG y; // edx
  int v75; // eax
  int v76; // eax
  _OWORD *v77; // r15
  char v78; // al
  char *v79; // rax
  __int128 v80; // xmm0
  __int64 v81; // rcx
  int v82; // ebx
  int v83; // eax
  int v84; // eax
  int v85; // ecx
  int v86; // edi
  __int64 v87; // rdx
  int *v88; // rcx
  unsigned __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // ecx
  __int64 v93; // rcx
  __int64 v94; // rcx
  int v95; // ecx
  int *v96; // rcx
  unsigned __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  int v100; // ecx
  __int64 v101; // rcx
  __int64 v102; // rcx
  int v103; // ecx
  int v104; // r13d
  unsigned __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  int v108; // ecx
  __int64 v109; // rcx
  __int64 v110; // rcx
  int v111; // ecx
  __int64 v112; // r8
  unsigned __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rcx
  int v116; // ecx
  __int64 v117; // rcx
  __int64 v118; // rcx
  int v119; // ecx
  __int64 v120; // rbx
  __int128 v121; // xmm0
  __int64 v122; // r11
  int v123; // ecx
  int v124; // r9d
  int v125; // r11d
  int v126; // r9d
  int v127; // r11d
  __int64 v128; // rbx
  __int64 v129; // rdx
  _DWORD *v130; // r13
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  int v135; // ecx
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rbx
  int v139; // ecx
  __int64 v140; // rax
  int v141; // ecx
  __int64 v142; // rcx
  int v143; // ecx
  __int64 v144; // rcx
  int *v145; // r13
  int v146; // ecx
  int v147; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rbx
  int v153; // ecx
  int v154; // ecx
  __int64 v155; // rax
  __int64 v156; // rcx
  int v157; // ecx
  __int64 *v158; // rdx
  int v159; // [rsp+20h] [rbp-81h]
  int v160; // [rsp+20h] [rbp-81h]
  int v161; // [rsp+30h] [rbp-71h]
  int v162; // [rsp+30h] [rbp-71h]
  __int64 v164; // [rsp+40h] [rbp-61h]
  unsigned int v165; // [rsp+44h] [rbp-5Dh]
  unsigned __int64 v166; // [rsp+48h] [rbp-59h] BYREF
  int v167; // [rsp+50h] [rbp-51h] BYREF
  __int64 v168; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v169; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v170; // [rsp+68h] [rbp-39h]
  int v171; // [rsp+70h] [rbp-31h] BYREF
  __int128 v172; // [rsp+78h] [rbp-29h] BYREF
  __int64 v173; // [rsp+88h] [rbp-19h] BYREF
  __int64 v174; // [rsp+90h] [rbp-11h]
  __int128 v175; // [rsp+98h] [rbp-9h] BYREF
  int v176; // [rsp+A8h] [rbp+7h] BYREF
  int v177; // [rsp+ACh] [rbp+Bh]
  int v178; // [rsp+B0h] [rbp+Fh]
  int v179; // [rsp+B4h] [rbp+13h]

  v5 = 0;
  v170 = a3;
  v7 = a1;
  LODWORD(v169) = (__int16)a4;
  HIDWORD(v169) = SWORD1(a4);
  v174 = gptiCurrent;
  v8 = a2 - 256;
  if ( !v8 || (v9 = v8 - 4) == 0 )
  {
    v161 = 0;
    v23 = 0;
    v24 = (GetKeyState(0x11u) & 0x8000u) != 0LL;
    if ( a3 > 0x28 )
      return;
    if ( (_DWORD)a3 == 13 )
      goto LABEL_8;
    if ( (_DWORD)a3 == 27 )
    {
      bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
      {
        xxxDrawDragRectEx(a5, 0LL, 2LL, (char *)a5 + 8);
        *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
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
          v25 = *((_DWORD *)a5 + 41) == 0;
          *((_DWORD *)a5 + 42) = dword_1C02EAC14[a3];
LABEL_76:
          if ( !v25 )
          {
            v42 = *((_DWORD *)a5 + 45);
            *((_DWORD *)a5 + 64) &= ~2u;
            *((_DWORD *)a5 + 54) = 4;
            *((_DWORD *)a5 + 45) = v42 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 19) = 0LL;
          goto LABEL_123;
        }
        if ( v24 )
          goto LABEL_71;
        v27 = IsDPIAbsoluteSysMet(0x1FuLL);
        if ( v27 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0 )
          {
            goto LABEL_34;
          }
        }
        else if ( !IsDPIDWMSysMet(v26)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v33 = 0)
                 : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v33) )
        {
LABEL_34:
          if ( IsDPIDWMSysMet(0x1FuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v30 = 0)
              : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v30) )
          {
            v34 = (_DWORD *)(gpsi + 2780LL);
          }
          else
          {
            v34 = (_DWORD *)(gpsi + 2004LL);
          }
LABEL_50:
          if ( *v34 / 2 > 1 )
          {
            if ( v27 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
              {
                goto LABEL_54;
              }
            }
            else if ( !IsDPIDWMSysMet(0x1FuLL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                     ? (v40 = 0)
                     : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v40) )
            {
LABEL_54:
              if ( IsDPIDWMSysMet(0x1FuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v37 = 0)
                  : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v37) )
              {
                v41 = (_DWORD *)(gpsi + 2780LL);
              }
              else
              {
                v41 = (_DWORD *)(gpsi + 2004LL);
              }
              goto LABEL_70;
            }
            v41 = (_DWORD *)(gpsi + 2392LL);
LABEL_70:
            v23 = *v41 / 2;
            goto LABEL_72;
          }
LABEL_71:
          v23 = 1;
LABEL_72:
          if ( a3 == 38 )
            v23 = -v23;
          goto LABEL_123;
        }
        v34 = (_DWORD *)(gpsi + 2392LL);
        goto LABEL_50;
      }
    }
    if ( !*((_DWORD *)a5 + 41) )
    {
      v25 = *((_DWORD *)a5 + 42) == 0;
      *((_DWORD *)a5 + 41) = dword_1C02EAC14[a3];
      goto LABEL_76;
    }
    if ( v24 )
      goto LABEL_120;
    v44 = IsDPIAbsoluteSysMet(0x1EuLL);
    if ( v44 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
      {
        goto LABEL_83;
      }
    }
    else if ( !IsDPIDWMSysMet(v43)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v50 = 0)
             : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v50) )
    {
LABEL_83:
      if ( IsDPIDWMSysMet(0x1EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v47 = 0)
          : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v47) )
      {
        v51 = (_DWORD *)(gpsi + 2776LL);
      }
      else
      {
        v51 = (_DWORD *)(gpsi + 2000LL);
      }
LABEL_99:
      if ( *v51 / 2 > 1 )
      {
        if ( v44 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) != 0 )
          {
            goto LABEL_103;
          }
        }
        else if ( !IsDPIDWMSysMet(0x1EuLL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v57 = 0)
                 : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v57) )
        {
LABEL_103:
          if ( IsDPIDWMSysMet(0x1EuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v54 = 0)
              : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v54) )
          {
            v58 = (_DWORD *)(gpsi + 2776LL);
          }
          else
          {
            v58 = (_DWORD *)(gpsi + 2000LL);
          }
          goto LABEL_119;
        }
        v58 = (_DWORD *)(gpsi + 2388LL);
LABEL_119:
        v59 = *v58 / 2;
        v161 = v59;
        goto LABEL_121;
      }
LABEL_120:
      v59 = 1;
      v161 = 1;
LABEL_121:
      if ( a3 == 37 )
        v161 = -v59;
LABEL_123:
      v60 = *((_DWORD *)a5 + 40);
      if ( v60 == 9 )
      {
        v61 = *((unsigned __int16 *)a5 + 6);
        v62 = *((unsigned __int16 *)a5 + 4);
      }
      else
      {
        v61 = *(unsigned __int16 *)(gptiCurrent + 680LL);
        v62 = *(unsigned __int16 *)(gptiCurrent + 676LL);
      }
      v63 = *((int *)a5 + 41);
      v64 = v62 | (unsigned int)(v61 << 16);
      v164 = v64;
      if ( (_DWORD)v63 )
      {
        v65 = v161 + *((_WORD *)a5 + 2 * dword_1C02EAC78[v63] + 12);
        LOWORD(v164) = v65;
        v64 = v164;
      }
      else
      {
        v65 = v64;
      }
      v66 = *((int *)a5 + 42);
      if ( (_DWORD)v66 )
      {
        WORD1(v164) = v23 + *((_WORD *)a5 + 2 * dword_1C02EAC48[v66] + 12);
        v64 = v164;
      }
      if ( v60 != 9 )
      {
        v67 = v63 + v66;
        *((_DWORD *)a5 + 40) = v63 + v66;
        if ( a1 )
          v68 = *(_QWORD *)a1;
        else
          v68 = 0LL;
        xxxSendMessage((struct tagWND *)a1, 0x20u, v68, (unsigned __int16)(v67 + 9) | 0x2000000LL);
      }
      LODWORD(v169) = v65 - *((_DWORD *)a5 + 38);
      HIDWORD(v169) = SWORD1(v64) - *((_DWORD *)a5 + 39);
      v69 = *(_QWORD *)(a1 + 88);
      v70 = v169;
      v165 = HIDWORD(v169);
      if ( *(_QWORD *)(v69 + 200) )
      {
        v168 = *(_QWORD *)(v69 + 200);
        v71 = TransformRegionBetweenCoordinateSpaces(a1, v69, &v168);
        v72 = GrePtInRegion(v168, (unsigned int)v70, v165);
        if ( v71 )
          GreDeleteObject(v168);
        if ( !v72 )
          goto LABEL_154;
        v70 = v169;
      }
      else if ( !PtInRect((_DWORD *)a5 + 18, v169) )
      {
LABEL_154:
        v22 = v64;
        goto LABEL_155;
      }
      v173 = *((_QWORD *)a5 + 23);
      v166 = v70;
      LogicalToPhysicalDPIPoint(&v166, &v169, 0LL, &v173);
      if ( ((v170 - 38) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        x = v166;
        if ( ((v170 - 37) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
        {
          y = HIDWORD(v166);
        }
        else
        {
          y = gptCursorAsync.y;
          HIDWORD(v166) = gptCursorAsync.y;
          if ( (_DWORD)v166 == gptCursorAsync.x )
          {
            v75 = -1;
            if ( v161 > 0 )
              v75 = 1;
            x = v75 + v166;
            LODWORD(v166) = v75 + v166;
          }
        }
      }
      else
      {
        y = HIDWORD(v166);
        x = gptCursorAsync.x;
        LODWORD(v166) = gptCursorAsync.x;
        if ( HIDWORD(v166) == gptCursorAsync.y )
        {
          v76 = -1;
          if ( v23 > 0 )
            v76 = 1;
          y = v76 + HIDWORD(v166);
          HIDWORD(v166) += v76;
        }
      }
      zzzInternalSetCursorPos(x, y, 2);
      goto LABEL_154;
    }
    v51 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_99;
  }
  v10 = v9 - 252;
  if ( !v10 )
  {
    v22 = a4;
LABEL_155:
    xxxTM_MoveDragRect(a5, v22);
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
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
  {
    v15 = *((_DWORD *)a5 + 45);
    if ( (v15 & 0x800) == 0 || (*(_BYTE *)(v7 + 55) & 1) == 0 || (v15 & 0x20) == 0 )
    {
      v16 = 1LL;
      if ( (v15 & 0x2000000) != 0 )
        v16 = 2147483649LL;
      xxxDrawDragRectEx(a5, 0LL, v16, (char *)a5 + 8);
    }
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
  }
LABEL_16:
  zzzClipCursorEx(0LL, 0LL, v13, v14);
  zzzLockWindowUpdate2(0LL, 1);
  xxxReleaseCapture();
  v17 = *((_DWORD *)a5 + 45) | 8;
  *((_DWORD *)a5 + 45) = v17;
  if ( (v17 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 172), HIDWORD(*(_QWORD *)((char *)a5 + 172)), 1);
  DesktopWindow = GetDesktopWindow(v7);
  v20 = 0;
  if ( v19 == DesktopWindow )
  {
    v21 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(v19 + 128);
    v21 = *(_DWORD *)(v19 + 132);
  }
  v77 = (_OWORD *)((char *)a5 + 8);
  if ( *((_QWORD *)a5 + 1) != *((_QWORD *)a5 + 15) || *((_QWORD *)a5 + 2) != *((_QWORD *)a5 + 16) )
  {
    if ( (unsigned int)xxxCallHook(0, *(_QWORD *)v7, (__int64)a5 + 8, 5u) )
    {
      v80 = *(_OWORD *)((char *)a5 + 120);
      *((_QWORD *)a5 + 23) = *((_QWORD *)a5 + 24);
      *v77 = v80;
    }
    else if ( *((_DWORD *)a5 + 40) == 9 )
    {
      if ( (*(_BYTE *)(v7 + 55) & 0x20) != 0 )
      {
        LODWORD(v175) = *((_DWORD *)a5 + 30) - v5;
        DWORD2(v175) = *((_DWORD *)a5 + 32) - v5;
        DWORD1(v175) = *((_DWORD *)a5 + 31) - v21;
        HIDWORD(v175) = *((_DWORD *)a5 + 33) - v21;
        v79 = CkptRestore(v7, &v175);
        if ( v79 )
          *((_DWORD *)v79 + 8) |= 1u;
      }
    }
    else
    {
      v78 = *(_BYTE *)(v7 + 55);
      if ( (v78 & 0x20) != 0 )
      {
        LODWORD(v175) = *((_DWORD *)a5 + 30) - v5;
        DWORD2(v175) = *((_DWORD *)a5 + 32) - v5;
        DWORD1(v175) = *((_DWORD *)a5 + 31) - v21;
        HIDWORD(v175) = *((_DWORD *)a5 + 33) - v21;
        CkptRestore(v7, &v175);
        SetMinimize(v7, 0);
      }
      else if ( (v78 & 1) != 0 )
      {
        SetOrClrWF(0, (_DWORD *)v7, 0xF01u, 1);
      }
    }
  }
  v81 = *(_QWORD *)(v7 + 88);
  v82 = -v21;
  if ( (*(_BYTE *)(v81 + 50) & 0x40) != 0 )
  {
    v83 = *(_DWORD *)(v81 + 136);
    *((_DWORD *)a5 + 5) += v82;
    v84 = -v83;
    *(_DWORD *)v77 += v84;
    *((_DWORD *)a5 + 4) += v84;
    *((_DWORD *)a5 + 3) += v82;
    v85 = -*(_DWORD *)v77;
    *(_DWORD *)v77 = -*((_DWORD *)a5 + 4);
    *((_DWORD *)a5 + 4) = v85;
  }
  else
  {
    *((_DWORD *)a5 + 5) += v82;
    v86 = -v5;
    *(_DWORD *)v77 += v86;
    *((_DWORD *)a5 + 4) += v86;
    *((_DWORD *)a5 + 3) += v82;
  }
  if ( *(_QWORD *)(v7 + 88) == GetDesktopWindow(v7) )
  {
    LODWORD(v170) = *(_BYTE *)(v7 + 48) & 0x88;
    if ( !WindowArrangementAllowed((struct tagWND *)v7) )
    {
      if ( *(char *)(a1 + 48) < 0 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x33uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v90) + 776) & 0x4000) != 0 )
          {
            goto LABEL_181;
          }
        }
        else if ( !IsDPIDWMSysMet(v89)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v94) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v95 = 0)
                 : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v95) )
        {
LABEL_181:
          if ( IsDPIDWMSysMet(0x33uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v92 = 0)
              : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v92) )
          {
            v96 = (int *)(gpsi + 2860LL);
          }
          else
          {
            v96 = (int *)(gpsi + 2084LL);
          }
          goto LABEL_216;
        }
        v96 = (int *)(gpsi + 2472LL);
        goto LABEL_216;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(4uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v97) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x4000) != 0 )
        {
          goto LABEL_200;
        }
      }
      else if ( !IsDPIDWMSysMet(v97)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v101) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v102) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v103 = 0)
               : (v103 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v103) )
      {
LABEL_200:
        if ( IsDPIDWMSysMet(4uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v100 = 0)
            : (v100 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v100) )
        {
          v96 = (int *)(gpsi + 2672LL);
        }
        else
        {
          v96 = (int *)(gpsi + 1896LL);
        }
LABEL_216:
        v104 = *v96;
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v105) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v106) + 776) & 0x4000) != 0 )
          {
            goto LABEL_219;
          }
        }
        else if ( !IsDPIDWMSysMet(v105)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v109) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v110) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v111 = 0)
                 : (v111 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v111) )
        {
LABEL_219:
          if ( IsDPIDWMSysMet(6uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v107) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v108 = 0)
              : (v108 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v108) )
          {
            v88 = (int *)(gpsi + 2680LL);
          }
          else
          {
            v88 = (int *)(gpsi + 1904LL);
          }
          goto LABEL_235;
        }
        v88 = (int *)(gpsi + 2292LL);
LABEL_235:
        v20 = v104 - *v88;
LABEL_257:
        v112 = a1;
LABEL_258:
        v162 = v20;
        if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
        {
          v121 = *v77;
          v122 = *(_QWORD *)(v112 + 272);
          v123 = v20 + *((_DWORD *)a5 + 3);
          v167 = v123;
          v172 = v121;
          if ( v122 )
          {
            v171 = 0;
            TransformVector(v122, (unsigned int)&v171, (unsigned int)&v167, 0, 0);
            TransformVector(v125, (unsigned int)&v172, (unsigned int)&v172 + 4, v124, v124 & v159);
            TransformVector(v127, (unsigned int)&v172 + 8, (unsigned int)&v172 + 12, v126, v126 & v160);
            v123 = v167;
            v112 = a1;
          }
          v128 = *(_QWORD *)(gpDispInfo + 96LL);
          if ( v128 )
          {
            v129 = (int)v170;
            v168 = (int)v170;
            while ( 1 )
            {
              if ( (*(_DWORD *)(v128 + 24) & 1) != 0 )
              {
                v130 = (_DWORD *)(v128 + 28);
                if ( !v129 )
                  v130 = (_DWORD *)(v128 + 76);
                if ( v123 >= v130[1] && v123 < v130[3] )
                {
                  if ( !WindowArrangementAllowed((struct tagWND *)v112)
                    || SDWORD2(v172) >= *v130 && SDWORD2(v172) < v130[2]
                    || (int)v172 >= *v130 && (int)v172 < v130[2] )
                  {
                    v7 = a1;
                    goto LABEL_401;
                  }
                  v129 = v168;
                }
              }
              v128 = *(_QWORD *)(v128 + 16);
              v123 = v167;
              v112 = a1;
              if ( !v128 )
              {
                v20 = v162;
                break;
              }
            }
          }
          v120 = MonitorFromRect((int *)a5 + 2, 2u);
        }
        else
        {
          v120 = *(_QWORD *)(GetDispInfo(v88, v87, v112) + 88);
        }
        if ( WindowArrangementAllowed((struct tagWND *)a1) )
        {
          v144 = *(_QWORD *)(a1 + 200);
          if ( v144 )
          {
            GreGetRgnBox(v144, &v176);
            v145 = &v176;
            v146 = *((_DWORD *)a5 + 3);
            v176 = *(_DWORD *)v77;
            v147 = *((_DWORD *)a5 + 4);
            v144 = (unsigned int)(v146 - *(_DWORD *)(a1 + 116));
            v177 += v144;
            v178 = v147;
            v179 = *(_DWORD *)(a1 + 124) + *((_DWORD *)a5 + 5) - v179;
          }
          else
          {
            v145 = (int *)((char *)a5 + 8);
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v144);
          if ( (_DWORD)v170 )
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v149 = 0LL)
                : (v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  !(_DWORD)v149) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v149 = 0LL)
                  : (v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v150 = v120 + 60,
                    !(_DWORD)v149) )
              {
                v150 = v120 + 28;
              }
            }
            else
            {
              v150 = v120 + 44;
            }
            if ( v145[1] >= *(_DWORD *)(v150 + 4) )
              goto LABEL_371;
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v151) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v151 = 0LL)
                : (v151 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  !(_DWORD)v151) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v151) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v153 = 0)
                  : (v153 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v153) )
              {
                v152 = v120 + 60;
              }
              else
              {
                v152 = v120 + 28;
              }
            }
            else
            {
              v152 = v120 + 44;
            }
          }
          else
          {
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v149 = 0LL)
                : (v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  !(_DWORD)v149) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v149 = 0LL)
                  : (v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v155 = v120 + 108,
                    !(_DWORD)v149) )
              {
                v155 = v120 + 76;
              }
            }
            else
            {
              v155 = v120 + 92;
            }
            if ( v145[1] >= *(_DWORD *)(v155 + 4) )
              goto LABEL_371;
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v149) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v156 = 0LL)
                : (v156 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  !(_DWORD)v156) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v157 = 0)
                  : (v157 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                    v157) )
              {
                v152 = v120 + 108;
              }
              else
              {
                v152 = v120 + 76;
              }
            }
            else
            {
              v152 = v120 + 92;
            }
          }
          v154 = *(_DWORD *)(v152 + 4) - v145[1];
          *((_DWORD *)a5 + 3) += v154;
          *((_DWORD *)a5 + 5) += v154;
LABEL_371:
          v7 = a1;
          goto LABEL_401;
        }
        v132 = PsGetCurrentProcessWin32Process(v131);
        if ( (_DWORD)v170 )
        {
          if ( (*(_DWORD *)(v132 + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v133) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v133 = 0LL)
              : (v133 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v133) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v133) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v135 = 0)
                : (v135 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v134 = v120 + 60,
                  !v135) )
            {
              v134 = v120 + 28;
            }
          }
          else
          {
            v134 = v120 + 44;
          }
          v136 = *((unsigned int *)a5 + 3);
          if ( (int)v136 > *(_DWORD *)(v134 + 4) - v20 )
            goto LABEL_337;
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v136) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v137) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v137 = 0LL)
              : (v137 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v137) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v137) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v139 = 0)
                : (v139 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v139) )
            {
              v138 = v120 + 60;
            }
            else
            {
              v138 = v120 + 28;
            }
          }
          else
          {
            v138 = v120 + 44;
          }
        }
        else
        {
          if ( (*(_DWORD *)(v132 + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v133) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v133 = 0LL)
              : (v133 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v133) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v133) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v141 = 0)
                : (v141 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v140 = v120 + 108,
                  !v141) )
            {
              v140 = v120 + 76;
            }
          }
          else
          {
            v140 = v120 + 92;
          }
          v136 = *((unsigned int *)a5 + 3);
          if ( (int)v136 > *(_DWORD *)(v140 + 4) - v20 )
            goto LABEL_337;
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v136) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v142 = 0LL)
              : (v142 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v142) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v142) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v143 = 0)
                : (v143 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v143) )
            {
              v138 = v120 + 108;
            }
            else
            {
              v138 = v120 + 76;
            }
          }
          else
          {
            v138 = v120 + 92;
          }
        }
        LODWORD(v136) = *(_DWORD *)(v138 + 4) - v20;
LABEL_337:
        *((_DWORD *)a5 + 3) = v136;
        goto LABEL_371;
      }
      v96 = (int *)(gpsi + 2284LL);
      goto LABEL_216;
    }
    v112 = a1;
    if ( *(char *)(a1 + 48) >= 0 )
      goto LABEL_258;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x33uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v113) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v114) + 776) & 0x4000) != 0 )
      {
        goto LABEL_240;
      }
    }
    else if ( !IsDPIDWMSysMet(v113)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v117) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v119 = 0)
             : (v119 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v119) )
    {
LABEL_240:
      if ( IsDPIDWMSysMet(0x33uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v115) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v116 = 0)
          : (v116 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v116) )
      {
        v88 = (int *)(gpsi + 2860LL);
      }
      else
      {
        v88 = (int *)(gpsi + 2084LL);
      }
      goto LABEL_256;
    }
    v88 = (int *)(gpsi + 2472LL);
LABEL_256:
    v20 = *v88;
    goto LABEL_257;
  }
LABEL_401:
  xxxCommitMoveSize((struct tagWND *)v7, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)v7) )
  {
    GreLockVisRgn(*gpDispInfo);
    *(_DWORD *)(v7 + 288) &= ~0x80000u;
    RecreateRedirectionBitmap((struct tagWND *)v7, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*gpDispInfo);
  }
  if ( gpqForeground )
  {
    v158 = *(__int64 **)(gpqForeground + 72LL);
    if ( v158 )
    {
      if ( gpqForeground == *(_QWORD *)(v174 + 384) )
        xxxWindowEvent(0x80000005, v158, 0, 2, 33);
    }
  }
  xxxWindowEvent(0xBu, (__int64 *)v7, 0, 0, 0);
  xxxSendMessage((struct tagWND *)v7, 0x232u, 0LL, 0LL);
}
