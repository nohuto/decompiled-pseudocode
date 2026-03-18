/*
 * XREFs of ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x14022BF44
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x14022C618 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x140294F74 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402E26CC (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402E373C (-SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402E3844 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall WindowActions::xxxInterceptRestoreToPosAndState(
        struct tagWND *a1,
        const struct tagMONITOR *a2,
        CMonitorTopology::MonitorData *a3,
        unsigned int a4,
        __int128 *a5,
        __int32 *a6,
        char a7,
        __int64 a8)
{
  CMonitorTopology::MonitorData *v8; // rbx
  unsigned int v9; // edi
  char v10; // si
  char v11; // r15
  char v12; // r14
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int16 v17; // bx
  struct tagRECT *v18; // rax
  __int64 result; // rax
  char v20; // r14
  char v21; // di
  __int64 WindowActionStateString; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int128 v28; // xmm0
  char v29; // r15
  char v30; // r14
  __int64 v31; // rax
  const struct tagMONITOR *v32; // rax
  CMonitorTopology::MonitorData *v33; // r13
  __int64 v34; // rcx
  struct MOVESIZEDATA *v35; // rdx
  char v36; // r15
  char v37; // r14
  __int64 v38; // rax
  int v39; // eax
  char v40; // bl
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  bool v44; // di
  char v45; // bl
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int128 v49; // xmm0
  char v50; // r15
  char v51; // r14
  __int64 v52; // rax
  int v53; // [rsp+20h] [rbp-E0h]
  __int64 v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h]
  unsigned int v61; // [rsp+78h] [rbp-88h] BYREF
  CMonitorTopology::MonitorData *v62; // [rsp+80h] [rbp-80h]
  struct tagWND *v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  __int128 v65; // [rsp+A0h] [rbp-60h] BYREF
  int v66; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v67; // [rsp+B4h] [rbp-4Ch]
  unsigned int v68; // [rsp+D8h] [rbp-28h]
  __int128 v69; // [rsp+DCh] [rbp-24h]
  __int128 v70; // [rsp+ECh] [rbp-14h]
  int v71; // [rsp+FCh] [rbp-4h]
  struct tagRECT v72; // [rsp+110h] [rbp+10h] BYREF

  v8 = a3;
  v9 = a4;
  v62 = a3;
  v64 = a8;
  v63 = a1;
  v61 = a4;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v11 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
  {
    v13 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a1);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      74,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v13);
    v8 = v62;
  }
  memset_0(&v66, 0, 0x60uLL);
  if ( v9 == 3 )
  {
    v17 = *((_WORD *)v8 + 20);
    v18 = CMonitorTopology::MonitorData::LogicalWorkArea(v62, &v72, v63);
    LOWORD(v53) = v17;
    v65 = *a5;
    result = xxxMigrateArrangedRect(v63, a2, v18, (char *)v62 + 24, v53, 0, &v65, &v61, v64, &v66);
    if ( !(_BYTE)result )
      return result;
    v9 = v61;
    if ( !v61 )
      *a5 = *(_OWORD *)a6;
  }
  v66 |= 0x20u;
  v68 = MaxStateFromAwpState(v9);
  SetDisplayChange((struct _WINDOW_ACTION *)&v66);
  if ( !v68 )
  {
    v44 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v45 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v45 = 0;
    }
    if ( v44 || v45 )
    {
      v46 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 69152),
        5,
        4,
        75,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
    }
    v49 = *a5;
    v66 |= 0x40u;
    v69 = v49;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v50 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v51 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v51 = 0;
    }
    if ( v50 || v51 )
    {
      v52 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LODWORD(v55) = DWORD1(v69);
      LODWORD(v54) = v69;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v50,
        v51,
        *(_QWORD *)(v52 + 69152),
        5u,
        4u,
        0x4Cu,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v54,
        v55,
        DWORD2(v69),
        HIDWORD(v69),
        DWORD2(v69) - (_DWORD)v69,
        HIDWORD(v69) - DWORD1(v69));
    }
    goto LABEL_42;
  }
  if ( v68 != 1 && v68 != 3 )
    goto LABEL_42;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v20 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v21 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v21 = 0;
  }
  if ( v20 || v21 )
  {
    WindowActionStateString = GetWindowActionStateString(v68);
    v25 = W32GetUserSessionState(v24, v23);
    LOBYTE(v26) = v21;
    LOBYTE(v27) = v20;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v26,
      *(_QWORD *)(v25 + 69152),
      5,
      4,
      77,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      WindowActionStateString);
  }
  if ( (a7 & 8) != 0 )
  {
    v28 = *(_OWORD *)a6;
    v66 |= 0x40u;
    v69 = v28;
    v29 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v30 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v30 = 0;
    }
    if ( v29 || v30 )
    {
      v31 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LODWORD(v55) = DWORD1(v69);
      LODWORD(v54) = v69;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v30,
        *(_QWORD *)(v31 + 69152),
        5u,
        4u,
        0x4Eu,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v54,
        v55,
        DWORD2(v69),
        HIDWORD(v69),
        DWORD2(v69) - (_DWORD)v69,
        HIDWORD(v69) - DWORD1(v69));
    }
    goto LABEL_42;
  }
  if ( (a7 & 4) == 0 )
  {
LABEL_42:
    v32 = a2;
    goto LABEL_43;
  }
  v32 = (const struct tagMONITOR *)MonitorFromRect(a6, 2LL, 0x12u);
LABEL_43:
  if ( v68 <= 1 )
    SetMonitorMovePoint((struct _WINDOW_ACTION *)&v66, v32);
  v34 = v67;
  v33 = v62;
  LODWORD(v34) = v67 | 0x100;
  v67 |= 0x100u;
  v70 = *(_OWORD *)((char *)v62 + 24);
  v35 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v36 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v37 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v37 = 0;
  }
  if ( v36 || v37 )
  {
    v38 = W32GetUserSessionState(v34, WPP_GLOBAL_Control);
    LODWORD(v59) = HIDWORD(v70) - DWORD1(v70);
    LODWORD(v58) = DWORD2(v70) - v70;
    LODWORD(v57) = HIDWORD(v70);
    LODWORD(v56) = DWORD2(v70);
    LODWORD(v55) = DWORD1(v70);
    LODWORD(v54) = v70;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v36,
      v37,
      *(_QWORD *)(v38 + 69152),
      5u,
      4u,
      0x4Fu,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    LODWORD(v34) = v67;
  }
  v39 = *((unsigned __int16 *)v33 + 20);
  v67 = v34 | 0x200;
  v71 = v39;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v40 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v10 = 0;
  if ( v40 || v10 )
  {
    v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
    LOBYTE(v42) = v10;
    LOBYTE(v43) = v40;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v43,
      v42,
      *(_QWORD *)(v41 + 69152),
      5,
      4,
      80,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v71);
  }
  v66 |= 0x100u;
  return xxxSendMessage(v63, 0x346u);
}
