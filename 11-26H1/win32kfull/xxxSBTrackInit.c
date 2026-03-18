/*
 * XREFs of xxxSBTrackInit @ 0x1402F8934
 * Callers:
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetScrollbarTypeString @ 0x14012905C (GetScrollbarTypeString.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     GetWndSBDisableFlags @ 0x14018F5C0 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x14025E018 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$UserFreeIsolatedType@UtagSBTRACK@@@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F33B0 (--$UserFreeIsolatedType@UtagSBTRACK@@@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402F352C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F36E4 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     GetScrollRequestCodeString @ 0x1402F5A28 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddd @ 0x1402F5C20 (WPP_RECORDER_AND_TRACE_SF_ddddddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddds @ 0x1402F64D8 (WPP_RECORDER_AND_TRACE_SF_qddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddds @ 0x1402F8020 (WPP_RECORDER_AND_TRACE_SF_sdddds.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall xxxSBTrackInit(struct tagWND *a1, int a2, int a3, unsigned int a4)
{
  int v4; // ebx
  __int64 *v6; // rsi
  struct MOVESIZEDATA *v8; // rcx
  char v9; // di
  char v10; // r12
  char v11; // r13
  __int64 v12; // rcx
  const char *v13; // r14
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r12
  bool v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rcx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r14
  __int64 v32; // rdx
  _BYTE *v33; // rbx
  char v34; // r12
  __int64 v35; // rbx
  __int64 v36; // rax
  __int128 *v37; // rdx
  __int128 *v38; // rcx
  unsigned __int64 v39; // rax
  int v40; // r8d
  struct MOVESIZEDATA *v41; // rcx
  char v42; // al
  __int64 v43; // rax
  char v44; // al
  char v45; // r12
  __int64 v46; // rax
  int v47; // edx
  int v48; // r8d
  char v49; // r12
  __int64 v50; // rbx
  __int64 v51; // r9
  __int128 *v52; // rcx
  int v53; // eax
  char v54; // al
  char v55; // r12
  __int64 v56; // rax
  int v57; // edx
  int v58; // r8d
  char v59; // r12
  __int64 v60; // rbx
  __int64 v61; // r9
  char v62; // al
  char v63; // r12
  __int64 v64; // rax
  int v65; // edx
  int v66; // r8d
  char v67; // al
  char v68; // r12
  __int64 v69; // rax
  int v70; // edx
  int v71; // r8d
  char v72; // al
  char v73; // r12
  __int64 v74; // rax
  int v75; // edx
  int v76; // r8d
  int v77; // eax
  int v78; // eax
  __int64 v79; // rcx
  struct tagTHREADINFO *v80; // rax
  struct tagWND *v81; // rdx
  char v82; // al
  unsigned int *v83; // rcx
  const char *ScrollbarTypeString; // rdi
  int v85; // esi
  int v86; // r14d
  int v87; // r15d
  int v88; // r12d
  const char *ScrollRequestCodeString; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  struct tagTHREADINFO *v93; // rax
  struct tagWND *v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  char v99; // r12
  __int64 v100; // rbx
  __int64 v101; // r9
  int v102; // [rsp+20h] [rbp-100h]
  int v103; // [rsp+28h] [rbp-F8h]
  int v104; // [rsp+30h] [rbp-F0h]
  int v105; // [rsp+38h] [rbp-E8h]
  __int64 v106; // [rsp+40h] [rbp-E0h]
  __int64 v107; // [rsp+48h] [rbp-D8h]
  char v108; // [rsp+A0h] [rbp-80h]
  char v109; // [rsp+A0h] [rbp-80h]
  char v110; // [rsp+A0h] [rbp-80h]
  char v111; // [rsp+A0h] [rbp-80h]
  char v112; // [rsp+A0h] [rbp-80h]
  char v113; // [rsp+A0h] [rbp-80h]
  char v114; // [rsp+A0h] [rbp-80h]
  int v116; // [rsp+A4h] [rbp-7Ch]
  char v117; // [rsp+A8h] [rbp-78h]
  char v118; // [rsp+A8h] [rbp-78h]
  char WndSBDisableFlags; // [rsp+ACh] [rbp-74h]
  __int128 *v120; // [rsp+B0h] [rbp-70h]
  _BYTE *v121; // [rsp+C0h] [rbp-60h] BYREF
  __int64 *v122; // [rsp+C8h] [rbp-58h]
  __int128 v123; // [rsp+D0h] [rbp-50h] BYREF
  unsigned int v124; // [rsp+E0h] [rbp-40h]
  __int64 v125[2]; // [rsp+F0h] [rbp-30h] BYREF
  struct tagWND *v126; // [rsp+100h] [rbp-20h]
  _BYTE v127[64]; // [rsp+110h] [rbp-10h] BYREF

  v4 = a3;
  v126 = a1;
  v124 = a4;
  v6 = (__int64 *)a1;
  memset_0(v127, 0, sizeof(v127));
  v123 = 0LL;
  v8 = WPP_GLOBAL_Control;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v10 = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = a4;
    if ( a4 )
    {
      v12 = a4 - 1;
      if ( a4 == 1 )
      {
        v13 = "SCROLL_DIRECT";
      }
      else if ( a4 == 2 )
      {
        v13 = "SCROLL_MENU";
      }
      else
      {
        v13 = "UNKNOWN";
      }
    }
    else
    {
      v13 = "SCROLL_NORMAL";
    }
    v14 = *v6;
    UserSessionState = W32GetUserSessionState(v12, 0LL);
    WPP_RECORDER_AND_TRACE_SF_qddds(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      v102,
      v103,
      v104,
      v105,
      v14,
      a2,
      SBYTE2(a2),
      a3,
      v13);
    v4 = a3;
  }
  v16 = PtiCurrent((__int64)v8);
  v17 = 2374;
  if ( (struct tagTHREADINFO *)v6[2] == v16 )
    v17 = 2376;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, v17);
  v19 = v6[2];
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 520), 0, 0) & 1) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2383);
    return;
  }
  v20 = *(_QWORD *)(v6[2] + 744);
  if ( v20 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v9 = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = *v6;
      v23 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v19);
      LOBYTE(v24) = v21;
      LOBYTE(v25) = v9;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69152),
        3,
        9,
        53,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v20,
        v22);
    }
    return;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v19) + 19832) + 32LL);
  if ( !v26 )
    return;
  v27 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate(v26);
  v28 = v27;
  if ( !v27 )
    return;
  *(_DWORD *)v27 &= ~1u;
  *(_QWORD *)(v27 + 64) = 0LL;
  *(_QWORD *)(v27 + 8) = 0LL;
  v125[0] = v27 + 8;
  *(_QWORD *)(v27 + 48) = xxxTrackBox;
  *(_QWORD *)(v27 + 16) = 0LL;
  *(_QWORD *)(v27 + 24) = 0LL;
  v125[1] = (__int64)v6;
  HMAssignmentLock(v125, 0LL);
  *(_QWORD *)(v6[2] + 744) = v28;
  v29 = v6[5];
  if ( (*(_BYTE *)(v29 + 26) & 0x40) != 0 )
    v30 = (unsigned __int16)(*(_WORD *)(v29 + 96) - a2);
  else
    v30 = (unsigned __int16)(a2 - *(_WORD *)(v29 + 88));
  v31 = ((unsigned __int16)(HIWORD(a2) - *(_WORD *)(v29 + 92)) << 16) | v30;
  v122 = v6;
  v125[0] = v31;
  v121 = (_BYTE *)(v28 + 24);
  HMAssignmentLock(&v121, 0LL);
  v121 = (_BYTE *)(v28 + 16);
  v122 = 0LL;
  HMAssignmentLock(&v121, 0LL);
  *(_DWORD *)v28 ^= (*(_DWORD *)v28 ^ (2 * v4)) & 2;
  WndSBDisableFlags = GetWndSBDisableFlags(v6, v4 & 1);
  *(_DWORD *)(v28 + 88) = v4 != 6;
  if ( (struct tagTHREADINFO *)v6[2] == PtiCurrent((unsigned int)(v4 - 6)) )
  {
    v33 = v127;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2445);
    v33 = &unk_1403AB290;
  }
  v121 = v33;
  *(_QWORD *)(v28 + 96) = v33;
  if ( (WndSBDisableFlags & 3) == 3 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v9 = 0;
    }
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = *v6;
      v36 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v32);
      LODWORD(v107) = SWORD1(v31);
      LODWORD(v106) = (__int16)v31;
      WPP_RECORDER_AND_TRACE_SF_ddq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v34,
        *(_QWORD *)(v36 + 69152),
        3u,
        9u,
        0x36u,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v106,
        v107,
        v35);
    }
    *(_QWORD *)(v6[2] + 744) = 0LL;
LABEL_161:
    HMAssignmentUnlock(v28 + 24);
    HMAssignmentUnlock(v28 + 16);
    HMAssignmentUnlock(v28 + 8);
    v98 = v28;
LABEL_162:
    UserFreeIsolatedType<tagSBTRACK>(v98, v97);
    return;
  }
  CalcSBStuff((const struct tagWND *)v6, (__int64)v33, (*(_DWORD *)v28 >> 1) & 1);
  v37 = (__int128 *)((char *)&v123 + 4);
  if ( (*(_DWORD *)v28 & 2) == 0 )
    v37 = &v123;
  v120 = v37;
  v38 = &v123;
  if ( (*(_DWORD *)v28 & 2) != 0 )
  {
    v39 = v31 >> 16;
  }
  else
  {
    v38 = (__int128 *)((char *)&v123 + 4);
    LOWORD(v39) = v31;
  }
  v40 = (__int16)v39;
  *(_DWORD *)v38 = *((_DWORD *)v33 + 6);
  *(_DWORD *)v37 = *((_DWORD *)v33 + 4);
  *((_DWORD *)v38 + 2) = *((_DWORD *)v33 + 7);
  *((_DWORD *)v37 + 2) = *((_DWORD *)v33 + 5);
  v116 = (__int16)v39;
  v41 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v42 = 0;
  }
  v108 = v42;
  v117 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v41) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v43 = W32GetUserSessionState(v41, &WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_ddddddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v108,
      v117,
      *(_QWORD *)(v43 + 69152),
      v102,
      v103,
      v104,
      v105);
    v33 = v121;
    v6 = (__int64 *)v126;
    LODWORD(v31) = v125[0];
    v9 = 1;
    v40 = v116;
  }
  *(_DWORD *)(v28 + 56) = -1;
  if ( v40 < *((_DWORD *)v33 + 9) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v44 = 0;
    }
    v109 = v44;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v45 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v45 = 0;
    }
    if ( v44 || v45 )
    {
      v46 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v47) = v109;
      LOBYTE(v48) = v45;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v47,
        v48,
        *(_QWORD *)(v46 + 69152),
        5,
        9,
        56,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v31,
        SBYTE2(v31));
    }
    if ( (WndSBDisableFlags & 1) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v9 = 0;
      }
      v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v50 = *v6;
        v51 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control) + 69152);
        LODWORD(v107) = SWORD1(v31);
        LODWORD(v106) = (__int16)v31;
        WPP_RECORDER_AND_TRACE_SF_ddq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v49,
          v51,
          3u,
          9u,
          0x39u,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v106,
          v107,
          v50);
      }
LABEL_160:
      *(_QWORD *)(v6[2] + 744) = 0LL;
      goto LABEL_161;
    }
    v52 = v120;
    *(_DWORD *)(v28 + 56) = 0;
    v53 = *((_DWORD *)v33 + 9);
LABEL_76:
    *((_DWORD *)v52 + 2) = v53;
    goto LABEL_135;
  }
  if ( v40 >= *((_DWORD *)v33 + 10) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v54 = 0;
    }
    v110 = v54;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v55 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v55 = 0;
    }
    if ( v54 || v55 )
    {
      v56 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v57) = v110;
      LOBYTE(v58) = v55;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v58,
        *(_QWORD *)(v56 + 69152),
        5,
        9,
        58,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v31,
        SBYTE2(v31));
    }
    if ( (WndSBDisableFlags & 2) == 0 )
    {
      *(_DWORD *)(v28 + 56) = 1;
      *(_DWORD *)v120 = *((_DWORD *)v33 + 10);
      goto LABEL_135;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v9 = 0;
    }
    v59 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v60 = *v6;
      v61 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control) + 69152);
      LODWORD(v107) = SWORD1(v31);
      LODWORD(v106) = (__int16)v31;
      WPP_RECORDER_AND_TRACE_SF_ddq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v59,
        v61,
        3u,
        9u,
        0x3Bu,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v106,
        v107,
        v60);
    }
    goto LABEL_160;
  }
  if ( v40 >= *((_DWORD *)v33 + 13) )
  {
    if ( v40 < *((_DWORD *)v33 + 12) )
      goto LABEL_121;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v67 = 0;
    }
    v112 = v67;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v68 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v68 = 0;
    }
    if ( v67 || v68 )
    {
      v69 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v70) = v112;
      LOBYTE(v71) = v68;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v70,
        v71,
        *(_QWORD *)(v69 + 69152),
        5,
        9,
        63,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v31,
        SBYTE2(v31));
    }
    v52 = v120;
    *(_DWORD *)(v28 + 56) = 3;
    *(_DWORD *)v120 = *((_DWORD *)v33 + 12);
    v53 = *((_DWORD *)v33 + 10);
    goto LABEL_76;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v62 = 0;
  }
  v111 = v62;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v63 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v63 = 0;
  }
  if ( v62 || v63 )
  {
    v64 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v65) = v111;
    LOBYTE(v66) = v63;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v65,
      v66,
      *(_QWORD *)(v64 + 69152),
      5,
      9,
      60,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v31,
      SBYTE2(v31));
  }
  *(_DWORD *)(v28 + 56) = 2;
  *(_DWORD *)v120 = *((_DWORD *)v33 + 9);
  *((_DWORD *)v120 + 2) = *((_DWORD *)v33 + 13);
  while ( 1 )
  {
LABEL_135:
    if ( v124 == 1 )
    {
      if ( *(_DWORD *)(v28 + 56) < 2u )
        goto LABEL_141;
    }
    else if ( v124 != 2 )
    {
      goto LABEL_141;
    }
    if ( *(_DWORD *)(v28 + 56) == 4 )
      break;
LABEL_121:
    if ( *((_DWORD *)v33 + 10) - *((_DWORD *)v33 + 9) <= *((_DWORD *)v33 + 8) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v9 = 0;
      }
      v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v100 = *v6;
        v101 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control) + 69152);
        LODWORD(v107) = SWORD1(v31);
        LODWORD(v106) = (__int16)v31;
        WPP_RECORDER_AND_TRACE_SF_ddq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v9,
          v99,
          v101,
          3u,
          9u,
          0x3Du,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v106,
          v107,
          v100);
      }
      goto LABEL_160;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v72 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v72 = 0;
    }
    v113 = v72;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v73 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v73 = 0;
    }
    if ( v72 || v73 )
    {
      v74 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v75) = v113;
      LOBYTE(v76) = v73;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v75,
        v76,
        *(_QWORD *)(v74 + 69152),
        5,
        9,
        62,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v31,
        SBYTE2(v31));
    }
    *(_DWORD *)(v28 + 56) = 4;
    CalcTrackDragRect((struct tagSBTRACK *)v28);
    *(_QWORD *)(v28 + 48) = xxxTrackThumb;
    v77 = *((_DWORD *)v33 + 13);
    *((_DWORD *)v33 + 11) = v77;
    *(_DWORD *)(v28 + 76) = v77;
    v78 = *((_DWORD *)v33 + 3);
    *(_DWORD *)(v28 + 80) = v78;
    *(_DWORD *)(v28 + 84) = v78;
    *(_DWORD *)(v28 + 72) = *((_DWORD *)v33 + 11) - v116;
    v80 = PtiCurrent(v79);
    xxxCapture(v80, (struct tagWND *)v6, 3);
    if ( v28 == *(_QWORD *)(v6[2] + 744) )
    {
      v81 = *(struct tagWND **)(v28 + 24);
      if ( !v81 )
        continue;
      xxxDoScroll(*(struct tagWND **)(v28 + 16), v81, 5u, *(unsigned int *)(v28 + 80), (*(_DWORD *)v28 >> 1) & 1);
      if ( v28 == *(_QWORD *)(v6[2] + 744) )
        continue;
    }
    return;
  }
  *(_DWORD *)(v28 + 72) = *((_DWORD *)v33 + 8) / -2;
LABEL_141:
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v82 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v82 = 0;
  }
  v83 = &WPP_RECORDER_INITIALIZED;
  v114 = v82;
  LOBYTE(v83) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v118 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v82 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ScrollbarTypeString = GetScrollbarTypeString(*(_DWORD *)(v28 + 88));
    v85 = *(_DWORD *)(v28 + 84);
    v86 = *(_DWORD *)(v28 + 80);
    v87 = *(_DWORD *)(v28 + 76);
    v88 = *(_DWORD *)(v28 + 72);
    ScrollRequestCodeString = GetScrollRequestCodeString(*(_DWORD *)(v28 + 56), (*(_DWORD *)v28 >> 1) & 1);
    v92 = W32GetUserSessionState(v91, v90);
    WPP_RECORDER_AND_TRACE_SF_sdddds(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v114,
      v118,
      *(_QWORD *)(v92 + 69152),
      v102,
      v103,
      v104,
      v105,
      ScrollRequestCodeString,
      v88,
      v87,
      v86,
      v85,
      (__int64)ScrollbarTypeString);
    v33 = v121;
  }
  v93 = PtiCurrent((__int64)v83);
  v94 = v126;
  xxxCapture(v93, v126, 3);
  if ( v28 == *(_QWORD *)(*((_QWORD *)v94 + 2) + 744LL) )
  {
    if ( *(_DWORD *)(v28 + 56) != 4 )
      *(_OWORD *)(v28 + 32) = v123;
    xxxSBTrackLoop(v94, v125[0], (struct tagSBCALC *)v33);
    v95 = *((_QWORD *)v94 + 2);
    v96 = *(_QWORD *)(v95 + 744);
    if ( v96 )
    {
      *(_QWORD *)(v95 + 744) = 0LL;
      HMAssignmentUnlock(v96 + 24);
      HMAssignmentUnlock(v96 + 16);
      HMAssignmentUnlock(v96 + 8);
      v98 = v96;
      goto LABEL_162;
    }
  }
}
