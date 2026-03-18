/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724
 * Callers:
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     SetMinimize @ 0x1C00B2954 (SetMinimize.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00D69F8 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01DCF18 (TransformRegionBetweenCoordinateSpaces.c)
 *     WindowArrangementAllowed @ 0x1C01F9B88 (WindowArrangementAllowed.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FCEF8 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FD80C (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FE80C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C0201E1C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     TransformVector @ 0x1C02235C0 (TransformVector.c)
 */

void __fastcall xxxMS_TrackMove(__int64 a1, int a2, __int64 a3, __int64 a4, struct _MOVESIZEDATA *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rdx
  int v8; // edx
  int v9; // eax
  __int128 v10; // xmm1
  int v11; // ecx
  int v12; // eax
  struct tagWND *v13; // r12
  __int64 DesktopWindow; // rax
  __int64 v15; // rdx
  int v16; // r13d
  int v17; // ebx
  int v18; // edi
  __int64 v19; // rdx
  int v20; // r12d
  int v21; // r13d
  __int16 KeyState; // ax
  unsigned __int64 v23; // r11
  bool v24; // zf
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r15d
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // ecx
  int *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v48; // rdx
  int v49; // ecx
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // ecx
  _DWORD *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // ecx
  int v76; // eax
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // r15d
  char v82; // al
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // rdx
  int v94; // ecx
  int *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  int v101; // ecx
  char v102; // al
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  int v114; // ecx
  _DWORD *v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  int v127; // ecx
  int v128; // r10d
  int v129; // r15d
  __int64 v130; // rax
  __int64 v131; // r9
  __int64 v132; // r15
  __int16 v133; // bx
  __int64 v134; // r8
  int v135; // eax
  unsigned __int64 v136; // r8
  __int64 v137; // rdx
  struct tagWND *v138; // rbx
  int v139; // edi
  int v140; // ebx
  LONG x; // ecx
  LONG y; // edx
  int v143; // eax
  int v144; // eax
  _OWORD *v145; // r15
  char v146; // al
  __int64 v147; // rax
  __int128 v148; // xmm0
  __int64 v149; // rcx
  int v150; // ebx
  int v151; // eax
  int v152; // eax
  int v153; // ecx
  int v154; // edi
  int *v155; // rcx
  char v156; // al
  __int64 v157; // rdx
  unsigned __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // r9
  int v171; // ecx
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rdx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // r9
  int v182; // ecx
  int *v183; // rcx
  __int64 v184; // rdx
  unsigned __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // r8
  __int64 v197; // r9
  int v198; // ecx
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rdx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rdx
  __int64 v207; // r8
  __int64 v208; // r9
  int v209; // ecx
  int v210; // r13d
  __int64 v211; // rdx
  unsigned __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rdx
  __int64 v220; // r8
  __int64 v221; // r9
  __int64 v222; // rdx
  __int64 v223; // r8
  __int64 v224; // r9
  int v225; // ecx
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rdx
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 v233; // rdx
  __int64 v234; // r8
  __int64 v235; // r9
  int v236; // ecx
  __int64 v237; // rdx
  unsigned __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // rdx
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // rdx
  __int64 v249; // r8
  __int64 v250; // r9
  int v251; // ecx
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rdx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 v259; // rdx
  __int64 v260; // r8
  __int64 v261; // r9
  int v262; // ecx
  __int64 v263; // rdi
  __int128 v264; // xmm0
  __int64 v265; // r11
  struct tagKE *v266; // rcx
  int v267; // r11d
  int v268; // r9d
  int v269; // r11d
  int v270; // r9d
  int v271; // r11d
  __int64 v272; // rdi
  __int64 v273; // rdx
  _DWORD *v274; // r12
  __int64 v275; // rdx
  __int64 v276; // rcx
  __int64 v277; // r8
  __int64 v278; // r9
  char v279; // al
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rax
  int v285; // ecx
  __int64 v286; // rcx
  __int64 v287; // rdx
  __int64 v288; // rcx
  __int64 v289; // r8
  __int64 v290; // r9
  __int64 v291; // rdi
  __int64 v292; // rdx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rdx
  __int64 v296; // r8
  __int64 v297; // r9
  int v298; // ecx
  __int64 v299; // rax
  int v300; // ecx
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v305; // rdx
  __int64 v306; // r8
  __int64 v307; // r9
  __int64 v308; // rdx
  __int64 v309; // r8
  __int64 v310; // r9
  int v311; // ecx
  __int64 v312; // rcx
  int v313; // eax
  int *v314; // r13
  char v315; // al
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  __int64 v320; // rax
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  __int64 v325; // rdi
  __int64 v326; // rdx
  __int64 v327; // r8
  __int64 v328; // r9
  __int64 v329; // rdx
  __int64 v330; // r8
  __int64 v331; // r9
  int v332; // ecx
  int v333; // ecx
  __int64 v334; // rax
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // r9
  __int64 v339; // rdx
  __int64 v340; // r8
  __int64 v341; // r9
  __int64 v342; // rdx
  __int64 v343; // r8
  __int64 v344; // r9
  int v345; // ecx
  __int64 *v346; // rdx
  int v347; // [rsp+20h] [rbp-81h]
  int v348; // [rsp+20h] [rbp-81h]
  int v350; // [rsp+30h] [rbp-71h]
  struct tagWND *v351; // [rsp+38h] [rbp-69h] BYREF
  __int64 v352; // [rsp+40h] [rbp-61h]
  struct tagWND *v353; // [rsp+48h] [rbp-59h]
  int v354; // [rsp+50h] [rbp-51h] BYREF
  struct tagWND *v355; // [rsp+58h] [rbp-49h] BYREF
  __int64 v356; // [rsp+60h] [rbp-41h] BYREF
  int v357; // [rsp+68h] [rbp-39h] BYREF
  __int128 v358; // [rsp+70h] [rbp-31h] BYREF
  __int64 v359; // [rsp+80h] [rbp-21h] BYREF
  __int64 v360; // [rsp+88h] [rbp-19h]
  __int128 v361; // [rsp+90h] [rbp-11h] BYREF
  int v362; // [rsp+A0h] [rbp-1h] BYREF
  int v363; // [rsp+A4h] [rbp+3h]
  int v364; // [rsp+A8h] [rbp+7h]
  int v365; // [rsp+ACh] [rbp+Bh]

  v5 = a3;
  v353 = (struct tagWND *)a1;
  LODWORD(v355) = (__int16)a4;
  HIDWORD(v355) = SWORD1(a4);
  v352 = a4;
  v360 = gptiCurrent;
  v7 = (unsigned int)(a2 - 256);
  if ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 4);
    if ( (_DWORD)v7 )
    {
      v8 = v7 - 252;
      if ( v8 )
      {
        if ( v8 != 2 )
          return;
        xxxTM_MoveDragRect(a5, a4);
        v9 = *((_DWORD *)a5 + 45);
        if ( (v9 & 0x2000000) != 0 )
        {
          v10 = *(_OWORD *)((char *)a5 + 40);
          *(_OWORD *)((char *)a5 + 24) = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 8) = v10;
        }
        *((_DWORD *)a5 + 45) = v9 & 0xFFFFFFFD;
LABEL_8:
        bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
        {
          v11 = *((_DWORD *)a5 + 45);
          if ( (v11 & 0x800) == 0 || (*(_BYTE *)(a1 + 55) & 1) == 0 || (v11 & 0x20) == 0 )
            xxxDrawDragRectEx(a5);
          *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
        }
        goto LABEL_14;
      }
      v19 = a4;
LABEL_154:
      xxxTM_MoveDragRect(a5, v19);
      return;
    }
  }
  v20 = 0;
  v21 = 0;
  KeyState = GetKeyState(0x11u, v7, a3, a4);
  v23 = 0LL;
  if ( v5 > 0x28 )
    return;
  if ( (_DWORD)v5 == 13 )
    goto LABEL_8;
  if ( (_DWORD)v5 != 27 )
  {
    if ( (_DWORD)v5 != 37 )
    {
      if ( (_DWORD)v5 == 38 )
        goto LABEL_26;
      if ( (_DWORD)v5 != 39 )
      {
        if ( (_DWORD)v5 != 40 )
          return;
LABEL_26:
        if ( !*((_DWORD *)a5 + 42) )
        {
          v24 = *((_DWORD *)a5 + 41) == 0;
          *((_DWORD *)a5 + 42) = dword_1C02F02D4[v5];
LABEL_75:
          if ( !v24 )
          {
            v76 = *((_DWORD *)a5 + 45);
            *((_DWORD *)a5 + 64) &= ~2u;
            *((_DWORD *)a5 + 54) = 4;
            *((_DWORD *)a5 + 45) = v76 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
            v23 = 0LL;
          }
          *((_QWORD *)a5 + 19) = 0LL;
          goto LABEL_123;
        }
        if ( KeyState < 0 )
          goto LABEL_70;
        v29 = IsDPIAbsoluteSysMet(0x1FuLL);
        if ( v29 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28);
          v23 = 0LL;
          if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
            goto LABEL_39;
        }
        else if ( !IsDPIDWMSysMet(v26)
               || (W32GetCurrentThreadDpiAwarenessContext(v34, v33, v35, v36) & 0xF) != 0
               || ((v40 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39),
                    v23 = 0LL,
                    !*(_QWORD *)(v40 + 408))
                 ? (v42 = 0)
                 : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v41,
                                                                v31,
                                                                v32)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1,
                    v23 = 0LL),
                   !v42) )
        {
LABEL_39:
          if ( IsDPIDWMSysMet(0x1FuLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v45, v44, v31, v32) & 0xF) == 1 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v31, v32);
              v23 = 0LL;
              if ( *(_QWORD *)(ThreadWin32Thread + 408) )
              {
                v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v48,
                                                            v31,
                                                            v32)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1;
                v23 = 0LL;
              }
              else
              {
                v49 = 0;
              }
              if ( v49 )
              {
                v43 = (int *)(gpsi + 2780LL);
                goto LABEL_48;
              }
            }
            else
            {
              v23 = 0LL;
            }
          }
          v43 = (int *)(gpsi + 2004LL);
          goto LABEL_48;
        }
        v43 = (int *)(gpsi + 2392LL);
LABEL_48:
        if ( *v43 / 2 > 1 )
        {
          if ( v29 )
          {
            v50 = W32GetCurrentThreadDpiAwarenessContext((__int64)v43, (unsigned int)(*v43 >> 31), v31, v32);
            v23 = 0LL;
            if ( (v50 & 0xF) != 0 )
              goto LABEL_59;
          }
          else if ( !IsDPIDWMSysMet(0x1FuLL)
                 || (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v53, v54) & 0xF) != 0
                 || ((v58 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57),
                      v23 = 0LL,
                      !*(_QWORD *)(v58 + 408))
                   ? (v62 = 0)
                   : (v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v59,
                                                                  v60,
                                                                  v61)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1,
                      v23 = 0LL),
                     !v62) )
          {
LABEL_59:
            if ( IsDPIDWMSysMet(0x1FuLL) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v65, v64, v66, v67) & 0xF) == 1 )
              {
                v71 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70);
                v23 = 0LL;
                if ( *(_QWORD *)(v71 + 408) )
                {
                  v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v72,
                                                              v73,
                                                              v74)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1;
                  v23 = 0LL;
                }
                else
                {
                  v75 = 0;
                }
                if ( v75 )
                {
                  v63 = (_DWORD *)(gpsi + 2780LL);
                  goto LABEL_68;
                }
              }
              else
              {
                v23 = 0LL;
              }
            }
            v63 = (_DWORD *)(gpsi + 2004LL);
            goto LABEL_68;
          }
          v63 = (_DWORD *)(gpsi + 2392LL);
LABEL_68:
          v5 = a3;
          v20 = *v63 / 2;
          goto LABEL_71;
        }
        v5 = a3;
LABEL_70:
        v20 = 1;
LABEL_71:
        if ( v5 == 38 )
          v20 = -v20;
        goto LABEL_123;
      }
    }
    if ( !*((_DWORD *)a5 + 41) )
    {
      v24 = *((_DWORD *)a5 + 42) == 0;
      *((_DWORD *)a5 + 41) = dword_1C02F02D4[v5];
      goto LABEL_75;
    }
    if ( KeyState < 0 )
      goto LABEL_120;
    v81 = IsDPIAbsoluteSysMet(0x1EuLL);
    if ( v81 )
    {
      v82 = W32GetCurrentThreadDpiAwarenessContext(v78, v77, v79, v80);
      v23 = 0LL;
      if ( (v82 & 0xF) != 0 )
        goto LABEL_89;
    }
    else if ( !IsDPIDWMSysMet(v78)
           || (W32GetCurrentThreadDpiAwarenessContext(v86, v85, v87, v88) & 0xF) != 0
           || ((v92 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v89, v90, v91),
                v23 = 0LL,
                !*(_QWORD *)(v92 + 408))
             ? (v94 = 0)
             : (v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v93,
                                                            v83,
                                                            v84)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1,
                v23 = 0LL),
               !v94) )
    {
LABEL_89:
      if ( IsDPIDWMSysMet(0x1EuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v97, v96, v83, v84) & 0xF) == 1 )
        {
          v99 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v98, v83, v84);
          v23 = 0LL;
          if ( *(_QWORD *)(v99 + 408) )
          {
            v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v100,
                                                         v83,
                                                         v84)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1;
            v23 = 0LL;
          }
          else
          {
            v101 = 0;
          }
          if ( v101 )
          {
            v95 = (int *)(gpsi + 2776LL);
            goto LABEL_98;
          }
        }
        else
        {
          v23 = 0LL;
        }
      }
      v95 = (int *)(gpsi + 2000LL);
      goto LABEL_98;
    }
    v95 = (int *)(gpsi + 2388LL);
LABEL_98:
    if ( *v95 / 2 > 1 )
    {
      if ( v81 )
      {
        v102 = W32GetCurrentThreadDpiAwarenessContext((__int64)v95, (unsigned int)(*v95 >> 31), v83, v84);
        v23 = 0LL;
        if ( (v102 & 0xF) != 0 )
          goto LABEL_109;
      }
      else if ( !IsDPIDWMSysMet(0x1EuLL)
             || (W32GetCurrentThreadDpiAwarenessContext(v104, v103, v105, v106) & 0xF) != 0
             || ((v110 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109),
                  v23 = 0LL,
                  !*(_QWORD *)(v110 + 408))
               ? (v114 = 0)
               : (v114 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v111,
                                                               v112,
                                                               v113)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1,
                  v23 = 0LL),
                 !v114) )
      {
LABEL_109:
        if ( IsDPIDWMSysMet(0x1EuLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v117, v116, v118, v119) & 0xF) == 1 )
          {
            v123 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v120, v121, v122);
            v23 = 0LL;
            if ( *(_QWORD *)(v123 + 408) )
            {
              v127 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v124,
                                                           v125,
                                                           v126)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1;
              v23 = 0LL;
            }
            else
            {
              v127 = 0;
            }
            if ( v127 )
            {
              v115 = (_DWORD *)(gpsi + 2776LL);
              goto LABEL_118;
            }
          }
          else
          {
            v23 = 0LL;
          }
        }
        v115 = (_DWORD *)(gpsi + 2000LL);
        goto LABEL_118;
      }
      v115 = (_DWORD *)(gpsi + 2388LL);
LABEL_118:
      v5 = a3;
      v21 = *v115 / 2;
      goto LABEL_121;
    }
    v5 = a3;
LABEL_120:
    v21 = 1;
LABEL_121:
    if ( v5 == 37 )
      v21 = -v21;
LABEL_123:
    v128 = *((_DWORD *)a5 + 40);
    if ( v128 == 9 )
    {
      v129 = *((unsigned __int16 *)a5 + 6);
      v130 = *((unsigned __int16 *)a5 + 4);
    }
    else
    {
      v129 = *(unsigned __int16 *)(gptiCurrent + 680LL);
      v130 = *(unsigned __int16 *)(gptiCurrent + 676LL);
    }
    v131 = *((int *)a5 + 41);
    v132 = v130 | (unsigned int)(v129 << 16);
    v352 = v132;
    if ( (_DWORD)v131 )
    {
      v133 = v21 + *((_WORD *)a5 + 2 * dword_1C02F0338[v131] + 12);
      LOWORD(v352) = v133;
      v132 = v352;
    }
    else
    {
      v133 = v352;
    }
    v134 = *((int *)a5 + 42);
    if ( (_DWORD)v134 )
    {
      WORD1(v352) = v20 + *((_WORD *)a5 + 2 * dword_1C02F0308[v134] + 12);
      v132 = v352;
    }
    if ( v128 != 9 )
    {
      v135 = v131 + v134;
      v136 = v23;
      *((_DWORD *)a5 + 40) = v135;
      if ( a1 )
        v136 = *(_QWORD *)a1;
      xxxSendMessage((struct tagWND *)a1, 0x20u, v136, (unsigned __int16)(v135 + 9) | 0x2000000LL);
    }
    LODWORD(v355) = v133 - *((_DWORD *)a5 + 38);
    HIDWORD(v355) = SWORD1(v132) - *((_DWORD *)a5 + 39);
    v137 = *(_QWORD *)(a1 + 88);
    v138 = v355;
    v353 = v355;
    if ( *(_QWORD *)(v137 + 200) )
    {
      v356 = *(_QWORD *)(v137 + 200);
      v139 = TransformRegionBetweenCoordinateSpaces(a1, v137, &v356);
      v140 = GrePtInRegion(v356, (unsigned int)v355, HIDWORD(v353));
      if ( v139 )
        GreDeleteObject(v356);
      if ( !v140 )
        goto LABEL_153;
      v138 = v355;
    }
    else if ( !PtInRect((_DWORD *)a5 + 18, (unsigned __int64)v355) )
    {
LABEL_153:
      v19 = v132;
      goto LABEL_154;
    }
    v359 = *((_QWORD *)a5 + 23);
    v351 = v138;
    LogicalToPhysicalDPIPoint(&v351, &v355, 0LL, &v359);
    if ( ((a3 - 38) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      x = (int)v351;
      if ( ((a3 - 37) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        y = HIDWORD(v351);
      }
      else
      {
        y = gptCursorAsync.y;
        HIDWORD(v351) = gptCursorAsync.y;
        if ( (_DWORD)v351 == gptCursorAsync.x )
        {
          v143 = -1;
          if ( v21 > 0 )
            v143 = 1;
          x = v143 + (_DWORD)v351;
          LODWORD(v351) = v143 + (_DWORD)v351;
        }
      }
    }
    else
    {
      y = HIDWORD(v351);
      x = gptCursorAsync.x;
      LODWORD(v351) = gptCursorAsync.x;
      if ( HIDWORD(v351) == gptCursorAsync.y )
      {
        v144 = -1;
        if ( v20 > 0 )
          v144 = 1;
        y = v144 + HIDWORD(v351);
        HIDWORD(v351) += v144;
      }
    }
    zzzInternalSetCursorPos(x, y, 2);
    goto LABEL_153;
  }
  bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
  {
    xxxDrawDragRectEx(a5);
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
  }
  UpdateMoveSizeDataForCancelation(a5);
LABEL_14:
  zzzClipCursorEx(0LL, 0);
  zzzLockWindowUpdate2(0LL, 1);
  xxxReleaseCapture();
  v12 = *((_DWORD *)a5 + 45) | 8;
  *((_DWORD *)a5 + 45) = v12;
  if ( (v12 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 172), HIDWORD(*(_QWORD *)((char *)a5 + 172)), 1);
  v13 = (struct tagWND *)a1;
  DesktopWindow = GetDesktopWindow(a1);
  v16 = 0;
  if ( v15 == DesktopWindow )
  {
    v17 = 0;
    v18 = 0;
  }
  else
  {
    v18 = *(_DWORD *)(v15 + 128);
    v17 = *(_DWORD *)(v15 + 132);
  }
  v145 = (_OWORD *)((char *)a5 + 8);
  if ( *((_QWORD *)a5 + 1) != *((_QWORD *)a5 + 15) || *((_QWORD *)a5 + 2) != *((_QWORD *)a5 + 16) )
  {
    if ( (unsigned int)xxxCallHook(0, *(_QWORD *)v13, (int *)a5 + 2, 5u) )
    {
      v148 = *(_OWORD *)((char *)a5 + 120);
      *((_QWORD *)a5 + 23) = *((_QWORD *)a5 + 24);
      *v145 = v148;
    }
    else if ( *((_DWORD *)a5 + 40) == 9 )
    {
      if ( (*((_BYTE *)v13 + 55) & 0x20) != 0 )
      {
        LODWORD(v361) = *((_DWORD *)a5 + 30) - v18;
        DWORD2(v361) = *((_DWORD *)a5 + 32) - v18;
        DWORD1(v361) = *((_DWORD *)a5 + 31) - v17;
        HIDWORD(v361) = *((_DWORD *)a5 + 33) - v17;
        v147 = CkptRestore((__int64)v13, &v361);
        if ( v147 )
          *(_DWORD *)(v147 + 32) |= 1u;
      }
    }
    else
    {
      v146 = *((_BYTE *)v13 + 55);
      if ( (v146 & 0x20) != 0 )
      {
        LODWORD(v361) = *((_DWORD *)a5 + 30) - v18;
        DWORD2(v361) = *((_DWORD *)a5 + 32) - v18;
        DWORD1(v361) = *((_DWORD *)a5 + 31) - v17;
        HIDWORD(v361) = *((_DWORD *)a5 + 33) - v17;
        CkptRestore((__int64)v13, &v361);
        SetMinimize((__int64)v13, 0);
      }
      else if ( (v146 & 1) != 0 )
      {
        SetOrClrWF(0, v13, 0xF01u, 1);
      }
    }
  }
  v149 = *((_QWORD *)v13 + 11);
  v150 = -v17;
  if ( (*(_BYTE *)(v149 + 50) & 0x40) != 0 )
  {
    v151 = *(_DWORD *)(v149 + 136);
    *((_DWORD *)a5 + 5) += v150;
    v152 = -v151;
    *(_DWORD *)v145 += v152;
    *((_DWORD *)a5 + 4) += v152;
    *((_DWORD *)a5 + 3) += v150;
    v153 = -*(_DWORD *)v145;
    *(_DWORD *)v145 = -*((_DWORD *)a5 + 4);
    *((_DWORD *)a5 + 4) = v153;
  }
  else
  {
    *((_DWORD *)a5 + 5) += v150;
    v154 = -v18;
    *(_DWORD *)v145 += v154;
    *((_DWORD *)a5 + 4) += v154;
    *((_DWORD *)a5 + 3) += v150;
  }
  if ( *((_QWORD *)v13 + 11) == GetDesktopWindow((__int64)v13) )
  {
    v350 = *((_BYTE *)v13 + 48) & 0x88;
    v24 = !WindowArrangementAllowed(v13);
    v156 = *((_BYTE *)v13 + 48);
    if ( v24 )
    {
      if ( v156 < 0 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x33uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v158, v157, v159, v160) & 0xF) != 0 )
            goto LABEL_179;
        }
        else if ( !IsDPIDWMSysMet(v158)
               || (W32GetCurrentThreadDpiAwarenessContext(v173, v172, v174, v175) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v176, v177, v178) + 408)
                 ? (v182 = 0)
                 : (v182 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v179,
                                                                 v180,
                                                                 v181)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v182) )
        {
LABEL_179:
          if ( IsDPIDWMSysMet(0x33uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v162, v161, v163, v164) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v165, v166, v167) + 408)
              ? (v171 = 0)
              : (v171 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v168,
                                                              v169,
                                                              v170)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v171) )
          {
            v183 = (int *)(gpsi + 2860LL);
          }
          else
          {
            v183 = (int *)(gpsi + 2084LL);
          }
          goto LABEL_211;
        }
        v183 = (int *)(gpsi + 2472LL);
        goto LABEL_211;
      }
      if ( (unsigned int)IsDPIAbsoluteSysMet(4uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v185, v184, v186, v187) & 0xF) != 0 )
          goto LABEL_196;
      }
      else if ( !IsDPIDWMSysMet(v185)
             || (W32GetCurrentThreadDpiAwarenessContext(v200, v199, v201, v202) & 0xF) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v203, v204, v205) + 408)
               ? (v209 = 0)
               : (v209 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v206,
                                                               v207,
                                                               v208)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v209) )
      {
LABEL_196:
        if ( IsDPIDWMSysMet(4uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v189, v188, v190, v191) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v192, v193, v194) + 408)
            ? (v198 = 0)
            : (v198 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v195,
                                                            v196,
                                                            v197)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v198) )
        {
          v183 = (int *)(gpsi + 2672LL);
        }
        else
        {
          v183 = (int *)(gpsi + 1896LL);
        }
LABEL_211:
        v210 = *v183;
        if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v212, v211, v213, v214) & 0xF) != 0 )
            goto LABEL_213;
        }
        else if ( !IsDPIDWMSysMet(v212)
               || (W32GetCurrentThreadDpiAwarenessContext(v227, v226, v228, v229) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v230, v231, v232) + 408)
                 ? (v236 = 0)
                 : (v236 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v233,
                                                                 v234,
                                                                 v235)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v236) )
        {
LABEL_213:
          if ( IsDPIDWMSysMet(6uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v216, v215, v217, v218) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v219, v220, v221) + 408)
              ? (v225 = 0)
              : (v225 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v222,
                                                              v223,
                                                              v224)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v225) )
          {
            v155 = (int *)(gpsi + 2680LL);
          }
          else
          {
            v155 = (int *)(gpsi + 1904LL);
          }
          goto LABEL_228;
        }
        v155 = (int *)(gpsi + 2292LL);
LABEL_228:
        v16 = v210 - *v155;
        goto LABEL_248;
      }
      v183 = (int *)(gpsi + 2284LL);
      goto LABEL_211;
    }
    if ( v156 >= 0 )
    {
LABEL_248:
      if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u )
      {
        v264 = *v145;
        v265 = *((_QWORD *)v13 + 34);
        v266 = (struct tagKE *)(unsigned int)(v16 + *((_DWORD *)a5 + 3));
        v354 = v16 + *((_DWORD *)a5 + 3);
        v358 = v264;
        if ( v265 && (unsigned int)NlsNullProc(v266) )
        {
          v357 = 0;
          TransformVector(v267, (unsigned int)&v357, (unsigned int)&v354, 0, 0);
          TransformVector(v269, (unsigned int)&v358, (unsigned int)&v358 + 4, v268, v268 & v347);
          TransformVector(v271, (unsigned int)&v358 + 8, (unsigned int)&v358 + 12, v270, v270 & v348);
          LODWORD(v266) = v354;
        }
        v272 = *(_QWORD *)(gpDispInfo + 96LL);
        if ( v272 )
        {
          v273 = v350;
          v356 = v350;
          while ( 1 )
          {
            if ( (*(_DWORD *)(v272 + 24) & 1) != 0 )
            {
              v274 = (_DWORD *)(v272 + 28);
              if ( !v273 )
                v274 = (_DWORD *)(v272 + 76);
              if ( (int)v266 >= v274[1] && (int)v266 < v274[3] )
              {
                if ( !WindowArrangementAllowed(v353)
                  || SDWORD2(v358) >= *v274 && SDWORD2(v358) < v274[2]
                  || (int)v358 >= *v274 && (int)v358 < v274[2] )
                {
                  v13 = v353;
                  goto LABEL_383;
                }
                v273 = v356;
              }
            }
            v272 = *(_QWORD *)(v272 + 16);
            LODWORD(v266) = v354;
            if ( !v272 )
            {
              v13 = v353;
              break;
            }
          }
        }
        v263 = MonitorFromRect((int *)a5 + 2, 2u);
      }
      else
      {
        v263 = *(_QWORD *)(GetDispInfo(v155) + 88);
      }
      if ( !WindowArrangementAllowed(v13) )
      {
        v279 = W32GetCurrentThreadDpiAwarenessContext(v276, v275, v277, v278);
        if ( v350 )
        {
          if ( (v279 & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v280, v282, v283) + 408)
              ? (v281 = 0LL)
              : (v281 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v280,
                                                              v282,
                                                              v283)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v281) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v281, v280, v282, v283) & 0xF) != 1
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v280, v282, v283) + 408)
                ? (v285 = 0)
                : (v285 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v280,
                                                                v282,
                                                                v283)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v284 = v263 + 60,
                  !v285) )
            {
              v284 = v263 + 28;
            }
          }
          else
          {
            v284 = v263 + 44;
          }
          v286 = *((unsigned int *)a5 + 3);
          if ( (int)v286 > *(_DWORD *)(v284 + 4) - v16 )
            goto LABEL_324;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v286, v280, v282, v283) & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v287, v289, v290) + 408)
              ? (v288 = 0LL)
              : (v288 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v287,
                                                              v289,
                                                              v290)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v288) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v288, v287, v289, v290) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v292, v293, v294) + 408)
                ? (v298 = 0)
                : (v298 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v295,
                                                                v296,
                                                                v297)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v298) )
            {
              v291 = v263 + 60;
            }
            else
            {
              v291 = v263 + 28;
            }
          }
          else
          {
            v291 = v263 + 44;
          }
        }
        else
        {
          if ( (v279 & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v280, v282, v283) + 408)
              ? (v281 = 0LL)
              : (v281 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v280,
                                                              v282,
                                                              v283)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v281) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v281, v280, v282, v283) & 0xF) != 1
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v280, v282, v283) + 408)
                ? (v300 = 0)
                : (v300 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v280,
                                                                v282,
                                                                v283)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v299 = v263 + 108,
                  !v300) )
            {
              v299 = v263 + 76;
            }
          }
          else
          {
            v299 = v263 + 92;
          }
          v286 = *((unsigned int *)a5 + 3);
          if ( (int)v286 > *(_DWORD *)(v299 + 4) - v16 )
            goto LABEL_324;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v286, v280, v282, v283) & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v301, v303, v304) + 408)
              ? (v302 = 0LL)
              : (v302 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v301,
                                                              v303,
                                                              v304)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v302) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v302, v301, v303, v304) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v305, v306, v307) + 408)
                ? (v311 = 0)
                : (v311 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v308,
                                                                v309,
                                                                v310)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v311) )
            {
              v291 = v263 + 108;
            }
            else
            {
              v291 = v263 + 76;
            }
          }
          else
          {
            v291 = v263 + 92;
          }
        }
        LODWORD(v286) = *(_DWORD *)(v291 + 4) - v16;
LABEL_324:
        *((_DWORD *)a5 + 3) = v286;
        goto LABEL_383;
      }
      v312 = *((_QWORD *)v13 + 25);
      if ( v312 )
      {
        GreGetRgnBox(v312, &v362);
        v313 = *(_DWORD *)v145;
        v314 = &v362;
        v312 = (unsigned int)(*((_DWORD *)a5 + 3) - *((_DWORD *)v13 + 29));
        v363 += v312;
        v362 = v313;
        v364 = *((_DWORD *)a5 + 4);
        v365 = *((_DWORD *)v13 + 31) + *((_DWORD *)a5 + 5) - v365;
      }
      else
      {
        v314 = (int *)((char *)a5 + 8);
      }
      v315 = W32GetCurrentThreadDpiAwarenessContext(v312, v275, v277, v278);
      if ( v350 )
      {
        if ( (v315 & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v316, v318, v319) + 408)
            ? (v317 = 0LL)
            : (v317 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v316,
                                                            v318,
                                                            v319)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              !(_DWORD)v317) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v317, v316, v318, v319) & 0xF) != 1
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v316, v318, v319) + 408)
              ? (v317 = 0LL)
              : (v317 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v316,
                                                              v318,
                                                              v319)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v320 = v263 + 60,
                !(_DWORD)v317) )
          {
            v320 = v263 + 28;
          }
        }
        else
        {
          v320 = v263 + 44;
        }
        if ( v314[1] < *(_DWORD *)(v320 + 4) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v317, v316, v318, v319) & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v321, v323, v324) + 408)
              ? (v322 = 0LL)
              : (v322 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v321,
                                                              v323,
                                                              v324)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v322) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v322, v321, v323, v324) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v326, v327, v328) + 408)
                ? (v332 = 0)
                : (v332 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v329,
                                                                v330,
                                                                v331)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v332) )
            {
              v325 = v263 + 60;
            }
            else
            {
              v325 = v263 + 28;
            }
          }
          else
          {
            v325 = v263 + 44;
          }
LABEL_355:
          v333 = *(_DWORD *)(v325 + 4) - v314[1];
          *((_DWORD *)a5 + 3) += v333;
          *((_DWORD *)a5 + 5) += v333;
          goto LABEL_383;
        }
      }
      else
      {
        if ( (v315 & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v316, v318, v319) + 408)
            ? (v317 = 0LL)
            : (v317 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v316,
                                                            v318,
                                                            v319)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
              !(_DWORD)v317) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v317, v316, v318, v319) & 0xF) != 1
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v316, v318, v319) + 408)
              ? (v317 = 0LL)
              : (v317 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v316,
                                                              v318,
                                                              v319)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v334 = v263 + 108,
                !(_DWORD)v317) )
          {
            v334 = v263 + 76;
          }
        }
        else
        {
          v334 = v263 + 92;
        }
        if ( v314[1] < *(_DWORD *)(v334 + 4) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v317, v316, v318, v319) & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v335, v337, v338) + 408)
              ? (v336 = 0LL)
              : (v336 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                              (__int64)KeGetCurrentThread(),
                                                              v335,
                                                              v337,
                                                              v338)
                                                          + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                !(_DWORD)v336) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v336, v335, v337, v338) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v339, v340, v341) + 408)
                ? (v345 = 0)
                : (v345 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v342,
                                                                v343,
                                                                v344)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                  v345) )
            {
              v325 = v263 + 108;
            }
            else
            {
              v325 = v263 + 76;
            }
          }
          else
          {
            v325 = v263 + 92;
          }
          goto LABEL_355;
        }
      }
      goto LABEL_383;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x33uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v238, v237, v239, v240) & 0xF) != 0 )
        goto LABEL_232;
    }
    else if ( !IsDPIDWMSysMet(v238)
           || (W32GetCurrentThreadDpiAwarenessContext(v253, v252, v254, v255) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v256, v257, v258) + 408)
             ? (v262 = 0)
             : (v262 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v259,
                                                             v260,
                                                             v261)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v262) )
    {
LABEL_232:
      if ( IsDPIDWMSysMet(0x33uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v242, v241, v243, v244) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v245, v246, v247) + 408)
          ? (v251 = 0)
          : (v251 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v248,
                                                          v249,
                                                          v250)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v251) )
      {
        v155 = (int *)(gpsi + 2860LL);
      }
      else
      {
        v155 = (int *)(gpsi + 2084LL);
      }
      goto LABEL_247;
    }
    v155 = (int *)(gpsi + 2472LL);
LABEL_247:
    v16 = *v155;
    goto LABEL_248;
  }
LABEL_383:
  xxxCommitMoveSize(v13, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)v13) )
  {
    GreLockVisRgn(*gpDispInfo);
    *((_DWORD *)v13 + 72) &= ~0x80000u;
    RecreateRedirectionBitmap(v13, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*gpDispInfo);
  }
  if ( gpqForeground )
  {
    v346 = *(__int64 **)(gpqForeground + 80LL);
    if ( v346 )
    {
      if ( gpqForeground == *(_QWORD *)(v360 + 384) )
        xxxWindowEvent(0x80000005, v346, 0, 2, 33);
    }
  }
  xxxWindowEvent(0xBu, (__int64 *)v13, 0, 0, 0);
  xxxSendMessage(v13, 0x232u, 0LL, 0LL);
}
