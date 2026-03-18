/*
 * XREFs of ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14015A030
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14015B5D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x14015ACA8 (WPP_RECORDER_AND_TRACE_SF_ddddddddddS.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x14015AF74 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x14024C70C (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140251CD4 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?DwmNotifyWorkAreaChanged@@YAXXZ @ 0x140291060 (-DwmNotifyWorkAreaChanged@@YAXXZ.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x140292D08 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1402CB148 (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

char __fastcall xxxGetWorkAreasFromShell(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _DWORD **v3; // rcx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  struct MOVESIZEDATA *v6; // rcx
  char v7; // di
  char v8; // bl
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rax
  struct _SYNC_DISPLAY_CHANGE_DATA *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdx
  _WORD *v20; // rcx
  __int16 v21; // ax
  _WORD *v22; // rax
  char v23; // r14
  bool v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // al
  int v30; // ebx
  int v31; // edi
  int v32; // esi
  int v33; // r14d
  int v34; // r15d
  int v35; // r12d
  int v36; // r13d
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // si
  bool v41; // r14
  int **v42; // rcx
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rdx
  bool v49; // bl
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  char v54; // bl
  bool v55; // si
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  char v59; // r12
  __int64 v60; // rax
  __int64 v61; // r13
  _BYTE *v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rbx
  char v66; // r14
  bool v67; // r15
  int v68; // ebx
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  __int64 v72; // rdx
  int v73; // r12d
  char v74; // r14
  bool v75; // r15
  int v76; // ebx
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  __int64 v80; // rcx
  char v81; // al
  int v82; // ebx
  int v83; // edi
  int v84; // r14d
  int v85; // esi
  int v86; // r15d
  int v87; // r12d
  int v88; // r13d
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  __int64 v92; // rdx
  int *v93; // r8
  _QWORD *v94; // r8
  char *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  char v98; // bl
  bool v99; // si
  __int64 v100; // rax
  int v101; // edx
  int v102; // r8d
  struct _UNICODE_STRING v103; // xmm0
  __int64 v104; // rcx
  int v105; // eax
  char v106; // al
  int v107; // r15d
  int v108; // r12d
  int v109; // ebx
  int v110; // edi
  int v111; // esi
  int v112; // r14d
  int v113; // r13d
  __int64 v114; // rax
  int v115; // r8d
  int v116; // edx
  int v117; // [rsp+28h] [rbp-110h]
  char v118; // [rsp+28h] [rbp-110h]
  int v119; // [rsp+30h] [rbp-108h]
  int v120; // [rsp+38h] [rbp-100h]
  __int16 v121; // [rsp+38h] [rbp-100h]
  int v122; // [rsp+40h] [rbp-F8h]
  char v123; // [rsp+A8h] [rbp-90h]
  char v124; // [rsp+B8h] [rbp-80h]
  char v125; // [rsp+B8h] [rbp-80h]
  char v126; // [rsp+B8h] [rbp-80h]
  bool v127; // [rsp+B9h] [rbp-7Fh]
  char v128; // [rsp+B9h] [rbp-7Fh]
  bool v129; // [rsp+BAh] [rbp-7Eh]
  bool v130; // [rsp+BAh] [rbp-7Eh]
  unsigned int v131; // [rsp+BCh] [rbp-7Ch]
  int v132; // [rsp+BCh] [rbp-7Ch]
  char v133; // [rsp+C0h] [rbp-78h]
  int v134; // [rsp+C0h] [rbp-78h]
  int v135; // [rsp+C0h] [rbp-78h]
  int v136; // [rsp+C4h] [rbp-74h]
  int v137; // [rsp+C4h] [rbp-74h]
  int v138; // [rsp+C8h] [rbp-70h]
  int v139; // [rsp+C8h] [rbp-70h]
  __int64 v140; // [rsp+D0h] [rbp-68h]
  int v141; // [rsp+D0h] [rbp-68h]
  int v142; // [rsp+D0h] [rbp-68h]
  __int64 v143; // [rsp+D8h] [rbp-60h]
  _DWORD *v144; // [rsp+D8h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-58h] BYREF
  int v146; // [rsp+F0h] [rbp-48h]
  __int64 v147; // [rsp+F8h] [rbp-40h]
  unsigned int v148; // [rsp+108h] [rbp-30h] BYREF
  _BYTE v149[1212]; // [rsp+10Ch] [rbp-2Ch] BYREF
  int v150; // [rsp+5C8h] [rbp+490h] BYREF
  char v151[324]; // [rsp+5CCh] [rbp+494h] BYREF
  WCHAR SourceString[32]; // [rsp+918h] [rbp+7E0h] BYREF

  v3 = *(_DWORD ***)(W32GetUserSessionState(a1, a2) + 56968);
  if ( **v3 <= 4u )
    v4 = ***(_DWORD ***)(W32GetUserSessionState(v3, v2) + 56968);
  else
    v4 = 4;
  v131 = v4;
  memset_0(v149, 0, 0x4B0uLL);
  v6 = WPP_GLOBAL_Control;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      15,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  v148 = 0;
  v13 = W32GetUserSessionState(v6, v5);
  v14 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 56968) + 104LL);
  while ( 1 )
  {
    v140 = v15;
    if ( !v15 )
      break;
    v16 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 24LL);
    if ( (v16 & 1) != 0 )
    {
      if ( (unsigned int)v14 >= v4 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v40 = 0;
        }
        v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v42 = *(int ***)(W32GetUserSessionState(WPP_GLOBAL_Control, v14) + 56968);
          v43 = **v42;
          v45 = W32GetUserSessionState(v42, v44);
          LOBYTE(v46) = v41;
          LOBYTE(v47) = v40;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v47,
            v46,
            *(_QWORD *)(v45 + 69152),
            2,
            7,
            16,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v43);
        }
        break;
      }
      v17 = 300LL * (unsigned int)v14;
      v143 = v17;
      *(_DWORD *)&v149[v17 + 280] = *(_DWORD *)v15;
      *(_DWORD *)&v149[v17 + 276] = v15 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v14) + 56968) + 96LL);
      *(_DWORD *)&v149[v17 + 16] = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 60LL);
      *(_OWORD *)&v149[v17] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 28LL);
      *(_OWORD *)&v149[v17 + 284] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 44LL);
      memset_0(v151, 0, 0x344uLL);
      v18 = *(_QWORD *)(v15 + 80);
      v150 = 840;
      DestinationString = 0LL;
      if ( !(unsigned int)DrvGetHdevName(v18, SourceString) )
        goto LABEL_134;
      RtlInitUnicodeString(&DestinationString, SourceString);
      v119 = 0;
      v117 = 1;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, &v150) < 0 )
        goto LABEL_134;
      v20 = &v149[v17 + 20];
      v19 = 128LL;
      do
      {
        if ( v19 == -2147483518 )
          break;
        v21 = *(_WORD *)((char *)v20 + 1496 - (v17 - 24));
        if ( !v21 )
          break;
        *v20++ = v21;
        --v19;
      }
      while ( v19 );
      v22 = v20 - 1;
      if ( v19 )
        v22 = v20;
      *v22 = 0;
      if ( !v19 )
      {
LABEL_134:
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v23 = 0;
        }
        v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v25 = *(_QWORD *)(v15 + 80);
          v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
          LOBYTE(v27) = v24;
          LOBYTE(v28) = v23;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v28,
            v27,
            *(_QWORD *)(v26 + 69152),
            2,
            7,
            17,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v25);
        }
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v124 = v29;
      v127 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v30 = *(_DWORD *)&v149[v17 + 16];
        v31 = *(_DWORD *)&v149[v17 + 296];
        v32 = *(_DWORD *)&v149[v17 + 292];
        v33 = *(_DWORD *)&v149[v17 + 288];
        v34 = *(_DWORD *)&v149[v17 + 284];
        v35 = *(_DWORD *)&v149[v17 + 12];
        v36 = *(_DWORD *)&v149[v17 + 8];
        v136 = *(_DWORD *)&v149[v143 + 4];
        v138 = *(_DWORD *)&v149[v143];
        v133 = v148;
        v37 = W32GetUserSessionState(v143, v19);
        LOBYTE(v38) = v127;
        LOBYTE(v39) = v124;
        WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 69152),
          v117,
          v119,
          v120,
          v122,
          v133,
          v138,
          v136,
          v36,
          v35,
          v34,
          v33,
          v32,
          v31,
          v30,
          (__int64)&v149[v143 + 20]);
        v15 = v140;
        v7 = 1;
      }
      v14 = (struct _SYNC_DISPLAY_CHANGE_DATA *)++v148;
    }
    v15 = *(_QWORD *)(v15 + 56);
    v4 = v131;
  }
  if ( CallShell::xxxDisplayChangedHandler((CallShell *)&v148, v14) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v54 = 0;
    }
    v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v54 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v48);
      LOBYTE(v57) = v55;
      LOBYTE(v58) = v54;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v58,
        v57,
        *(_QWORD *)(v56 + 69152),
        4,
        7,
        20,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
    }
    v59 = 0;
    v60 = 0LL;
    v132 = 0;
    v128 = 0;
    if ( !v148 )
      return v59;
    while ( 1 )
    {
      v61 = 300 * v60;
      v62 = &v149[300 * v60];
      v147 = 300 * v60;
      v144 = v62;
      v63 = ValidateHmonitorNoRip(*((unsigned int *)v62 + 70));
      *(_QWORD *)&DestinationString.Length = v63;
      v65 = v63;
      if ( v63 )
      {
        v72 = *(_QWORD *)(v63 + 40);
        v73 = *(_DWORD *)&v149[v61 + 16];
        v134 = *(unsigned __int16 *)(v72 + 60);
        if ( v134 == v73 )
        {
          v80 = *(_QWORD *)v62 - *(_QWORD *)(v72 + 28);
          if ( *(_QWORD *)v62 == *(_QWORD *)(v72 + 28) )
            v80 = *((_QWORD *)v62 + 1) - *(_QWORD *)(v72 + 36);
          if ( v80 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
              || (v106 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v106 = 0;
            }
            v126 = v106;
            v130 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v106 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v107 = *(_DWORD *)&v149[v61 + 12];
              v108 = *(_DWORD *)&v149[v61 + 8];
              v109 = *(_DWORD *)(v72 + 40);
              v110 = *(_DWORD *)(v72 + 36);
              v111 = *(_DWORD *)(v72 + 32);
              v112 = *(_DWORD *)(v72 + 28);
              v113 = *(_DWORD *)&v149[v61 + 4];
              v142 = *v144;
              *(_QWORD *)&DestinationString.Length = (unsigned int)v144[70];
              v114 = W32GetUserSessionState(v144, v72);
              LOBYTE(v115) = v130;
              LOBYTE(v116) = v126;
              WPP_RECORDER_AND_TRACE_SF_qdddddddd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v116,
                v115,
                *(_QWORD *)(v114 + 69152),
                v117,
                v119,
                v120,
                v122,
                DestinationString.Length,
                v142,
                v113,
                v108,
                v107,
                v112,
                v111,
                v110,
                v109);
            }
            goto LABEL_128;
          }
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v81 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v81 = 0;
          }
          v125 = v81;
          v129 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v81 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v82 = *((_DWORD *)v62 + 74);
            v83 = *((_DWORD *)v62 + 73);
            v84 = *(_DWORD *)&v149[v61 + 284];
            v85 = *((_DWORD *)v62 + 72);
            v86 = *(_DWORD *)(v72 + 56);
            v87 = *(_DWORD *)(v72 + 52);
            v88 = *(_DWORD *)(v72 + 48);
            v135 = *(_DWORD *)(v72 + 44);
            v139 = *(_DWORD *)&v149[v147 + 12];
            v137 = *(_DWORD *)&v149[v147 + 8];
            v146 = *(_DWORD *)&v149[v147 + 4];
            v141 = *v144;
            v89 = W32GetUserSessionState(v144, v72);
            LOBYTE(v90) = v129;
            LOBYTE(v91) = v125;
            v123 = v82;
            v65 = *(_QWORD *)&DestinationString.Length;
            WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v91,
              v90,
              *(_QWORD *)(v89 + 69152),
              4,
              7,
              24,
              (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
              DestinationString.Length,
              v141,
              v146,
              v137,
              v139,
              v135,
              v88,
              v87,
              v86,
              v84,
              v85,
              v83,
              v123);
            v62 = v144;
            v61 = v147;
          }
          DestinationString = 0LL;
          if ( IsRectEmptyInl((const struct tagRECT *)(v62 + 284))
            || !(unsigned int)IntersectRect(&DestinationString, (int *)v62, v93) )
          {
            goto LABEL_135;
          }
          v95 = (char *)(*(_QWORD *)&DestinationString.Length - *v94);
          if ( *(_QWORD *)&DestinationString.Length == *v94 )
            v95 = (char *)DestinationString.Buffer - v94[1];
          if ( v95 )
          {
LABEL_135:
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
              || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
            {
              v98 = 0;
            }
            v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v98 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              goto LABEL_128;
            v100 = W32GetUserSessionState(WPP_GLOBAL_Control, v92);
            v121 = 25;
            v118 = 2;
          }
          else
          {
            v96 = *(_QWORD *)(v65 + 40);
            v97 = *(_QWORD *)(v96 + 44) - *v94;
            if ( !v97 )
              v97 = *(_QWORD *)(v96 + 52) - v94[1];
            if ( v97 )
            {
              v103 = *(struct _UNICODE_STRING *)(v96 + 44);
              *(_DWORD *)(v96 + 44) = *(_DWORD *)v94;
              v104 = *(_QWORD *)(v65 + 40);
              v105 = *(_DWORD *)&v149[v61 + 288];
              DestinationString = v103;
              v128 = 1;
              *(_DWORD *)(v104 + 48) = v105;
              *(_DWORD *)(*(_QWORD *)(v65 + 40) + 52LL) = *(_DWORD *)&v149[v61 + 292];
              *(_DWORD *)(*(_QWORD *)(v65 + 40) + 56LL) = *(_DWORD *)&v149[v61 + 296];
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
                || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v98 = 0;
              }
              v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v98 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                goto LABEL_128;
              v100 = W32GetUserSessionState(WPP_GLOBAL_Control, v96);
              v121 = 27;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
                || (v98 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v98 = 0;
              }
              v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v98 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                goto LABEL_128;
              v100 = W32GetUserSessionState(WPP_GLOBAL_Control, v96);
              v121 = 26;
            }
            v118 = 4;
          }
          LOBYTE(v102) = v99;
          LOBYTE(v101) = v98;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v101,
            v102,
            *(_QWORD *)(v100 + 69152),
            v118,
            7,
            v121,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v74 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v74 = 0;
          }
          v75 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v74 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v76 = *((_DWORD *)v62 + 70);
            v77 = W32GetUserSessionState(WPP_GLOBAL_Control, v72);
            LOBYTE(v78) = v75;
            LOBYTE(v79) = v74;
            WPP_RECORDER_AND_TRACE_SF_qdd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v79,
              v78,
              *(_QWORD *)(v77 + 69152),
              3,
              7,
              22,
              (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
              v76,
              v73,
              v134);
          }
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v66 = 0;
        }
        v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v66 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v68 = *((_DWORD *)v62 + 70);
          v69 = W32GetUserSessionState(WPP_GLOBAL_Control, v64);
          LOBYTE(v70) = v67;
          LOBYTE(v71) = v66;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v71,
            v70,
            *(_QWORD *)(v69 + 69152),
            3,
            7,
            21,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v68);
        }
      }
LABEL_128:
      v60 = (unsigned int)(v132 + 1);
      v132 = v60;
      if ( (unsigned int)v60 >= v148 )
      {
        v59 = v128;
        if ( v128 )
        {
          CTopologyManager::UpdateCurrent();
          DwmNotifyWorkAreaChanged();
        }
        return v59;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v50 = W32GetUserSessionState(WPP_GLOBAL_Control, v48);
    LOBYTE(v51) = v49;
    LOBYTE(v52) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v52,
      v51,
      *(_QWORD *)(v50 + 69152),
      4,
      7,
      19,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  return 0;
}
