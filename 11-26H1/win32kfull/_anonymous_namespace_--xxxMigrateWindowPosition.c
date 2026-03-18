/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x140163D1C (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 *     _anonymous_namespace_::TestFeature @ 0x1401644A0 (_anonymous_namespace_--TestFeature.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1401D65B4 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ssdddddd @ 0x14020C704 (WPP_RECORDER_AND_TRACE_SF_ssdddddd.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14022CAD4 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402E78AC (_anonymous_namespace_--GetArrangedOptions.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall anonymous_namespace_::xxxMigrateWindowPosition(
        struct tagWND *a1,
        __int64 a2,
        CMonitorTopology *a3,
        struct tagRECT *a4,
        unsigned int a5,
        unsigned int a6,
        __m128i *a7)
{
  __m128i *v7; // r12
  struct tagRECT v10; // xmm1
  char v11; // si
  char v12; // di
  __int64 UserSessionState; // rax
  const struct CMonitorTopology::MonitorData *v14; // rax
  __int64 v15; // rdx
  CMonitorTopology::MonitorData *v16; // r14
  char v17; // bl
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rsi
  char v21; // si
  char v22; // r12
  __int64 v23; // rax
  char v24; // si
  char v25; // bl
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  struct MOVESIZEDATA *v29; // rcx
  char v30; // si
  bool v31; // r14
  const char *StateString; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rax
  __int64 Prop; // rax
  __int64 v40; // rdx
  char v41; // r14
  char v42; // si
  __int64 v43; // rax
  const struct CMonitorTopology::MonitorData *v44; // rax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v45; // r8
  __m128i v46; // xmm0
  __int64 v47; // r8
  char v48; // si
  char v49; // di
  __int64 v50; // rax
  char v51; // r12
  _DWORD *v52; // rax
  int v53; // r15d
  int v54; // esi
  int v55; // r14d
  int v56; // edi
  int WindowState; // eax
  const char *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  const char *v62; // r10
  int v63; // edx
  int v64; // r8d
  int v66; // [rsp+20h] [rbp-E0h]
  struct tagRECT *v67; // [rsp+28h] [rbp-D8h]
  int v68[2]; // [rsp+30h] [rbp-D0h]
  struct tagRECT *v69; // [rsp+38h] [rbp-C8h]
  int *v70; // [rsp+40h] [rbp-C0h]
  unsigned int *v71; // [rsp+48h] [rbp-B8h]
  char v72; // [rsp+80h] [rbp-80h]
  bool v73; // [rsp+81h] [rbp-7Fh]
  int v74; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v75; // [rsp+88h] [rbp-78h]
  int v76; // [rsp+90h] [rbp-70h]
  __m128i *v77; // [rsp+98h] [rbp-68h]
  struct tagRECT v78; // [rsp+A0h] [rbp-60h] BYREF
  CMonitorTopology *v79; // [rsp+B0h] [rbp-50h]
  __m128i v80; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v81; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v82[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v83; // [rsp+100h] [rbp+0h]
  struct tagRECT v84; // [rsp+110h] [rbp+10h] BYREF

  v7 = a7;
  v79 = a3;
  v75 = a2;
  v77 = a7;
  if ( !a4 )
    a4 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v10 = *a4;
  v80 = *(__m128i *)a4;
  if ( a7 )
    *a7 = 0LL;
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
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      5u,
      4u,
      0x22u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    v10 = (struct tagRECT)v80;
  }
  v81 = v10;
  v14 = CMonitorTopology::MonitorDataFromRect(a3, a1, &v81);
  v16 = v14;
  if ( !v14 )
    return (char)v14;
  v72 = 0;
  v76 = 524308;
  v17 = 0;
  LOBYTE(v18) = 1;
  if ( !(unsigned __int8)anonymous_namespace_::TestFeature(1LL, v15) || !IsArranged(a1) )
    goto LABEL_28;
  v74 = 0;
  v72 = 1;
  v81 = 0LL;
  CMonitorTopology::MonitorData::LogicalWorkArea(v16, &v84, a1);
  v71 = &a6;
  v78 = (struct tagRECT)v80;
  v70 = &v74;
  v69 = &v81;
  v20 = v75;
  *(_QWORD *)v68 = v75;
  v67 = &v78;
  LOWORD(v66) = *((_WORD *)v16 + 20);
  if ( (unsigned __int8)CallShell::xxxMigrateWindowHandler(a1, ((a5 >> 1) & 1) == 0, (char *)v16 + 24, &v84) )
  {
    if ( v74 != 3 )
    {
      v29 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v30 = 0;
      }
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        StateString = AdvancedWindowPos::GetStateString(v74);
        v35 = W32GetUserSessionState(v34, v33);
        LOBYTE(v36) = v31;
        LOBYTE(v37) = v30;
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v37,
          v36,
          *(_QWORD *)(v35 + 69152),
          4,
          4,
          36,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          (__int64)StateString);
      }
      v38 = W32GetUserSessionState(v29, v19);
      Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v38 + 41374), 1u);
      if ( Prop )
      {
        v80 = *(__m128i *)(Prop + 20);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v41 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v42 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v42 = 0;
        }
        if ( v41 || v42 )
        {
          v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
          LODWORD(v71) = v80.m128i_i32[1];
          LODWORD(v70) = v80.m128i_i32[0];
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v41,
            v42,
            *(_QWORD *)(v43 + 69152),
            5u,
            4u,
            0x25u,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v70,
            v71,
            v80.m128i_i32[2],
            v80.m128i_i32[3],
            v80.m128i_i32[2] - v80.m128i_i32[0],
            v80.m128i_i32[3] - v80.m128i_i32[1]);
        }
      }
      v78 = (struct tagRECT)v80;
      v44 = CMonitorTopology::MonitorDataFromRect(v79, a1, &v78);
      if ( v44 )
      {
        v46 = *anonymous_namespace_::xxxNormalizeRect_0((__m128i *)&v78, a1, &v80, v75, (__int64)v44, 1);
        v80 = v46;
      }
      else
      {
        v46 = v80;
      }
      DWORD2(v82[0]) = v74;
      *(_QWORD *)&v82[0] = 0LL;
      HIDWORD(v82[0]) = ((a5 & 4) << 7) | 0x5F;
      v82[1] = v46;
      LODWORD(v83) = a6;
      AdvancedWindowPos::xxxApplyWindowPos(a1, (struct tagWND *)v82, v45);
      v47 = 2LL;
      goto LABEL_90;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v22,
        *(_QWORD *)(v23 + 69152),
        4u,
        4u,
        0x23u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    v17 = 1;
    v7 = v77;
    v80 = (__m128i)v81;
    v76 = 13107220;
LABEL_28:
    v20 = v75;
    goto LABEL_29;
  }
  v18 = anonymous_namespace_::GetArrangedOptions((struct tagWND *)&v80, a1, v16) | 1;
LABEL_29:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v24 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v25 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v25 = 0;
    }
    if ( v24 || v25 )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 69152),
        5,
        4,
        38,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    *(_QWORD *)&v82[0] = v75;
    memset((char *)v82 + 8, 0, 21);
    v83 = 0LL;
    anonymous_namespace_::xxxAwpMinMaximizeEx(a1, 3LL, ((a5 & 4) << 14) | 0x56, v82, v66, v67, *(_QWORD *)v68, v69);
  }
  else
  {
    if ( !v17 )
      v80 = *anonymous_namespace_::xxxNormalizeRect_0((__m128i *)&v84, a1, &v80, v20, (__int64)v16, v18);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v48 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v49 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v49 = 0;
    }
    if ( v48 || v49 )
    {
      v50 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v49,
        *(_QWORD *)(v50 + 69152),
        5u,
        4u,
        0x27u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( v7 )
      *v7 = v80;
    else
      xxxSetWindowPos(
        a1,
        0LL,
        v80.m128i_u32[0],
        v80.m128i_u32[1],
        v80.m128i_i32[2] - v80.m128i_i32[0],
        v80.m128i_i32[3] - v80.m128i_i32[1],
        v76);
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v51 = 0;
  }
  LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v51 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v52 = (_DWORD *)*((_QWORD *)a1 + 5);
    v53 = v52[23];
    v54 = v52[25];
    v55 = v52[22];
    v56 = v52[24];
    WindowState = AdvancedWindowPos::GetWindowState(a1);
    v58 = AdvancedWindowPos::GetStateString(WindowState);
    v61 = W32GetUserSessionState(v60, v59);
    v62 = "Migration rect";
    v64 = v54 - v53;
    LOBYTE(v63) = v51;
    LOBYTE(v64) = v73;
    if ( !v77 )
      v62 = "Final window state";
    LOBYTE(v14) = WPP_RECORDER_AND_TRACE_SF_ssdddddd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v63,
                    v64,
                    *(_QWORD *)(v61 + 69152),
                    v66,
                    (_DWORD)v67,
                    v68[0],
                    (_DWORD)v69,
                    (__int64)v62,
                    (__int64)v58,
                    v55,
                    v53,
                    v56,
                    v54,
                    (unsigned __int8)v56 - (unsigned __int8)v55,
                    (unsigned __int8)v54 - (unsigned __int8)v53);
  }
  if ( v72 )
  {
    v47 = 1LL;
LABEL_90:
    LOBYTE(v14) = NotifyShell::ArrangementCompleted(a1, a6, v47);
  }
  return (char)v14;
}
