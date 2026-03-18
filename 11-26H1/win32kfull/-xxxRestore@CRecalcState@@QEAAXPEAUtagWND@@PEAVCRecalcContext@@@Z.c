/*
 * XREFs of ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402E0514
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14015E71C (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcState::xxxRestore(CRecalcState *this, struct tagWND *a2, struct CRecalcContext *a3)
{
  char v3; // bl
  __int64 v7; // rdx
  char v8; // bp
  char v9; // r15
  bool v10; // r13
  __int64 v11; // rdi
  int v12; // ebx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rcx
  int WindowState; // edi
  const char *StateString; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // r9d
  unsigned int v22; // r8d
  __m128i v23; // xmm1
  __int64 v24; // rdx
  struct tagRECT v25; // [rsp+50h] [rbp-48h] BYREF
  __m128i v26; // [rsp+60h] [rbp-38h] BYREF

  v3 = 0;
  if ( *((_BYTE *)this + 61) || (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x40) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1169);
  if ( *((struct tagTHREADINFO **)a2 + 2) != PtiCurrent((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1170);
  if ( (unsigned int)IsImmersiveBand((__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1171);
  if ( !*((_QWORD *)this + 9) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1172);
  v8 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v11 = *(_QWORD *)a2;
    v12 = *(_DWORD *)(*((_QWORD *)this + 2) + 12LL);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v14) = v10;
    LOBYTE(v15) = v9;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      37,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v11,
      v12);
    v3 = 0;
  }
  WindowState = AdvancedWindowPos::GetWindowState(a2);
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    v16 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v16 & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
      v3 = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v8 = 0;
  if ( v3 || v8 )
  {
    W32GetUserSessionState(v16, WPP_GLOBAL_Control);
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    LOBYTE(v19) = v8;
    LOBYTE(v20) = v3;
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      v21,
      5,
      7,
      38,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      (__int64)StateString);
  }
  v22 = *((_DWORD *)this + 6);
  v23 = *(__m128i *)((char *)this + 28);
  v24 = *((_QWORD *)this + 9);
  v25 = *(struct tagRECT *)((char *)this + 44);
  v26 = v23;
  if ( AdvancedWindowPos::xxxRestoreToPosAndState((__int64)a2, v24, v22, &v26, &v25, 331, (unsigned int *)a3 + 1) )
  {
    *(_DWORD *)a3 = 7;
    *((_DWORD *)a3 + 4) = *(_DWORD *)(*((_QWORD *)this + 2) + 12LL);
  }
}
