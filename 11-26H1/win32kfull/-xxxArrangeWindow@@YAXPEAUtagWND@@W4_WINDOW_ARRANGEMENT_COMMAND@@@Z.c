/*
 * XREFs of ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140163F4C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14025FC74 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x140299C30 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1402C4070 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1402C4160 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1402C4744 (-IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402C4FD4 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402EDDD0 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxArrangeWindow(struct tagWND *a1, const struct tagWND *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // di
  int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  char v10; // r15
  char v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r9
  const char *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  CThreadLockedCurrentMonitorTopologyPtr *v24; // rcx
  struct tagWND *v25; // rdx
  bool v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // r14
  __int64 v37; // rbx
  __int64 UserSessionState; // rax
  int v39; // r8d
  int v40; // edx
  int v41; // r8d
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43[5]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v44[46]; // [rsp+80h] [rbp-80h] BYREF
  char v45; // [rsp+138h] [rbp+38h] BYREF

  v2 = (int)a2;
  if ( WindowArrangement::IsSupported(a1, a2) )
  {
    if ( (unsigned int)(v2 - 16) <= 7 )
    {
      v6 = 1;
      if ( (***(_DWORD ***)(W32GetUserSessionState(v5, v4) + 56968) > 1u || (unsigned int)(v2 - 22) > 1)
        && (v2 != 18 || !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)2)) )
      {
        v7 = EvaluateArrangeState((__int64)a1);
        if ( v7 != 4 )
        {
          v8 = *((_DWORD *)&unk_140362650 + 8 * (unsigned int)(v2 - 16) + v7 + 4);
          if ( v8 != 6 )
          {
            if ( (*((_DWORD *)&unk_140362650 + 8 * (unsigned int)(v2 - 16) + 3) & 1) == 0 )
            {
              LODWORD(v42) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7318);
            }
            if ( (unsigned int)ArrangeActionCompatibleWithStyle(a1, v8) )
            {
              if ( v8 )
              {
                if ( v8 != 1 )
                {
                  if ( v8 == 2 )
                  {
                    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
                    {
                      v6 = 0;
                    }
                    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      v37 = *(_QWORD *)a1;
                      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
                      LOBYTE(v39) = v36;
                      LOBYTE(v40) = v6;
                      WPP_RECORDER_AND_TRACE_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 3),
                        v40,
                        v39,
                        *(_QWORD *)(UserSessionState + 69152),
                        4,
                        4,
                        114,
                        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
                        v37);
                    }
                    xxxSysCommand(a1);
                  }
                  else if ( v8 == 3 )
                  {
                    if ( IsWindowVerticallyMaximized((struct tagRECT *)a1) )
                    {
                      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
                      {
                        v6 = 0;
                      }
                      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        v32 = *(_QWORD *)a1;
                        v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
                        LOBYTE(v34) = v31;
                        LOBYTE(v35) = v6;
                        WPP_RECORDER_AND_TRACE_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v35,
                          v34,
                          *(_QWORD *)(v33 + 69152),
                          4,
                          4,
                          116,
                          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
                          v32);
                      }
                    }
                    else
                    {
                      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
                      {
                        v6 = 0;
                      }
                      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      {
                        v27 = *(_QWORD *)a1;
                        v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
                        LOBYTE(v29) = v26;
                        LOBYTE(v30) = v6;
                        WPP_RECORDER_AND_TRACE_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v30,
                          v29,
                          *(_QWORD *)(v28 + 69152),
                          4,
                          4,
                          115,
                          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
                          v27);
                      }
                      AdvancedWindowPos::xxxVerticalMaximize((struct tagRECT *)a1, v25);
                    }
                  }
                  else if ( v8 - 4 <= 1 )
                  {
                    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
                    {
                      v10 = 0;
                    }
                    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      v12 = *(_QWORD *)a1;
                      v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v9) + 69152);
                      v14 = "Right";
                      if ( v8 != 4 )
                        v14 = "Left";
                      WPP_RECORDER_AND_TRACE_SF_sq(
                        *((_QWORD *)WPP_GLOBAL_Control + 3),
                        v10,
                        v11,
                        v13,
                        4u,
                        4u,
                        0x75u,
                        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
                        v14,
                        v12,
                        v42);
                    }
                    v15 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
                    if ( v8 == 4 )
                    {
                      v18 = *(_QWORD *)(v15 + 96);
                      v20 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 56968) + 144LL;
                      if ( v18 == v20 )
                        v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 56968) + 144LL);
                    }
                    else
                    {
                      v18 = *(_QWORD *)(v15 + 104);
                      v22 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 56968) + 144LL;
                      if ( v18 == v22 )
                        v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v22, v21) + 56968) + 152LL);
                    }
                    if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
                    {
                      AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v44, 0);
                      AdvancedWindowPos::CWindowAction::SetMonitor(
                        (AdvancedWindowPos::CWindowAction *)v44,
                        (struct tagMONITOR *)(v18 - 96),
                        1,
                        0LL);
                      v44[0] |= 0x80u;
                      AdvancedWindowPos::xxxApplyWindowAction(a1, v44, 4LL);
                      v24 = (CThreadLockedCurrentMonitorTopologyPtr *)&v45;
                    }
                    else
                    {
                      CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
                        (CThreadLockedCurrentMonitorTopologyPtr *)v43,
                        v23);
                      LODWORD(v42) = 0;
                      AdvancedWindowPos::xxxMigrateWindow((__int64)a1, v18 - 96, v43[0], 0LL, 0LL, 0, (int *)&v42, 0LL);
                      v24 = (CThreadLockedCurrentMonitorTopologyPtr *)v43;
                    }
                    CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(v24);
                  }
                  return;
                }
                v41 = 7333;
              }
              else
              {
                v41 = 7329;
              }
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v41);
            }
          }
        }
      }
    }
  }
}
