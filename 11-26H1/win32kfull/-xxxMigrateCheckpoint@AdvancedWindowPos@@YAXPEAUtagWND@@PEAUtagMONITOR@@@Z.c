/*
 * XREFs of ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8
 * Callers:
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140162C0C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14025FC74 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 */

void __fastcall AdvancedWindowPos::xxxMigrateCheckpoint(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct tagMONITOR *a3)
{
  __int64 UserSessionState; // rax
  char v6; // bl
  CHECKPOINT *Prop; // rsi
  __int64 v8; // rdx
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  struct tagRECT v15; // [rsp+40h] [rbp-38h] BYREF
  CMonitorTopology *v16[4]; // [rsp+50h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(this, a2);
  v6 = 1;
  Prop = (CHECKPOINT *)GetProp((__int64)this, *(unsigned __int16 *)(UserSessionState + 41374), 1u);
  if ( Prop || (v15 = 0LL, GetRect(this, (__int64)&v15, 66), (Prop = CHECKPOINT::Restore(this, &v15)) != 0LL) )
  {
    CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v16);
    anonymous_namespace_::xxxMigrateWindowCheckpoint(this, Prop, (__int64)a2, v16[0], 0LL, 0LL, 0, 0LL);
    if ( v16[0] )
    {
      v14 = PtiCurrent(v13);
      *((CMonitorTopology **)v14 + 47) = v16[1];
      if ( v16[0] )
        CMonitorTopology::Release(v16[0]);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69152),
        2,
        4,
        45,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
}
