/*
 * XREFs of ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402EDDD0
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14025FC74 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z @ 0x1402DBA74 (-SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxVerticalMaximize(struct tagRECT *retstr, struct tagWND *a2)
{
  __int64 v3; // r8
  struct tagRECT *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v8; // xmm0
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // bl
  char v14; // di
  __int64 v15; // rax
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  const struct CMonitorTopology::MonitorData *v18; // rax
  struct tagRECT *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  char v22; // bl
  char v23; // si
  __int64 UserSessionState; // rax
  __m128i v25; // [rsp+68h] [rbp-A0h] BYREF
  __m128i BugCheckParameter3; // [rsp+78h] [rbp-90h] BYREF
  CMonitorTopology *v27[4]; // [rsp+88h] [rbp-80h] BYREF
  __m128i v28; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v29[46]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v30[40]; // [rsp+170h] [rbp+68h] BYREF

  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v29, 1);
    v3 = *(_QWORD *)&retstr[2].right;
    v29[0] |= 0x30u;
    v29[10] = 3;
    v4 = WindowMargins::ReduceRect((WindowMargins *)&BugCheckParameter3, retstr, (const struct tagWND *)(v3 + 88), 0LL);
    v5 = *(_QWORD *)(*(_QWORD *)&retstr[2].right + 256LL);
    v25 = *(__m128i *)v4;
    v6 = ValidateHmonitor(v5);
    MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&BugCheckParameter3, v6, (const struct tagWND *)retstr);
    v8 = _mm_srli_si128(*MonitorWorkRectForWindow, 8);
    v25.m128i_i32[1] = HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]);
    v25.m128i_i32[3] = v8.m128i_i32[1];
    AdvancedWindowPos::CWindowAction::SetFrameBounds(
      (AdvancedWindowPos::CWindowAction *)v29,
      (const struct tagRECT *)&v25);
    v29[0] |= 0x80u;
    AdvancedWindowPos::xxxApplyWindowAction((__int64)retstr, (__int64)v29, 5);
    CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v30);
  }
  else
  {
    v9 = *(_QWORD *)&retstr[2].right;
    v28 = *(__m128i *)(v9 + 88);
    v12 = MonitorFromRect(v28.m128i_i32, 0LL, *(_DWORD *)(v9 + 288));
    if ( v12 )
    {
      v16 = PtiCurrent(v11);
      Win32HM_LockIntoThread<1>((__int64)v16, v12, BugCheckParameter3.m128i_i64);
      CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
        (CThreadLockedCurrentMonitorTopologyPtr *)v27,
        v17);
      v25 = v28;
      v18 = CMonitorTopology::MonitorDataFromRect(v27[0], (const struct tagWND *)retstr, (struct tagRECT *)&v25);
      v28 = *anonymous_namespace_::xxxNormalizeRect_0(&v25, (const struct tagWND *)retstr, &v28, v12, (__int64)v18, 21);
      CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v27);
      Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(&BugCheckParameter3);
      v19 = WindowMargins::ReduceRect((WindowMargins *)&BugCheckParameter3, retstr, (const struct tagWND *)&v28, 0LL);
      v20 = *(_QWORD *)&retstr[2].right;
      v28 = *(__m128i *)v19;
      LogicalToPhysicalDPIRect(&v28, &v28, *(unsigned int *)(v20 + 288), 0LL);
      v22 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v23,
          *(_QWORD *)(UserSessionState + 69152),
          4u,
          4u,
          0x2Cu,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v28.m128i_i32[0],
          v28.m128i_i32[1],
          v28.m128i_i32[2],
          v28.m128i_i32[3]);
      }
      WindowArrangement::xxxSetSnapArrangementPos((__int64)retstr, v28.m128i_i32, 0, 0);
    }
    else
    {
      v13 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v14,
          *(_QWORD *)(v15 + 69152),
          3u,
          4u,
          0x2Bu,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v28.m128i_i32[0],
          v28.m128i_i32[1],
          v28.m128i_i32[2],
          v28.m128i_i32[3]);
      }
    }
  }
}
