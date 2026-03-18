/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C011FC70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _ScreenToClient @ 0x1C0043114 (_ScreenToClient.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     _DeferWindowPos @ 0x1C00851D8 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C008537C (InternalBeginDeferWindowPos.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     InternalGetRealClientRect @ 0x1C00E358C (InternalGetRealClientRect.c)
 */

struct tagBWL *__fastcall xxxArrangeIconicWindows(__int64 a1)
{
  struct tagBWL *result; // rax
  struct tagBWL *v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int *v7; // rcx
  int v8; // ebx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int *v12; // rcx
  int v13; // esi
  __int64 v14; // r14
  unsigned __int64 *v15; // rdi
  unsigned __int16 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // r11
  int v19; // r13d
  bool v20; // zf
  int v21; // r12d
  unsigned int v22; // r14d
  _DWORD *Prop; // rax
  __int64 v24; // rcx
  char v25; // r10
  _DWORD *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v34; // ecx
  _DWORD *v35; // rsi
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 ThreadWin32Thread; // rax
  int v42; // ecx
  int *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // ecx
  signed int v47; // eax
  int v48; // ecx
  int v49; // r15d
  int v50; // r14d
  int v51; // r13d
  unsigned __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  _DWORD *v57; // rcx
  __int64 v58; // rcx
  int v59; // ecx
  int v60; // edi
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  _DWORD *v65; // rbx
  __int64 v66; // rcx
  int v67; // ecx
  unsigned __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v71; // ecx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int *v79; // rcx
  __int64 v80; // rcx
  int v81; // ecx
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // ecx
  __int64 v87; // rcx
  __int64 v88; // rcx
  _DWORD *v90; // rbx
  unsigned __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  int v94; // ecx
  __int64 v95; // rcx
  __int64 v96; // rcx
  _DWORD *v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  int v101; // ecx
  __int64 v102; // rcx
  __int64 v103; // rcx
  _DWORD *v105; // rcx
  int v106; // eax
  unsigned __int64 *v107; // rbx
  unsigned __int64 *v108; // r12
  int v109; // r13d
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned __int64 *v112; // r10
  unsigned __int64 v113; // r11
  int v114; // r14d
  unsigned __int64 *v115; // r15
  __int64 v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rbx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rax
  int v125; // ecx
  _DWORD *v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rax
  int v129; // ecx
  unsigned int v130; // ecx
  unsigned int v131; // ecx
  unsigned int v132; // ecx
  unsigned int v133; // ecx
  unsigned int v134; // ecx
  unsigned int v135; // ecx
  unsigned int v136; // ecx
  bool v137; // cc
  bool v138; // cc
  bool v139; // cc
  unsigned __int64 v140; // r8
  unsigned __int64 v141; // rdx
  unsigned __int64 *v142; // r9
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rax
  unsigned __int64 *v145; // r12
  unsigned __int64 *v146; // rbx
  unsigned __int64 v147; // rax
  __int64 v148; // rsi
  __int64 v149; // rax
  __int64 v150; // rax
  struct tagSMWP *v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rsi
  __int64 v154; // r15
  unsigned __int64 v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rcx
  int v158; // ecx
  __int64 v159; // rcx
  __int64 v160; // rcx
  int v161; // ecx
  int *v162; // rbx
  unsigned __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rcx
  int v166; // ecx
  __int64 v167; // rcx
  __int64 v168; // rcx
  int v169; // ecx
  int *v170; // rcx
  __int64 v171; // rdx
  __int64 v172; // rcx
  unsigned __int64 v173; // rcx
  int v174; // [rsp+50h] [rbp-59h]
  unsigned __int64 v175; // [rsp+50h] [rbp-59h]
  int v176; // [rsp+58h] [rbp-51h]
  int v177; // [rsp+5Ch] [rbp-4Dh]
  int v178; // [rsp+60h] [rbp-49h]
  int v179; // [rsp+64h] [rbp-45h]
  int v180; // [rsp+68h] [rbp-41h]
  int v181; // [rsp+6Ch] [rbp-3Dh]
  int v182; // [rsp+70h] [rbp-39h]
  unsigned __int64 *v183; // [rsp+78h] [rbp-31h]
  _DWORD v184[2]; // [rsp+80h] [rbp-29h] BYREF
  int v185; // [rsp+88h] [rbp-21h]
  int v186; // [rsp+8Ch] [rbp-1Dh]
  int v187; // [rsp+90h] [rbp-19h]
  struct tagBWL *v188; // [rsp+98h] [rbp-11h]
  _QWORD v189[12]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int16 v190; // [rsp+110h] [rbp+67h]
  int v191; // [rsp+118h] [rbp+6Fh]
  int v192; // [rsp+120h] [rbp+77h]
  int v193; // [rsp+120h] [rbp+77h]
  unsigned __int64 *v194; // [rsp+120h] [rbp+77h]
  int v195; // [rsp+128h] [rbp+7Fh]

  v179 = 0;
  v178 = 0;
  v195 = 0;
  v176 = 0;
  v182 = 0;
  v177 = 0;
  result = BuildHwndList(*(_QWORD *)(a1 + 96), 2, 0LL);
  v188 = result;
  v3 = result;
  if ( !result )
    return result;
  v181 = IsTrayWindow(*(_QWORD *)(a1 + 96));
  v187 = IsDPIAbsoluteSysMet(0x2FuLL);
  if ( v187 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) == 0 )
    {
LABEL_36:
      v7 = (int *)(gpsi + 2456LL);
      goto LABEL_6;
    }
  }
  else if ( IsDPIDWMSysMet(v4)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_36;
  }
  if ( IsDPIDWMSysMet(0x2FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v30 = 0)
      : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v30) )
  {
    v7 = (int *)(gpsi + 2844LL);
  }
  else
  {
    v7 = (int *)(gpsi + 2068LL);
  }
LABEL_6:
  v8 = *v7;
  v191 = *v7;
  v174 = IsDPIAbsoluteSysMet(0x30uLL);
  if ( !v174 )
  {
    if ( IsDPIDWMSysMet(v9)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
    {
      goto LABEL_52;
    }
LABEL_8:
    if ( IsDPIDWMSysMet(0x30uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v34 = 0)
        : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v34) )
    {
      v12 = (int *)(gpsi + 2848LL);
    }
    else
    {
      v12 = (int *)(gpsi + 2072LL);
    }
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) != 0 )
  {
    goto LABEL_8;
  }
LABEL_52:
  v12 = (int *)(gpsi + 2460LL);
LABEL_10:
  v13 = *v12;
  v192 = *v12;
  InternalGetRealClientRect(a1, (__int64)v184, 1LL, 0LL, 1);
  v14 = HMValidateHandleNoSecure(ghwndSwitch, 1);
  v15 = (unsigned __int64 *)((char *)v3 + 32);
  v183 = v15;
  if ( *v15 == 1 )
  {
    LODWORD(v18) = 0;
    goto LABEL_17;
  }
  v16 = 0;
  do
  {
    v17 = HMValidateHandleNoSecure(*v15, 1);
    v18 = 0LL;
    if ( !v17 || (*(_BYTE *)(v17 + 55) & 0x10) == 0 || v17 == v14 )
      goto LABEL_14;
    Prop = (_DWORD *)GetProp(v17, (unsigned __int16)atomCheckpointProp, 1LL);
    v26 = Prop;
    if ( !Prop )
    {
      v8 = v191;
LABEL_14:
      *v15 = v18;
      goto LABEL_15;
    }
    if ( (v25 & 0x20) == 0 )
    {
      Prop[8] &= ~8u;
      Prop[5] = -1;
      Prop[4] = -1;
      *v15 = v18;
LABEL_23:
      v8 = v191;
      goto LABEL_15;
    }
    Prop[8] &= ~1u;
    v35 = Prop + 4;
    Prop[4] = *(_DWORD *)(v24 + 112);
    ++v16;
    Prop[5] = *(_DWORD *)(v24 + 116);
    ScreenToClient(a1, Prop + 4);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37);
        LODWORD(v18) = 0;
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x4000) == 0 )
          goto LABEL_70;
      }
    }
    else if ( IsDPIDWMSysMet(v36)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) == 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      LODWORD(v18) = 0;
      if ( *(_QWORD *)(ThreadWin32Thread + 416) )
      {
        v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1;
        LODWORD(v18) = 0;
      }
      else
      {
        v42 = 0;
      }
      if ( v42 )
      {
LABEL_70:
        v43 = (int *)(gpsi + 2492LL);
        goto LABEL_80;
      }
    }
    if ( IsDPIDWMSysMet(0x38uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0 )
      {
        v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        LODWORD(v18) = 0;
        if ( *(_QWORD *)(v45 + 416) )
        {
          v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1;
          LODWORD(v18) = 0;
        }
        else
        {
          v46 = 0;
        }
        if ( v46 )
        {
          v43 = (int *)(gpsi + 2880LL);
          goto LABEL_80;
        }
      }
      else
      {
        LODWORD(v18) = 0;
      }
    }
    v43 = (int *)(gpsi + 2104LL);
LABEL_80:
    v47 = *v43 & 0xFFFFFFF7;
    if ( *v43 < 0 )
      goto LABEL_92;
    if ( v47 <= 1 )
    {
      v13 = v192;
      v26[5] = (v192 / 2 - v26[5] + v186) % v192 - (v192 / 2 - v26[5]);
      goto LABEL_23;
    }
    if ( v47 <= 3 )
    {
      v13 = v192;
      v26[5] = v26[5] + v192 / 2 - (v26[5] + v192 / 2) % v192;
      goto LABEL_23;
    }
    if ( v47 == 4 )
    {
LABEL_88:
      v8 = v191;
      *v35 = *v35 + v191 / 2 - (*v35 + v191 / 2) % v191;
      goto LABEL_89;
    }
    if ( v47 != 5 )
    {
      if ( v47 == 6 )
        goto LABEL_88;
      if ( v47 != 7 )
      {
LABEL_92:
        v13 = v192;
        goto LABEL_23;
      }
    }
    v8 = v191;
    *v35 = (v191 / 2 - *v35 + v185) % v191 - (v191 / 2 - *v35);
LABEL_89:
    v13 = v192;
LABEL_15:
    ++v15;
  }
  while ( *v15 != 1 );
  v19 = v174;
  v20 = v16 == 0;
  v190 = v16;
  v21 = v187;
  if ( v20 )
  {
LABEL_17:
    v22 = v18;
    goto LABEL_18;
  }
  v48 = v181;
  if ( v181 )
  {
    v49 = 0;
    v50 = -32000;
    v175 = 0xFFFF8300FFFF8300uLL;
    v51 = -32000;
    goto LABEL_324;
  }
  v193 = IsDPIAbsoluteSysMet(0x38uLL);
  if ( v193 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) == 0 )
    {
      goto LABEL_106;
    }
LABEL_107:
    if ( IsDPIDWMSysMet(0x38uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v59 = 0)
        : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v59) )
    {
      v57 = (_DWORD *)(gpsi + 2880LL);
    }
    else
    {
      v57 = (_DWORD *)(gpsi + 2104LL);
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(v52)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0 )
    {
      goto LABEL_107;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_107;
    }
LABEL_106:
    v57 = (_DWORD *)(gpsi + 2492LL);
  }
  if ( (*v57 & 1) != 0 )
  {
    v60 = v191;
    v179 = v185 - v8;
    v50 = v185 - v8;
    LODWORD(v175) = v185 - v8;
    v195 = -v8;
    goto LABEL_157;
  }
  if ( v21 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) == 0 )
    {
      goto LABEL_128;
    }
LABEL_129:
    if ( IsDPIDWMSysMet(0x2FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v67 = 0)
        : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v67) )
    {
      v65 = (_DWORD *)(gpsi + 2844LL);
    }
    else
    {
      v65 = (_DWORD *)(gpsi + 2068LL);
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(0x2FuLL)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x4000) != 0 )
    {
      goto LABEL_129;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_129;
    }
LABEL_128:
    v65 = (_DWORD *)(gpsi + 2456LL);
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0 )
    {
LABEL_140:
      if ( IsDPIDWMSysMet(0x39uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v71 = 0)
          : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v71) )
      {
        v57 = (_DWORD *)(gpsi + 2884LL);
      }
      else
      {
        v57 = (_DWORD *)(gpsi + 2108LL);
      }
      goto LABEL_156;
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(v68)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0 )
    {
      goto LABEL_140;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_140;
    }
  }
  v57 = (_DWORD *)(gpsi + 2496LL);
LABEL_156:
  v60 = v191;
  v50 = *v65 + v184[0] - *v57;
  v179 = v50;
  LODWORD(v175) = v50;
  v195 = v191;
LABEL_157:
  if ( v193 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x4000) == 0 )
    {
      goto LABEL_168;
    }
LABEL_169:
    if ( IsDPIDWMSysMet(0x38uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v81 = 0)
        : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v81) )
    {
      v79 = (int *)(gpsi + 2880LL);
    }
    else
    {
      v79 = (int *)(gpsi + 2104LL);
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(0x38uLL)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0 )
    {
      goto LABEL_169;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_169;
    }
LABEL_168:
    v79 = (int *)(gpsi + 2492LL);
  }
  v82 = *v79;
  v83 = 2LL;
  if ( (v82 & 2) == 0 )
  {
    v178 = v186 - v13;
    v51 = v186 - v13;
    HIDWORD(v175) = v186 - v13;
    v176 = -v13;
    goto LABEL_218;
  }
  if ( !v19 )
  {
    if ( !IsDPIDWMSysMet(0x30uLL)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v87) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x4000) != 0 )
    {
      goto LABEL_181;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_181;
    }
    goto LABEL_192;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(2LL) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x4000) == 0 )
  {
LABEL_192:
    v90 = (_DWORD *)(gpsi + 2460LL);
    goto LABEL_197;
  }
LABEL_181:
  if ( IsDPIDWMSysMet(0x30uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v85) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v86 = 0)
      : (v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v86) )
  {
    v90 = (_DWORD *)(gpsi + 2848LL);
  }
  else
  {
    v90 = (_DWORD *)(gpsi + 2072LL);
  }
LABEL_197:
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
  {
    if ( !IsDPIDWMSysMet(v91)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x4000) != 0 )
    {
      goto LABEL_200;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_200;
    }
    goto LABEL_211;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x4000) == 0 )
  {
LABEL_211:
    v98 = (_DWORD *)(gpsi + 2500LL);
    goto LABEL_216;
  }
LABEL_200:
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v94 = 0)
      : (v94 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v94) )
  {
    v98 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v98 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_216:
  v176 = v13;
  v83 = (unsigned int)(v184[1] + *v90 - *v98);
  v178 = v83;
  v51 = v83;
  HIDWORD(v175) = v83;
LABEL_218:
  if ( !v193 )
  {
    if ( !IsDPIDWMSysMet(0x38uLL)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v102) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v103) + 776) & 0x4000) != 0 )
    {
      goto LABEL_221;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                     + 260LL) & 1) )
    {
      goto LABEL_221;
    }
    goto LABEL_232;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x4000) == 0 )
  {
LABEL_232:
    v105 = (_DWORD *)(gpsi + 2492LL);
    goto LABEL_237;
  }
LABEL_221:
  if ( IsDPIDWMSysMet(0x38uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v100) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v101 = 0)
      : (v101 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
        v101) )
  {
    v105 = (_DWORD *)(gpsi + 2880LL);
  }
  else
  {
    v105 = (_DWORD *)(gpsi + 2104LL);
  }
LABEL_237:
  if ( (*v105 & 4) != 0 )
  {
    v177 = 0;
    v106 = v186 / v13;
  }
  else
  {
    v177 = 1;
    v106 = v185 / v60;
  }
  v107 = v183;
  v49 = v106;
  v108 = v183;
  if ( v106 < 1 )
    v49 = 1;
  v180 = v49;
  v182 = v49;
  if ( *v183 != 1 )
  {
    v109 = v193;
    while ( 1 )
    {
      if ( !*v108 )
        goto LABEL_321;
      v110 = HMValidateHandleNoSecure(*v108, 1);
      v194 = (unsigned __int64 *)v110;
      if ( !v110 )
        goto LABEL_321;
      v111 = GetProp(v110, (unsigned __int16)atomCheckpointProp, 1LL);
      v114 = v113;
      v115 = v107;
      v116 = *(_QWORD *)(v111 + 16);
      if ( v107 >= v108 )
        goto LABEL_312;
      while ( 1 )
      {
        if ( *v115 )
        {
          v117 = HMValidateHandleNoSecure(*v115, 1);
          v113 = 0LL;
          if ( v117 )
            break;
        }
LABEL_310:
        if ( ++v115 >= v108 )
          goto LABEL_311;
      }
      v119 = *(_QWORD *)(GetProp(v117, (unsigned __int16)atomCheckpointProp, 1LL) + 16);
      if ( v109 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x2000) == 0 )
        {
          v121 = PsGetCurrentProcessWin32Process(v120);
          v113 = 0LL;
          if ( (*(_DWORD *)(v121 + 776) & 0x4000) == 0 )
            goto LABEL_260;
        }
      }
      else if ( IsDPIDWMSysMet(0x38uLL)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v122) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v123) + 776) & 0x4000) == 0 )
      {
        v124 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v113 = 0LL;
        if ( *(_QWORD *)(v124 + 416) )
        {
          v125 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1;
          v113 = 0LL;
        }
        else
        {
          v125 = 0;
        }
        if ( v125 )
        {
LABEL_260:
          v126 = (_DWORD *)(gpsi + 2492LL);
          goto LABEL_270;
        }
      }
      if ( IsDPIDWMSysMet(0x38uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v127) + 776) & 0x2000) != 0 )
        {
          v128 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v113 = 0LL;
          if ( *(_QWORD *)(v128 + 416) )
          {
            v129 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1;
            v113 = 0LL;
          }
          else
          {
            v129 = 0;
          }
          if ( v129 )
          {
            v126 = (_DWORD *)(gpsi + 2880LL);
            goto LABEL_270;
          }
        }
        else
        {
          v113 = 0LL;
        }
      }
      v126 = (_DWORD *)(gpsi + 2104LL);
LABEL_270:
      v130 = *v126 & 0xFFFFFFF7;
      if ( !v130 )
      {
        v139 = SHIDWORD(v119) < SHIDWORD(v116);
        if ( HIDWORD(v119) != HIDWORD(v116) )
          goto LABEL_307;
        if ( (int)v119 > (int)v116 )
          goto LABEL_308;
        goto LABEL_306;
      }
      v131 = v130 - 1;
      if ( !v131 )
      {
        v139 = SHIDWORD(v119) < SHIDWORD(v116);
        if ( HIDWORD(v119) != HIDWORD(v116) )
          goto LABEL_307;
        if ( (int)v119 < (int)v116 )
          goto LABEL_308;
LABEL_306:
        v139 = SHIDWORD(v119) < SHIDWORD(v116);
        goto LABEL_307;
      }
      v132 = v131 - 1;
      if ( !v132 )
      {
        v138 = SHIDWORD(v119) <= SHIDWORD(v116);
        if ( HIDWORD(v119) != HIDWORD(v116) )
          goto LABEL_287;
        if ( (int)v119 > (int)v116 )
          goto LABEL_308;
LABEL_286:
        v138 = SHIDWORD(v119) <= SHIDWORD(v116);
        goto LABEL_287;
      }
      v133 = v132 - 1;
      if ( !v133 )
      {
        v138 = SHIDWORD(v119) <= SHIDWORD(v116);
        if ( HIDWORD(v119) != HIDWORD(v116) )
          goto LABEL_287;
        if ( (int)v119 < (int)v116 )
          goto LABEL_308;
        goto LABEL_286;
      }
      v134 = v133 - 1;
      if ( !v134 )
      {
        v138 = (int)v119 <= (int)v116;
        if ( (_DWORD)v119 == (_DWORD)v116 )
        {
          if ( SHIDWORD(v119) < SHIDWORD(v116) )
            goto LABEL_308;
LABEL_285:
          v138 = (int)v119 <= (int)v116;
        }
        goto LABEL_287;
      }
      v135 = v134 - 1;
      if ( !v135 )
      {
        v139 = (int)v119 < (int)v116;
        if ( (_DWORD)v119 == (_DWORD)v116 )
        {
          if ( SHIDWORD(v119) < SHIDWORD(v116) )
            goto LABEL_308;
          v139 = (int)v119 < (int)v116;
        }
LABEL_307:
        if ( v139 )
          goto LABEL_308;
        goto LABEL_309;
      }
      v136 = v135 - 1;
      if ( !v136 )
      {
        v138 = (int)v119 <= (int)v116;
        if ( (_DWORD)v119 == (_DWORD)v116 )
        {
          if ( SHIDWORD(v119) <= SHIDWORD(v116) )
            goto LABEL_285;
LABEL_308:
          v114 = 1;
LABEL_309:
          if ( v114 )
            goto LABEL_311;
          goto LABEL_310;
        }
LABEL_287:
        if ( !v138 )
          goto LABEL_308;
        goto LABEL_309;
      }
      if ( v136 != 1 )
        goto LABEL_309;
      v137 = (int)v119 < (int)v116;
      if ( (_DWORD)v119 == (_DWORD)v116 )
      {
        if ( SHIDWORD(v119) > SHIDWORD(v116) )
          goto LABEL_311;
        v137 = (int)v119 < (int)v116;
      }
      if ( !v137 )
        goto LABEL_309;
LABEL_311:
      v112 = v194;
      v107 = v183;
LABEL_312:
      v140 = v113;
      v141 = (unsigned __int64)((char *)v108 - (char *)v115 + 7) >> 3;
      if ( v115 > v108 )
        v141 = v113;
      if ( v141 )
      {
        do
        {
          v142 = *(unsigned __int64 **)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v115
                                      + gSharedInfo[1]);
          v143 = v113;
          if ( v112 )
            v143 = *v112;
          *v115 = v143;
          ++v140;
          ++v115;
          v112 = v142;
        }
        while ( v140 < v141 );
      }
      v144 = v113;
      if ( v112 )
        v144 = *v112;
      *v108 = v144;
LABEL_321:
      if ( *++v108 == 1 )
      {
        v51 = HIDWORD(v175);
        v50 = v175;
        v49 = v180;
        break;
      }
    }
  }
  v48 = 0;
LABEL_324:
  v145 = v183;
  v146 = v183;
  v147 = *v183;
  if ( *v183 != 1 )
  {
    v148 = v48;
    while ( 1 )
    {
      if ( !v147 )
        goto LABEL_335;
      v149 = HMValidateHandleNoSecure(v147, 1);
      if ( !v149 )
        goto LABEL_335;
      v150 = GetProp(v149, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( v150 )
      {
        *(_DWORD *)(v150 + 32) |= 8u;
        *(_QWORD *)(v150 + 16) = v175;
      }
      if ( v148 )
        goto LABEL_335;
      if ( --v49 > 0 )
      {
        if ( v177 )
        {
          v50 += v195;
          LODWORD(v175) = v50;
          goto LABEL_335;
        }
      }
      else
      {
        v49 = v182;
        if ( !v177 )
        {
          v50 += v195;
          v51 = v178;
          v175 = __PAIR64__(v178, v50);
          goto LABEL_335;
        }
        v50 = v179;
        LODWORD(v175) = v179;
      }
      v51 += v176;
      HIDWORD(v175) = v51;
LABEL_335:
      v147 = *++v146;
      if ( *v146 == 1 )
      {
        v145 = v183;
        break;
      }
    }
  }
  v22 = v190;
  v151 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v190);
  if ( !v151 )
    goto LABEL_18;
  while ( 2 )
  {
    v173 = *v145;
    if ( *v145 != 1 )
    {
      if ( !v173 || (v152 = HMValidateHandleNoSecure(v173, 1), (v153 = v152) == 0) )
      {
LABEL_383:
        ++v145;
        continue;
      }
      v154 = GetProp(v152, (unsigned __int16)atomCheckpointProp, 1LL);
      v189[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v189;
      v189[1] = v153;
      ++*(_DWORD *)(v153 + 8);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v155) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x4000) != 0 )
        {
          goto LABEL_347;
        }
      }
      else if ( !IsDPIDWMSysMet(v155)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v159) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v160) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v161 = 0)
               : (v161 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                 !v161) )
      {
LABEL_347:
        if ( IsDPIDWMSysMet(0x3AuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v157) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v158 = 0)
            : (v158 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
              v158) )
        {
          v162 = (int *)(gpsi + 2888LL);
        }
        else
        {
          v162 = (int *)(gpsi + 2112LL);
        }
LABEL_363:
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v163) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v164) + 776) & 0x4000) != 0 )
          {
            goto LABEL_366;
          }
        }
        else if ( !IsDPIDWMSysMet(v163)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v167) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v168) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v169 = 0)
                 : (v169 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                   !v169) )
        {
LABEL_366:
          if ( IsDPIDWMSysMet(0x39uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v165) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v166 = 0)
              : (v166 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                v166) )
          {
            v170 = (int *)(gpsi + 2884LL);
          }
          else
          {
            v170 = (int *)(gpsi + 2108LL);
          }
LABEL_382:
          v151 = (struct tagSMWP *)DeferWindowPos(
                                     (__int64)v151,
                                     v153,
                                     0LL,
                                     *(_DWORD *)(v154 + 16),
                                     *(_DWORD *)(v154 + 20),
                                     *v170,
                                     *v162,
                                     276,
                                     0);
          ThreadUnlock1(v172, v171);
          if ( !v151 )
            goto LABEL_18;
          goto LABEL_383;
        }
        v170 = (int *)(gpsi + 2496LL);
        goto LABEL_382;
      }
      v162 = (int *)(gpsi + 2500LL);
      goto LABEL_363;
    }
    break;
  }
  xxxEndDeferWindowPosEx(v151, 1);
LABEL_18:
  FreeHwndList(v188);
  return (struct tagBWL *)v22;
}
