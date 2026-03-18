/*
 * XREFs of ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402627D4
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x1401631E0 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::TestFeature @ 0x1401644A0 (_anonymous_namespace_--TestFeature.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140244500 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x14028F9F4 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x140294F74 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402E26CC (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402E373C (-SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402E3844 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     ?SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402E392C (-SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned int *__fastcall WindowActions::xxxInterceptMigrateWindow(
        struct tagWND *a1,
        const struct tagMONITOR *a2,
        CMonitorTopology *a3,
        struct tagRECT *a4,
        CMonitorTopology *a5,
        char a6,
        __int64 a7)
{
  struct tagRECT *v7; // rsi
  char v10; // r15
  char v11; // r14
  char v12; // di
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  char valid; // di
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 Prop; // rax
  __int64 v22; // rbx
  struct tagRECT v23; // xmm0
  __int64 v24; // rdx
  const struct CMonitorTopology::MonitorData *v25; // r13
  unsigned int *result; // rax
  bool v27; // di
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  struct MOVESIZEDATA *v33; // rdx
  __int64 v34; // rax
  struct tagRECT v35; // xmm6
  int v36; // edi
  __int16 v37; // bx
  struct tagRECT *v38; // rax
  const struct tagMONITOR *v39; // rbx
  struct tagRECT v40; // xmm0
  unsigned int WindowState; // eax
  unsigned int v42; // eax
  unsigned __int64 top; // rdx
  char v44; // si
  char v45; // di
  __int64 WindowActionStateString; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  char v52; // al
  char v53; // r13
  LONG v54; // r14d
  LONG bottom; // edi
  LONG v56; // esi
  LONG v57; // ebx
  __int64 v58; // rax
  const char *v59; // r10
  LONG left; // ecx
  LONG right; // eax
  int v62; // eax
  const struct CMonitorTopology::MonitorData *v63; // rax
  __int64 v64; // rcx
  char v65; // di
  char v66; // bl
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  char v70; // di
  __int64 v71; // rax
  int v72; // [rsp+20h] [rbp-E0h]
  __int64 v73; // [rsp+40h] [rbp-C0h]
  __int64 v74; // [rsp+48h] [rbp-B8h]
  __int64 v75; // [rsp+50h] [rbp-B0h]
  __int64 v76; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  __int64 v78; // [rsp+68h] [rbp-98h]
  char v79; // [rsp+80h] [rbp-80h]
  char v80; // [rsp+81h] [rbp-7Fh]
  struct tagRECT v83; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-50h]
  CMonitorTopology *v85; // [rsp+B8h] [rbp-48h]
  int v86; // [rsp+C0h] [rbp-40h] BYREF
  int v87; // [rsp+C4h] [rbp-3Ch]
  LONG v88; // [rsp+CCh] [rbp-34h]
  int v89; // [rsp+D0h] [rbp-30h]
  int v90; // [rsp+D4h] [rbp-2Ch]
  int v91; // [rsp+D8h] [rbp-28h]
  unsigned int v92; // [rsp+E8h] [rbp-18h]
  struct tagRECT v93; // [rsp+ECh] [rbp-14h]
  __int128 v94; // [rsp+FCh] [rbp-4h]
  int v95; // [rsp+10Ch] [rbp+Ch]
  struct tagRECT v96; // [rsp+120h] [rbp+20h] BYREF

  v7 = a4;
  v85 = a5;
  v84 = a7;
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
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      68,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v13);
  }
  valid = HasValidCheckpointPosition(a1);
  v79 = valid;
  v20 = W32GetUserSessionState(v19, v18);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v20 + 41374), 1u);
  v22 = Prop;
  if ( Prop && valid )
    v23 = *(struct tagRECT *)(Prop + 20);
  else
    v23 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v83 = v23;
  v25 = CMonitorTopology::MonitorDataFromRect(a3, a1, &v83);
  if ( v25 )
  {
    memset_0(&v86, 0, 0x60uLL);
    if ( anonymous_namespace_::TestFeature(1LL, v32) && (IsArranged(a1) || v22 && (*(_DWORD *)(v22 + 16) & 8) != 0) )
    {
      v34 = *((_QWORD *)a1 + 5);
      v35 = *(struct tagRECT *)(v34 + 88);
      if ( (*(_BYTE *)(v34 + 31) & 0x20) != 0 )
      {
        v35 = *(struct tagRECT *)(v22 + 36);
        v36 = 2;
      }
      else
      {
        v36 = ((unsigned __int8)~a6 >> 1) & 1;
      }
      v37 = *((_WORD *)v25 + 20);
      v38 = CMonitorTopology::MonitorData::LogicalWorkArea(v25, &v96, a1);
      v83 = v35;
      LOWORD(v72) = v37;
      v39 = a2;
      result = (unsigned int *)xxxUpdateActionForArrangeMigrate(
                                 a1,
                                 a2,
                                 v38,
                                 (char *)v25 + 24,
                                 v72,
                                 v36,
                                 &v83,
                                 v84,
                                 &v86);
      if ( !(_BYTE)result )
        return result;
      valid = v79;
    }
    else
    {
      v39 = a2;
    }
    if ( (a6 & 2) != 0 )
    {
      SetDisplayChange((struct _WINDOW_ACTION *)&v86);
      if ( (a6 & 8) != 0 )
        CInterceptWindowProp::SetPendingWorkAreaMove(a1);
    }
    if ( (v87 & 0x80u) == 0 && v92 != 3 )
      SetMonitorMovePoint((struct _WINDOW_ACTION *)&v86, v39);
    if ( v7 )
    {
      if ( valid )
      {
        v40 = *v7;
        v86 |= 0x60u;
        v93 = v40;
        WindowState = AdvancedWindowPos::GetWindowState(a1);
        v42 = MaxStateFromAwpState(WindowState);
        v92 = v42;
        top = (unsigned __int64)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v44 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v45 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v45 = 0;
        }
        if ( v44 || v45 )
        {
          WindowActionStateString = GetWindowActionStateString(v42);
          v49 = W32GetUserSessionState(v48, v47);
          LOBYTE(v50) = v45;
          LOBYTE(v51) = v44;
          WPP_RECORDER_AND_TRACE_SF_s(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v51,
            v50,
            *(_QWORD *)(v49 + 69152),
            5,
            4,
            70,
            (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
            WindowActionStateString);
        }
        v7 = a4;
      }
      else
      {
        left = v7->left;
        top = (unsigned int)v7->top;
        right = v7->right;
        v86 |= 6u;
        v90 = right - left;
        v62 = v7->bottom - top;
        v88 = left;
        v91 = v62;
        v89 = top;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v52 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v52 = 0;
      }
      v80 = v52;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v53 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v53 = 0;
      }
      if ( v52 || v53 )
      {
        v54 = v7->top;
        bottom = v7->bottom;
        v56 = v7->left;
        v57 = a4->right;
        v58 = W32GetUserSessionState(WPP_GLOBAL_Control, top);
        v59 = "WAK_NORMAL_RECT";
        if ( !v79 )
          v59 = "WAK_SIZE | WAK_POSITION";
        WPP_RECORDER_AND_TRACE_SF_sdddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v80,
          v53,
          *(_QWORD *)(v58 + 69152),
          5u,
          4u,
          0x47u,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v59,
          v56,
          v54,
          v57,
          bottom,
          v57 - v56,
          bottom - v54);
      }
      v83 = *a4;
      v63 = CMonitorTopology::MonitorDataFromRect(v85, a1, &v83);
      v87 |= 0x200u;
      v25 = v63;
      v64 = *((unsigned __int16 *)v63 + 20);
      v95 = *((unsigned __int16 *)v63 + 20);
      v33 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (v64 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v64 & 8) == 0)
        || (v65 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v65 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v66 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v66 = 0;
      }
      if ( v65 || v66 )
      {
        v67 = W32GetUserSessionState(v64, WPP_GLOBAL_Control);
        LOBYTE(v68) = v66;
        LOBYTE(v69) = v65;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v69,
          v68,
          *(_QWORD *)(v67 + 69152),
          5,
          4,
          72,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v95);
      }
    }
    v87 |= 0x100u;
    v94 = *(_OWORD *)((char *)v25 + 24);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v70 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v10 = 0;
    }
    if ( v70 || v10 )
    {
      v71 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
      LODWORD(v78) = HIDWORD(v94) - DWORD1(v94);
      LODWORD(v77) = DWORD2(v94) - v94;
      LODWORD(v76) = HIDWORD(v94);
      LODWORD(v75) = DWORD2(v94);
      LODWORD(v74) = DWORD1(v94);
      LODWORD(v73) = v94;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v70,
        v10,
        *(_QWORD *)(v71 + 69152),
        5u,
        4u,
        0x49u,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    v86 |= 0x100u;
    return (unsigned int *)xxxSendMessage(a1, 0x346u);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v10 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = *(_QWORD *)a1;
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
      LOBYTE(v30) = v27;
      LOBYTE(v31) = v10;
      return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                               *((_QWORD *)WPP_GLOBAL_Control + 3),
                               v31,
                               v30,
                               *(_QWORD *)(v29 + 69152),
                               3,
                               4,
                               69,
                               (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
                               v28);
    }
  }
  return result;
}
