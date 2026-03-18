/*
 * XREFs of xxxAppAdjustDpiCandidateRect @ 0x14028E0D0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14016111C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x14026CBFC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140199D38 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401D77C4 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxAppAdjustDpiCandidateRect(struct tagWND *a1, char a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  char v10; // r15
  char v11; // bp
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  char v17; // bp
  char v18; // bl
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  int v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+64h] [rbp-34h]

  v8 = 0;
  if ( IsWindowBroadcastingDpiToChildrenX(a1) )
  {
    v24 = a3[3] - a3[1];
    v23 = a3[2] - *a3;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v11 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v11 = 0;
    }
    if ( v10 || v11 )
    {
      v12 = *(_QWORD *)a1;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v14) = v11;
      LOBYTE(v15) = v10;
      WPP_RECORDER_AND_TRACE_SF_qddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        25,
        (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
        v12,
        a2,
        v23,
        v24);
    }
    if ( xxxSendMessage(a1, 0x2E4u) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v17 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v18 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v18 = 0;
      }
      if ( v17 || v18 )
      {
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(v19 + 69152),
          5,
          4,
          26,
          (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
          v23,
          v24);
      }
      v8 = 1;
      a4[1] = a3[1];
      *a4 = *a3;
      a4[2] = v23 + *a3;
      a4[3] = v24 + a3[1];
    }
  }
  return v8;
}
