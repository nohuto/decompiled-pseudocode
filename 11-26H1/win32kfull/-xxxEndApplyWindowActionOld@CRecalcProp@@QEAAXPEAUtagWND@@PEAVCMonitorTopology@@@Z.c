/*
 * XREFs of ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF288
 * Callers:
 *     ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF624 (-xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14011D2A8 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14016062C (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x14023DE70 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x140263754 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402DD620 (-ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ.c)
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402DDBE0 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 */

void __fastcall CRecalcProp::xxxEndApplyWindowActionOld(
        CRecalcProp *this,
        struct tagWND *a2,
        struct CMonitorTopology *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  int v10; // r8d
  struct CRecalcState *v11; // rax
  __int64 v12; // rdx
  bool v13; // di
  bool v14; // bl
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rdx
  bool v19; // di
  bool v20; // bp
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  struct CRecalcState *v25; // rax
  __int64 v26; // rdx
  bool v27; // di
  bool v28; // bp
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool v33; // di
  bool v34; // bp
  __int64 v35; // rbx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // [rsp+60h] [rbp+8h] BYREF

  if ( (*((_DWORD *)a2 + 95) & 0x10) != 0 )
    CRecalcProp::PostMessagesForRecalcDisabledWindows(this, a2, a3);
  *(_QWORD *)(*((_QWORD *)this + 4) + 8LL) = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  CRecalcProp::SetLastMoveRect(this);
  UserSessionState = W32GetUserSessionState(v7, v6);
  v9 = *((_QWORD *)this + 6);
  v10 = *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 7500LL);
  if ( !v9 || *(_DWORD *)(v9 + 12) == v10 )
  {
    if ( (*((_DWORD *)a2 + 95) & 0x10) == 0 || *((_DWORD *)a3 + 3) == v10 )
    {
      v33 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v35 = *(_QWORD *)a2;
        v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        LOBYTE(v37) = v34;
        LOBYTE(v38) = v33;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69152),
          4,
          7,
          105,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v35);
      }
      *((_DWORD *)this + 6) = 0;
    }
    else
    {
      v39 = 0;
      v25 = CRecalcState::CreateRecalcState((__int64)a2, (__int64)a3, 4u, &v39);
      if ( v25 )
        CRecalcProp::AddPendingRecalcWork(this, v25);
      v27 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = *(_QWORD *)a2;
        v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
        LOBYTE(v31) = v28;
        LOBYTE(v32) = v27;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(v30 + 69152),
          4,
          7,
          104,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v29);
      }
    }
    goto LABEL_44;
  }
  v39 = 0;
  v11 = CRecalcState::CreateRecalcState((__int64)a2, v9, 4u, &v39);
  if ( v11 )
  {
    CRecalcProp::AddPendingRecalcWork(this, v11);
    v19 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = *(_QWORD *)a2;
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
      LOBYTE(v23) = v20;
      LOBYTE(v24) = v19;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69152),
        4,
        7,
        103,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v21);
    }
    CRecalcProp::SignalRecalcWork((__int64)this, 0);
LABEL_44:
    CRecalcProp::ClearLastInterceptedTopology(this);
    CRecalcProp::PruneRecalcStateList((const struct tagWND **)this, 0LL);
    *((_BYTE *)this + 56) = 0;
    return;
  }
  v13 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(v15 + 69152),
      2,
      7,
      102,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
}
