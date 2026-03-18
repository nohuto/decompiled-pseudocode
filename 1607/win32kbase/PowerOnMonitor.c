/*
 * XREFs of PowerOnMonitor @ 0x1C00700B0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     IsDwmSyncFlushForceRenderAndWaitForBatchSupported_0 @ 0x1C0001CE8 (IsDwmSyncFlushForceRenderAndWaitForBatchSupported_0.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch_0 @ 0x1C0001CF0 (DwmSyncFlushForceRenderAndWaitForBatch_0.c)
 *     IsSetPointerSupported_0 @ 0x1C0001CF8 (IsSetPointerSupported_0.c)
 *     SetPointer_0 @ 0x1C0001D00 (SetPointer_0.c)
 *     IsModerncorePowerOnMonitorSupported_0 @ 0x1C0001D08 (IsModerncorePowerOnMonitorSupported_0.c)
 *     ModerncorePowerOnMonitor_0 @ 0x1C0001D10 (ModerncorePowerOnMonitor_0.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported_0 @ 0x1C0001D18 (IsDwmAsyncNotifyDisplayModeChangeSupported_0.c)
 *     DwmAsyncNotifyDisplayModeChange_0 @ 0x1C0001D20 (DwmAsyncNotifyDisplayModeChange_0.c)
 *     IsxxxRefreshDisplayOrientationSupported_0 @ 0x1C0001D28 (IsxxxRefreshDisplayOrientationSupported_0.c)
 *     xxxRefreshDisplayOrientation_0 @ 0x1C0001D30 (xxxRefreshDisplayOrientation_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     UserReferenceDwmApiPort @ 0x1C001F5C0 (UserReferenceDwmApiPort.c)
 *     ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C007003C (-DisarmPowerWatchdog@@YAXPEAX@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C0070400 (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C0070410 (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00704E4 (EtwTracPowerOnMonitoreBegin.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00704F4 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     SqmPowerState @ 0x1C0070710 (SqmPowerState.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0072080 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0072174 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00871A8 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00882D0 (DrvDxgkLogCodePointPacket.c)
 *     DrvChangeD3RequestsState @ 0x1C00887D8 (DrvChangeD3RequestsState.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // esi
  int v8; // ebx
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // ecx
  LARGE_INTEGER v18; // rbx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22[4]; // [rsp+40h] [rbp-38h] BYREF
  int v23; // [rsp+98h] [rbp+20h] BYREF

  result = gpbInHiberBoot;
  v6 = gPowerTransitionsState == 0;
  v8 = 0;
  v9 = 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    if ( v6 )
    {
      if ( !gProtocolType )
      {
        if ( !gPowerTransitionsState && !qword_1C011BB6C )
        {
          v23 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v23, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v10 = *((_QWORD *)gptiCurrent + 51);
          if ( v10 )
          {
            v11 = *(_QWORD *)(v10 + 8);
            if ( v11 )
            {
              if ( (*(_DWORD *)(v11 + 244) & 1) != 0 )
              {
                UserSessionSwitchLeaveCrit();
                if ( (int)IsDwmSyncFlushForceRenderAndWaitForBatchSupported_0() >= 0 )
                {
                  ArmPowerWatchdog(gpRequestWorkerWatchdog, 64LL);
                  UserReferenceDwmApiPort();
                  DwmSyncFlushForceRenderAndWaitForBatch_0();
                  DisarmPowerWatchdog(gpRequestWorkerWatchdog);
                }
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
                v16 = PsGetCurrentThreadWin32Thread(v15);
                if ( v16 )
                {
                  v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
                  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                    && (qword_1C0118B10 & 0x200000010000000LL) != 0
                    && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
                    && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                  {
                    LOBYTE(v17) = byte_1C0118B28 - 1;
                    Template_xqx(
                      v17,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v19,
                      v18.LowPart,
                      0,
                      gullUserCritAcquireToken);
                  }
                  if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                    && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                  {
                    Template_xqx(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v19,
                      0,
                      1000 * v18.QuadPart / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  }
                  *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                }
                gptiCurrent = v14;
                gbValidateHandleForIL = 1;
              }
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported_0() >= 0 )
          SetPointer_0();
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog(gpRequestWorkerWatchdog, 80LL);
        DrvSetMonitorPowerState(v20, 1LL, 0LL, a2);
        DisarmPowerWatchdog(gpRequestWorkerWatchdog);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( (int)IsModerncorePowerOnMonitorSupported_0() >= 0 )
          ModerncorePowerOnMonitor_0();
        if ( grpdeskRitInput && (int)IsSetPointerSupported_0() >= 0 )
          SetPointer_0();
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v21) = 1;
        DrvChangeD3RequestsState(v21);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C011BB10 == 2 )
      v8 = 1;
    if ( v8 )
    {
      UpdateDisplayState(PowerMonitorOn, a1, v6, 1);
      if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported_0() >= 0 )
      {
        ReferenceDwmApiPort();
        DwmAsyncNotifyDisplayModeChange_0();
      }
    }
    if ( v6 && grpdeskRitInput && (int)IsxxxRefreshDisplayOrientationSupported_0() >= 0 )
      xxxRefreshDisplayOrientation_0();
    if ( v9 )
    {
      v22[0] = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, v22, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
