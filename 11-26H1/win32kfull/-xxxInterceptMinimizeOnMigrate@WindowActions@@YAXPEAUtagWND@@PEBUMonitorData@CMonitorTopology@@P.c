/*
 * XREFs of ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402E5C74
 * Callers:
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402876C4 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::TestFeature @ 0x1401644A0 (_anonymous_namespace_--TestFeature.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x14028F9F4 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402E373C (-SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402E3844 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptMinimizeOnMigrate(
        WindowActions *this,
        struct tagWND *a2,
        const struct CMonitorTopology::MonitorData *a3,
        unsigned int *a4)
{
  char v7; // si
  bool v8; // r14
  bool v9; // di
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  struct MOVESIZEDATA *v15; // rcx
  bool v16; // di
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  const struct tagMONITOR *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagTHREADINFO *v25; // rax
  unsigned __int16 v26; // bx
  struct tagRECT v27; // xmm6
  __int64 *v28; // rax
  int v29; // eax
  __int128 v30; // xmm0
  char v31; // r14
  __int64 v32; // rax
  __int64 v33; // [rsp+48h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v35; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+98h] [rbp-70h] BYREF
  int v37; // [rsp+9Ch] [rbp-6Ch]
  int v38; // [rsp+C0h] [rbp-48h]
  __int128 v39; // [rsp+D4h] [rbp-34h]
  struct tagRECT v40; // [rsp+F8h] [rbp-10h] BYREF

  v7 = 1;
  v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v9 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v8 || v9 )
  {
    v10 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      86,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v10);
  }
  memset_0(&v36, 0, 0x60uLL);
  SetDisplayChange((struct _WINDOW_ACTION *)&v36);
  v36 |= 0x20u;
  v38 = 2;
  v15 = WPP_GLOBAL_Control;
  v16 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v17 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v16 || v17 )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 69152),
      5,
      4,
      87,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
  }
  v21 = *(const struct tagMONITOR **)(GetDispInfo(v15, v14) + 96);
  if ( anonymous_namespace_::TestFeature(1LL, v22) && IsArranged(this) )
  {
    v25 = PtiCurrent(v24);
    Win32HM_LockIntoThread<0>((__int64)v25, (__int64)v21, BugCheckParameter3);
    v26 = *((_WORD *)a2 + 20);
    v27 = *(struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
    v28 = (__int64 *)CMonitorTopology::MonitorData::LogicalWorkArea(a2, &v40, this);
    v35 = v27;
    if ( !xxxUpdateActionForArrangeMigrate(
            (struct tagRECT *)this,
            (__int64)v21,
            v28,
            (__int64 *)a2 + 3,
            v26,
            2u,
            &v35,
            (unsigned int *)a3,
            &v36) )
    {
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
      return;
    }
    Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
  }
  v29 = v36;
  if ( (v36 & 6) == 0 )
  {
    SetMonitorMovePoint((struct _WINDOW_ACTION *)&v36, v21);
    v29 = v36;
  }
  v30 = *(_OWORD *)((char *)a2 + 24);
  v37 |= 0x100u;
  v36 = v29 | 0x100;
  v39 = v30;
  v31 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( v31 || v7 )
  {
    v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
    LODWORD(v33) = v39;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v7,
      *(_QWORD *)(v32 + 69152),
      5u,
      4u,
      0x58u,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v33,
      DWORD1(v39),
      DWORD2(v39),
      HIDWORD(v39),
      DWORD2(v39) - (_DWORD)v39,
      HIDWORD(v39) - DWORD1(v39));
  }
  xxxSendMessage(this, 0x346u);
}
