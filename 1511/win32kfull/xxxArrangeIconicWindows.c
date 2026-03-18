/*
 * XREFs of xxxArrangeIconicWindows @ 0x1C0149340
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _DeferWindowPos @ 0x1C00750A4 (_DeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C0075248 (InternalBeginDeferWindowPos.c)
 *     _ScreenToClient @ 0x1C008A44C (_ScreenToClient.c)
 *     InternalGetRealClientRect @ 0x1C00E9948 (InternalGetRealClientRect.c)
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
  int v18; // r13d
  bool v19; // zf
  int v20; // r12d
  unsigned int v21; // r14d
  _DWORD *Prop; // rax
  __int64 v23; // r10
  char v24; // r11
  _DWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v33; // ecx
  _DWORD *v34; // rsi
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int *v42; // rcx
  signed int v43; // eax
  int v44; // ecx
  int v45; // r14d
  int v46; // r15d
  int v47; // r13d
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // ecx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _DWORD *v55; // rcx
  int v56; // edi
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  _DWORD *v61; // rbx
  __int64 v62; // rcx
  int v63; // ecx
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int *v75; // rcx
  __int64 v76; // rcx
  int v77; // ecx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v82; // ecx
  __int64 v83; // rcx
  __int64 v84; // rcx
  _DWORD *v86; // rbx
  unsigned __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // ecx
  __int64 v91; // rcx
  __int64 v92; // rcx
  _DWORD *v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  int v97; // ecx
  __int64 v98; // rcx
  __int64 v99; // rcx
  _DWORD *v101; // rcx
  int v102; // eax
  unsigned __int64 *v103; // rbx
  unsigned __int64 *v104; // r12
  int v105; // r13d
  __int64 v106; // rax
  unsigned __int64 *v107; // r15
  int v108; // r14d
  __int64 v109; // rdi
  unsigned __int64 *v110; // r10
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rcx
  _DWORD *v118; // rcx
  __int64 v119; // rcx
  int v120; // ecx
  unsigned int v121; // ecx
  unsigned int v122; // ecx
  unsigned int v123; // ecx
  unsigned int v124; // ecx
  unsigned int v125; // ecx
  unsigned int v126; // ecx
  unsigned int v127; // ecx
  bool v128; // cc
  bool v129; // cc
  bool v130; // cc
  unsigned __int64 v131; // r8
  unsigned __int64 v132; // rdx
  unsigned __int64 *v133; // r9
  unsigned __int64 v134; // rax
  unsigned __int64 v135; // rax
  unsigned __int64 *v136; // r12
  unsigned __int64 *v137; // rbx
  unsigned __int64 v138; // rax
  __int64 v139; // rsi
  __int64 v140; // rax
  __int64 v141; // rax
  struct tagSMWP *v142; // rdi
  __int64 v143; // rax
  __int64 v144; // rsi
  __int64 v145; // r15
  unsigned __int64 v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // rcx
  int v149; // ecx
  __int64 v150; // rcx
  __int64 v151; // rcx
  int v152; // ecx
  int *v153; // rbx
  unsigned __int64 v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rcx
  int v157; // ecx
  __int64 v158; // rcx
  __int64 v159; // rcx
  int v160; // ecx
  int *v161; // rcx
  __int64 v162; // rdx
  __int64 v163; // rcx
  unsigned __int64 v164; // rcx
  int v165; // [rsp+50h] [rbp-59h]
  unsigned __int64 v166; // [rsp+50h] [rbp-59h]
  int v167; // [rsp+58h] [rbp-51h]
  int v168; // [rsp+5Ch] [rbp-4Dh]
  int v169; // [rsp+60h] [rbp-49h]
  int v170; // [rsp+64h] [rbp-45h]
  int v171; // [rsp+68h] [rbp-41h]
  int v172; // [rsp+6Ch] [rbp-3Dh]
  int v173; // [rsp+70h] [rbp-39h]
  unsigned __int64 *v174; // [rsp+78h] [rbp-31h]
  _DWORD v175[2]; // [rsp+80h] [rbp-29h] BYREF
  int v176; // [rsp+88h] [rbp-21h]
  int v177; // [rsp+8Ch] [rbp-1Dh]
  int v178; // [rsp+90h] [rbp-19h]
  struct tagBWL *v179; // [rsp+98h] [rbp-11h]
  _QWORD v180[12]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int16 v181; // [rsp+110h] [rbp+67h]
  int v182; // [rsp+118h] [rbp+6Fh]
  int v183; // [rsp+120h] [rbp+77h]
  int v184; // [rsp+120h] [rbp+77h]
  unsigned __int64 *v185; // [rsp+120h] [rbp+77h]
  int v186; // [rsp+128h] [rbp+7Fh]

  v170 = 0;
  v169 = 0;
  v186 = 0;
  v167 = 0;
  v173 = 0;
  v168 = 0;
  result = BuildHwndList(*(_QWORD *)(a1 + 96), 2, 0LL);
  v179 = result;
  v3 = result;
  if ( !result )
    return result;
  v172 = IsTrayWindow(*(_QWORD *)(a1 + 96));
  v178 = IsDPIAbsoluteSysMet(0x2FuLL);
  if ( v178 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) == 0 )
    {
LABEL_36:
      v7 = (int *)(gpsi + 2456LL);
      goto LABEL_6;
    }
  }
  else if ( IsDPIDWMSysMet(v4)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_36;
  }
  if ( IsDPIDWMSysMet(0x2FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v29 = 0)
      : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v29) )
  {
    v7 = (int *)(gpsi + 2844LL);
  }
  else
  {
    v7 = (int *)(gpsi + 2068LL);
  }
LABEL_6:
  v8 = *v7;
  v182 = *v7;
  v165 = IsDPIAbsoluteSysMet(0x30uLL);
  if ( !v165 )
  {
    if ( IsDPIDWMSysMet(v9)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
    {
      goto LABEL_52;
    }
LABEL_8:
    if ( IsDPIDWMSysMet(0x30uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v33 = 0)
        : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v33) )
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
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
  {
    goto LABEL_8;
  }
LABEL_52:
  v12 = (int *)(gpsi + 2460LL);
LABEL_10:
  v13 = *v12;
  v183 = *v12;
  InternalGetRealClientRect(a1, (__int64)v175, 1, 0LL, 1);
  v14 = HMValidateHandleNoSecure(ghwndSwitch, 1);
  v15 = (unsigned __int64 *)((char *)v3 + 32);
  v174 = v15;
  if ( *v15 == 1 )
    goto LABEL_17;
  v16 = 0;
  do
  {
    v17 = HMValidateHandleNoSecure(*v15, 1);
    if ( !v17 || (*(_BYTE *)(v17 + 55) & 0x10) == 0 || v17 == v14 )
      goto LABEL_14;
    Prop = (_DWORD *)GetProp(v17, (unsigned __int16)atomCheckpointProp, 1LL);
    v25 = Prop;
    if ( !Prop )
    {
      v8 = v182;
LABEL_14:
      *v15 = 0LL;
      goto LABEL_15;
    }
    if ( (v24 & 0x20) == 0 )
    {
      Prop[8] &= ~8u;
      Prop[5] = -1;
      Prop[4] = -1;
      *v15 = 0LL;
LABEL_23:
      v8 = v182;
      goto LABEL_15;
    }
    Prop[8] &= ~1u;
    v34 = Prop + 4;
    Prop[4] = *(_DWORD *)(v23 + 112);
    ++v16;
    Prop[5] = *(_DWORD *)(v23 + 116);
    ScreenToClient(a1, Prop + 4);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) == 0 )
      {
        goto LABEL_73;
      }
    }
    else if ( IsDPIDWMSysMet(v35)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
LABEL_73:
      v42 = (int *)(gpsi + 2492LL);
      goto LABEL_78;
    }
    if ( IsDPIDWMSysMet(0x38uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v38 = 0)
        : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v38) )
    {
      v42 = (int *)(gpsi + 2880LL);
    }
    else
    {
      v42 = (int *)(gpsi + 2104LL);
    }
LABEL_78:
    v43 = *v42 & 0xFFFFFFF7;
    if ( *v42 < 0 )
      goto LABEL_90;
    if ( v43 <= 1 )
    {
      v13 = v183;
      v25[5] = (v183 / 2 - v25[5] + v177) % v183 - (v183 / 2 - v25[5]);
      goto LABEL_23;
    }
    if ( v43 <= 3 )
    {
      v13 = v183;
      v25[5] = v25[5] + v183 / 2 - (v25[5] + v183 / 2) % v183;
      goto LABEL_23;
    }
    if ( v43 == 4 )
    {
LABEL_86:
      v8 = v182;
      *v34 = *v34 + v182 / 2 - (*v34 + v182 / 2) % v182;
      goto LABEL_87;
    }
    if ( v43 != 5 )
    {
      if ( v43 == 6 )
        goto LABEL_86;
      if ( v43 != 7 )
      {
LABEL_90:
        v13 = v183;
        goto LABEL_23;
      }
    }
    v8 = v182;
    *v34 = (v182 / 2 - *v34 + v176) % v182 - (v182 / 2 - *v34);
LABEL_87:
    v13 = v183;
LABEL_15:
    ++v15;
  }
  while ( *v15 != 1 );
  v18 = v165;
  v19 = v16 == 0;
  v181 = v16;
  v20 = v178;
  if ( v19 )
  {
LABEL_17:
    v21 = 0;
    goto LABEL_18;
  }
  v44 = v172;
  if ( v172 )
  {
    v45 = -32000;
    v46 = 0;
    v166 = 0xFFFF8300FFFF8300uLL;
    v47 = -32000;
    goto LABEL_320;
  }
  v184 = IsDPIAbsoluteSysMet(0x38uLL);
  if ( !v184 )
  {
    if ( !IsDPIDWMSysMet(v48)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0 )
    {
      goto LABEL_96;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_96;
    }
    goto LABEL_107;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) == 0 )
  {
LABEL_107:
    v55 = (_DWORD *)(gpsi + 2492LL);
    goto LABEL_112;
  }
LABEL_96:
  if ( IsDPIDWMSysMet(0x38uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v51 = 0)
      : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v51) )
  {
    v55 = (_DWORD *)(gpsi + 2880LL);
  }
  else
  {
    v55 = (_DWORD *)(gpsi + 2104LL);
  }
LABEL_112:
  if ( (*v55 & 1) != 0 )
  {
    v56 = v182;
    v170 = v176 - v8;
    v45 = v176 - v8;
    LODWORD(v166) = v176 - v8;
    v186 = -v8;
    goto LABEL_154;
  }
  if ( v20 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) == 0 )
    {
      goto LABEL_125;
    }
LABEL_126:
    if ( IsDPIDWMSysMet(0x2FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v62) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v63 = 0)
        : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v63) )
    {
      v61 = (_DWORD *)(gpsi + 2844LL);
    }
    else
    {
      v61 = (_DWORD *)(gpsi + 2068LL);
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(0x2FuLL)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0 )
    {
      goto LABEL_126;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_126;
    }
LABEL_125:
    v61 = (_DWORD *)(gpsi + 2456LL);
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0 )
    {
LABEL_137:
      if ( IsDPIDWMSysMet(0x39uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v67 = 0)
          : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v67) )
      {
        v55 = (_DWORD *)(gpsi + 2884LL);
      }
      else
      {
        v55 = (_DWORD *)(gpsi + 2108LL);
      }
      goto LABEL_153;
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(v64)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0 )
    {
      goto LABEL_137;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_137;
    }
  }
  v55 = (_DWORD *)(gpsi + 2496LL);
LABEL_153:
  v56 = v182;
  v45 = *v61 + v175[0] - *v55;
  v170 = v45;
  LODWORD(v166) = v45;
  v186 = v182;
LABEL_154:
  if ( v184 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v71) + 776) & 0x4000) == 0 )
    {
      goto LABEL_165;
    }
LABEL_166:
    if ( IsDPIDWMSysMet(0x38uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v77 = 0)
        : (v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v77) )
    {
      v75 = (int *)(gpsi + 2880LL);
    }
    else
    {
      v75 = (int *)(gpsi + 2104LL);
    }
  }
  else
  {
    if ( !IsDPIDWMSysMet(0x38uLL)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0 )
    {
      goto LABEL_166;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_166;
    }
LABEL_165:
    v75 = (int *)(gpsi + 2492LL);
  }
  v78 = *v75;
  v79 = 2LL;
  if ( (v78 & 2) == 0 )
  {
    v169 = v177 - v13;
    v47 = v177 - v13;
    HIDWORD(v166) = v177 - v13;
    v167 = -v13;
    goto LABEL_215;
  }
  if ( !v18 )
  {
    if ( !IsDPIDWMSysMet(0x30uLL)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v84) + 776) & 0x4000) != 0 )
    {
      goto LABEL_178;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_178;
    }
    goto LABEL_189;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(2LL) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x4000) == 0 )
  {
LABEL_189:
    v86 = (_DWORD *)(gpsi + 2460LL);
    goto LABEL_194;
  }
LABEL_178:
  if ( IsDPIDWMSysMet(0x30uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v82 = 0)
      : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v82) )
  {
    v86 = (_DWORD *)(gpsi + 2848LL);
  }
  else
  {
    v86 = (_DWORD *)(gpsi + 2072LL);
  }
LABEL_194:
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
  {
    if ( !IsDPIDWMSysMet(v87)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v92) + 776) & 0x4000) != 0 )
    {
      goto LABEL_197;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_197;
    }
    goto LABEL_208;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v87) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v88) + 776) & 0x4000) == 0 )
  {
LABEL_208:
    v94 = (_DWORD *)(gpsi + 2500LL);
    goto LABEL_213;
  }
LABEL_197:
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v89) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v90 = 0)
      : (v90 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v90) )
  {
    v94 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v94 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_213:
  v167 = v13;
  v79 = (unsigned int)(v175[1] + *v86 - *v94);
  v169 = v79;
  v47 = v79;
  HIDWORD(v166) = v79;
LABEL_215:
  if ( !v184 )
  {
    if ( !IsDPIDWMSysMet(0x38uLL)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v99) + 776) & 0x4000) != 0 )
    {
      goto LABEL_218;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_218;
    }
    goto LABEL_229;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v79) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v95) + 776) & 0x4000) == 0 )
  {
LABEL_229:
    v101 = (_DWORD *)(gpsi + 2492LL);
    goto LABEL_234;
  }
LABEL_218:
  if ( IsDPIDWMSysMet(0x38uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v96) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v97 = 0)
      : (v97 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v97) )
  {
    v101 = (_DWORD *)(gpsi + 2880LL);
  }
  else
  {
    v101 = (_DWORD *)(gpsi + 2104LL);
  }
LABEL_234:
  if ( (*v101 & 4) != 0 )
  {
    v168 = 0;
    v102 = v177 / v13;
  }
  else
  {
    v168 = 1;
    v102 = v176 / v56;
  }
  v103 = v174;
  v46 = v102;
  v104 = v174;
  if ( v102 < 1 )
    v46 = 1;
  v171 = v46;
  v173 = v46;
  if ( *v174 != 1 )
  {
    v105 = v184;
    while ( 1 )
    {
      if ( !*v104 )
        goto LABEL_317;
      v106 = HMValidateHandleNoSecure(*v104, 1);
      v185 = (unsigned __int64 *)v106;
      if ( !v106 )
        goto LABEL_317;
      v107 = v103;
      v108 = 0;
      v109 = *(_QWORD *)(GetProp(v106, (unsigned __int16)atomCheckpointProp, 1LL) + 16);
      if ( v103 >= v104 )
        goto LABEL_308;
      while ( 1 )
      {
        if ( *v107 )
        {
          v111 = HMValidateHandleNoSecure(*v107, 1);
          if ( v111 )
            break;
        }
LABEL_306:
        if ( ++v107 >= v104 )
          goto LABEL_307;
      }
      v113 = *(_QWORD *)(GetProp(v111, (unsigned __int16)atomCheckpointProp, 1LL) + 16);
      if ( v105 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v112) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v114) + 776) & 0x4000) == 0 )
        {
          goto LABEL_257;
        }
      }
      else if ( IsDPIDWMSysMet(0x38uLL)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v115) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1 )
      {
LABEL_257:
        v118 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_266;
      }
      if ( IsDPIDWMSysMet(0x38uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v120 = 0)
          : (v120 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v120) )
      {
        v118 = (_DWORD *)(gpsi + 2880LL);
      }
      else
      {
        v118 = (_DWORD *)(gpsi + 2104LL);
      }
LABEL_266:
      v121 = *v118 & 0xFFFFFFF7;
      if ( !v121 )
      {
        v130 = SHIDWORD(v113) < SHIDWORD(v109);
        if ( HIDWORD(v113) != HIDWORD(v109) )
          goto LABEL_303;
        if ( (int)v113 > (int)v109 )
          goto LABEL_304;
        goto LABEL_302;
      }
      v122 = v121 - 1;
      if ( !v122 )
      {
        v130 = SHIDWORD(v113) < SHIDWORD(v109);
        if ( HIDWORD(v113) != HIDWORD(v109) )
          goto LABEL_303;
        if ( (int)v113 < (int)v109 )
          goto LABEL_304;
LABEL_302:
        v130 = SHIDWORD(v113) < SHIDWORD(v109);
        goto LABEL_303;
      }
      v123 = v122 - 1;
      if ( !v123 )
      {
        v129 = SHIDWORD(v113) <= SHIDWORD(v109);
        if ( HIDWORD(v113) != HIDWORD(v109) )
          goto LABEL_283;
        if ( (int)v113 > (int)v109 )
          goto LABEL_304;
LABEL_282:
        v129 = SHIDWORD(v113) <= SHIDWORD(v109);
        goto LABEL_283;
      }
      v124 = v123 - 1;
      if ( !v124 )
      {
        v129 = SHIDWORD(v113) <= SHIDWORD(v109);
        if ( HIDWORD(v113) != HIDWORD(v109) )
          goto LABEL_283;
        if ( (int)v113 < (int)v109 )
          goto LABEL_304;
        goto LABEL_282;
      }
      v125 = v124 - 1;
      if ( !v125 )
      {
        v129 = (int)v113 <= (int)v109;
        if ( (_DWORD)v113 == (_DWORD)v109 )
        {
          if ( SHIDWORD(v113) < SHIDWORD(v109) )
            goto LABEL_304;
LABEL_281:
          v129 = (int)v113 <= (int)v109;
        }
        goto LABEL_283;
      }
      v126 = v125 - 1;
      if ( !v126 )
      {
        v130 = (int)v113 < (int)v109;
        if ( (_DWORD)v113 == (_DWORD)v109 )
        {
          if ( SHIDWORD(v113) < SHIDWORD(v109) )
            goto LABEL_304;
          v130 = (int)v113 < (int)v109;
        }
LABEL_303:
        if ( v130 )
          goto LABEL_304;
        goto LABEL_305;
      }
      v127 = v126 - 1;
      if ( !v127 )
      {
        v129 = (int)v113 <= (int)v109;
        if ( (_DWORD)v113 == (_DWORD)v109 )
        {
          if ( SHIDWORD(v113) <= SHIDWORD(v109) )
            goto LABEL_281;
LABEL_304:
          v108 = 1;
LABEL_305:
          if ( v108 )
            goto LABEL_307;
          goto LABEL_306;
        }
LABEL_283:
        if ( !v129 )
          goto LABEL_304;
        goto LABEL_305;
      }
      if ( v127 != 1 )
        goto LABEL_305;
      v128 = (int)v113 < (int)v109;
      if ( (_DWORD)v113 == (_DWORD)v109 )
      {
        if ( SHIDWORD(v113) > SHIDWORD(v109) )
          goto LABEL_307;
        v128 = (int)v113 < (int)v109;
      }
      if ( !v128 )
        goto LABEL_305;
LABEL_307:
      v110 = v185;
      v103 = v174;
LABEL_308:
      v131 = 0LL;
      v132 = (unsigned __int64)((char *)v104 - (char *)v107 + 7) >> 3;
      if ( v107 > v104 )
        v132 = 0LL;
      if ( v132 )
      {
        do
        {
          v133 = *(unsigned __int64 **)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v107
                                      + gSharedInfo[1]);
          v134 = 0LL;
          if ( v110 )
            v134 = *v110;
          *v107 = v134;
          ++v131;
          ++v107;
          v110 = v133;
        }
        while ( v131 < v132 );
      }
      v135 = 0LL;
      if ( v110 )
        v135 = *v110;
      *v104 = v135;
LABEL_317:
      if ( *++v104 == 1 )
      {
        v47 = HIDWORD(v166);
        v45 = v166;
        v46 = v171;
        break;
      }
    }
  }
  v44 = 0;
LABEL_320:
  v136 = v174;
  v137 = v174;
  v138 = *v174;
  if ( *v174 != 1 )
  {
    v139 = v44;
    while ( 1 )
    {
      if ( !v138 )
        goto LABEL_331;
      v140 = HMValidateHandleNoSecure(v138, 1);
      if ( !v140 )
        goto LABEL_331;
      v141 = GetProp(v140, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( v141 )
      {
        *(_DWORD *)(v141 + 32) |= 8u;
        *(_QWORD *)(v141 + 16) = v166;
      }
      if ( v139 )
        goto LABEL_331;
      if ( --v46 > 0 )
      {
        if ( v168 )
        {
          v45 += v186;
          LODWORD(v166) = v45;
          goto LABEL_331;
        }
      }
      else
      {
        v46 = v173;
        if ( !v168 )
        {
          v45 += v186;
          v47 = v169;
          v166 = __PAIR64__(v169, v45);
          goto LABEL_331;
        }
        v45 = v170;
        LODWORD(v166) = v170;
      }
      v47 += v167;
      HIDWORD(v166) = v47;
LABEL_331:
      v138 = *++v137;
      if ( *v137 == 1 )
      {
        v136 = v174;
        break;
      }
    }
  }
  v21 = v181;
  v142 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v181);
  if ( !v142 )
    goto LABEL_18;
  while ( 2 )
  {
    v164 = *v136;
    if ( *v136 != 1 )
    {
      if ( !v164 || (v143 = HMValidateHandleNoSecure(v164, 1), (v144 = v143) == 0) )
      {
LABEL_379:
        ++v136;
        continue;
      }
      v145 = GetProp(v143, (unsigned __int16)atomCheckpointProp, 1LL);
      v180[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v180;
      v180[1] = v144;
      ++*(_DWORD *)(v144 + 8);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v146) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v147) + 776) & 0x4000) != 0 )
        {
          goto LABEL_343;
        }
      }
      else if ( !IsDPIDWMSysMet(v146)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v150) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v151) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v152 = 0)
               : (v152 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                 !v152) )
      {
LABEL_343:
        if ( IsDPIDWMSysMet(0x3AuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v148) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v149 = 0)
            : (v149 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
              v149) )
        {
          v153 = (int *)(gpsi + 2888LL);
        }
        else
        {
          v153 = (int *)(gpsi + 2112LL);
        }
LABEL_359:
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v154) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v155) + 776) & 0x4000) != 0 )
          {
            goto LABEL_362;
          }
        }
        else if ( !IsDPIDWMSysMet(v154)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v158) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v159) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v160 = 0)
                 : (v160 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                   !v160) )
        {
LABEL_362:
          if ( IsDPIDWMSysMet(0x39uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v156) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v157 = 0)
              : (v157 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                v157) )
          {
            v161 = (int *)(gpsi + 2884LL);
          }
          else
          {
            v161 = (int *)(gpsi + 2108LL);
          }
LABEL_378:
          v142 = (struct tagSMWP *)DeferWindowPos(
                                     (__int64)v142,
                                     v144,
                                     0LL,
                                     *(_DWORD *)(v145 + 16),
                                     *(_DWORD *)(v145 + 20),
                                     *v161,
                                     *v153,
                                     276,
                                     0);
          ThreadUnlock1(v163, v162);
          if ( !v142 )
            goto LABEL_18;
          goto LABEL_379;
        }
        v161 = (int *)(gpsi + 2496LL);
        goto LABEL_378;
      }
      v153 = (int *)(gpsi + 2500LL);
      goto LABEL_359;
    }
    break;
  }
  xxxEndDeferWindowPosEx(v142, 1);
LABEL_18:
  FreeHwndList(v179);
  return (struct tagBWL *)v21;
}
